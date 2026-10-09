`include "cpu_typedef.svh"
import cpu_pkg::*;

module cpu_top (
    input logic clk,
    input logic rst_n,
    output logic [31:0] pc,
    output logic halt
);
    logic [31:0] pc_plus_4;

    always_comb begin
        pc_plus_4 = pc + 32'd4;
    end

    logic [31:0] instr;

    instruction_memory u_instruction_memory(
        .clk (clk),
        .rst_n (rst_n),
        .addr (pc),
        .data (instr)
    );

    instruction_t d_instr;

    instruction_decoder u_instruction_decoder(
        .instr (instr),
        .d_instr (d_instr)
    );

    write_enable_t reg_we;
    write_enable_t mem_we;
    alu_src_b_op_t alu_src_b_op;
    alu_control_t alu_control;
    reg_wdata_op_t reg_wdata_op;

    control_unit u_control_unit(
        .d_instr (d_instr),
        .reg_we (reg_we),
        .mem_we (mem_we),
        .alu_src_b_op (alu_src_b_op),
        .alu_control (alu_control),
        .reg_wdata_op (reg_wdata_op)
    );

    logic [31:0] imm_result;

    immgen u_immgen(
        .instr (instr),
        .result (imm_result)
    );

    logic [31:0] reg_wdata;
    logic [31:0] reg_rdata1;
    logic [31:0] reg_rdata2;

    always_comb begin
        case (d_instr)
            INST_LUI: begin
                reg_wdata = imm_result;
            end
            INST_JAL: begin
                reg_wdata = pc_plus_4;
            end
            INST_JALR: begin
                reg_wdata = pc_plus_4;
            end
            default: begin
                case (reg_wdata_op)
                    ALU_RESULT: begin
                        reg_wdata = alu_result;
                    end
                    MEM_RDATA: begin
                        reg_wdata = mem_rdata;
                    end
                endcase
            end
        endcase
    end
    

    register_file u_register_file(
        .clk (clk),
        .rst_n (rst_n),
        .addr1 (instr[19:15]),
        .addr2 (instr[24:20]),
        .waddr (instr[11:7]),
        .wdata (reg_wdata),
        .we (reg_we),
        .rdata1 (reg_rdata1),
        .rdata2 (reg_rdata2)
    );

    logic [31:0] alu_src_a;
    logic [31:0] alu_src_b;
    logic [31:0] alu_result;

    always_comb begin
        case (d_instr)
            INST_AUIPC: begin
                alu_src_a = pc;
            end
            default: begin
                alu_src_a = reg_rdata1;
            end
        endcase
    end

    always_comb begin
        case (alu_src_b_op)
            REG_RDATA2: begin
                alu_src_b = reg_rdata2;
            end
            IMM: begin
                alu_src_b = imm_result;
            end
        endcase
    end

    alu u_alu(
        .src_a (alu_src_a),
        .src_b (alu_src_b),
        .alu_control (alu_control),
        .result (alu_result)
    );

    logic [31:0] mem_rdata;

    data_memory u_data_memory(
        .clk (clk),
        .rst_n (rst_n),
        .addr (alu_result),
        .wdata (reg_rdata2),
        .we (mem_we),
        .d_instr (d_instr),
        .rdata (mem_rdata)
    );

    logic [31:0] pc_next;
    logic [31:0] pc_label;
    assign pc_label = pc + imm_result;

    always_comb begin
        case (d_instr)
            INST_JAL: begin
                pc_next = pc_label;
            end
            INST_JALR: begin
                pc_next = alu_result & ~32'd1;
            end
            INST_BEQ: begin
                pc_next = (reg_rdata1 == reg_rdata2) ? pc_label : pc_plus_4;
            end
            INST_BNE: begin
                pc_next = (reg_rdata1 != reg_rdata2) ? pc_label : pc_plus_4;
            end
            INST_BLT: begin
                pc_next = ($signed(reg_rdata1) < $signed(reg_rdata2)) ? pc_label : pc_plus_4;
            end
            INST_BGE: begin
                pc_next = ($signed(reg_rdata1) >= $signed(reg_rdata2)) ? pc_label : pc_plus_4;
            end
            INST_BLTU: begin
                pc_next = (reg_rdata1 < reg_rdata2) ? pc_label : pc_plus_4;
            end
            INST_BGEU: begin
                pc_next = (reg_rdata1 >= reg_rdata2) ? pc_label : pc_plus_4;
            end
            default: begin
                pc_next = pc_plus_4;
            end
        endcase
    end



    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pc <= 32'd0;
        end else if (!halt) begin
            pc <= pc_next;
        end
    end

    assign halt = (d_instr == INST_EBREAK);
endmodule








