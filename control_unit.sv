`include "cpu_typedef.svh"
import cpu_pkg::*;


module control_unit(
    input instruction_t d_instr,
    output write_enable_t reg_we,
    output write_enable_t mem_we,
    output alu_src_b_op_t alu_src_b_op,
    output alu_control_t alu_control,
    output reg_wdata_op_t reg_wdata_op
);

    always_comb begin
        
        reg_we = DISABLE;
        mem_we = DISABLE;
        alu_src_b_op = REG_RDATA2;
        alu_control = ALU_ADD;
        reg_wdata_op = ALU_RESULT;
        case (d_instr)

            INST_ILLEGAL: ;

            INST_LUI: begin
                reg_we = ABLE;
            end
            INST_AUIPC: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
            end
            INST_JAL: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
            end
            INST_JALR: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
            end
            
            INST_BEQ: begin
                alu_src_b_op = IMM;
            end
            INST_BNE: begin
                alu_src_b_op = IMM;
            end
            INST_BLT: begin
                alu_src_b_op = IMM;
            end
            INST_BGE: begin
                alu_src_b_op = IMM;
            end
            INST_BLTU: begin
                alu_src_b_op = IMM;
            end
            INST_BGEU: begin
                alu_src_b_op = IMM;
            end

            INST_LB: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                reg_wdata_op = MEM_RDATA;
            end
            INST_LH: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                reg_wdata_op = MEM_RDATA;
            end
            INST_LW: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                reg_wdata_op = MEM_RDATA;
            end
            INST_LBU: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                reg_wdata_op = MEM_RDATA;
            end
            INST_LHU: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                reg_wdata_op = MEM_RDATA;
            end
            INST_SB: begin
                mem_we = ABLE;
                alu_src_b_op = IMM;
            end
            INST_SH: begin
                mem_we = ABLE;
                alu_src_b_op = IMM;
            end
            INST_SW: begin
                mem_we = ABLE;
                alu_src_b_op = IMM;
            end

            INST_ADDI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
            end
            INST_SLTI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_SLT;
            end
            INST_SLTIU: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_SLTU;
            end
            INST_XORI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_XOR;
            end
            INST_ORI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_OR;
            end
            INST_ANDI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_AND;
            end
            INST_SLLI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_SLL;
            end
            INST_SRLI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_SRL;
            end
            INST_SRAI: begin
                reg_we = ABLE;
                alu_src_b_op = IMM;
                alu_control = ALU_SRA;
            end
            INST_ADD: begin
                reg_we = ABLE;
            end
            INST_SUB: begin
                reg_we = ABLE;
                alu_control = ALU_SUB;
            end
            INST_SLL: begin
                reg_we = ABLE;
                alu_control = ALU_SLL;
            end
            INST_SLT: begin
                reg_we = ABLE;
                alu_control = ALU_SLT;
            end
            INST_SLTU: begin
                reg_we = ABLE;
                alu_control = ALU_SLTU;
            end
            INST_XOR: begin
                reg_we = ABLE;
                alu_control = ALU_XOR;
            end
            INST_SRL: begin
                reg_we = ABLE;
                alu_control = ALU_SRL;
            end
            INST_SRA: begin
                reg_we = ABLE;
                alu_control = ALU_SRA;
            end
            INST_OR: begin
                reg_we = ABLE;
                alu_control = ALU_OR;
            end
            INST_AND: begin
                reg_we = ABLE;
                alu_control = ALU_AND;
            end

            INST_EBREAK: ;
            INST_FENCE: ;
            INST_PAUSE: ;

            INST_MUL: ;
            INST_MULH: ;
            INST_MULHSU: ;
            INST_MULHU: ;
            INST_DIV: ;
            INST_DIVU: ;
            INST_REM: ;
            INST_REMU: ;
        endcase
    end
endmodule
