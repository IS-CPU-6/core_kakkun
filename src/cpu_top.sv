`include "cpu_typedef.svh"
import cpu_pkg::*;

module cpu_top (
    input  logic clk,
    input  logic rst_n,
    output logic halt
);

  //IF_section

  logic [31:0] IF_pc;
  logic [31:0] IF_pc_plus4;
  logic [31:0] IF_instr;

  always_comb begin
    IF_pc_plus4 = IF_pc + 32'd4;
  end

  instruction_memory u_instruction_memory (
      .clk  (clk),
      .rst_n(rst_n),
      .addr (IF_pc),
      .data (IF_instr)
  );

  assign halt = (IF_instr == 32'b00000000000100000000000001110011);

  //ID_section


  logic [31:0] ID_pc;
  logic [31:0] ID_pc_plus4;
  logic [31:0] ID_instr;
  instruction_t ID_d_instr;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ID_pc <= 32'd0;
      ID_instr <= 32'h00000013;
      ID_pc_plus4 <= 32'd0;
    end else begin
      ID_instr <= IF_instr;
      ID_pc <= IF_pc;
      ID_pc_plus4 <= IF_pc_plus4;
    end
  end

  instruction_decoder u_instruction_decoder (
      .instr  (ID_instr),
      .d_instr(ID_d_instr)
  );

  write_enable_t ID_reg_we;
  write_enable_t ID_mem_we;
  alu_src_b_op_t ID_alu_src_b_op;
  alu_control_t  ID_alu_control;
  reg_wdata_op_t ID_reg_wdata_op;

  control_unit u_control_unit (
      .d_instr(ID_d_instr),
      .reg_we(ID_reg_we),
      .mem_we(ID_mem_we),
      .alu_src_b_op(ID_alu_src_b_op),
      .alu_control(ID_alu_control),
      .reg_wdata_op(ID_reg_wdata_op)
  );

  logic [31:0] ID_imm_result;

  immgen u_immgen (
      .instr (ID_instr),
      .result(ID_imm_result)
  );

  logic [31:0] ID_reg_rdata1;
  logic [31:0] ID_reg_rdata2;


  register_file u_register_file (
      .clk(clk),
      .rst_n(rst_n),
      .addr1(ID_instr[19:15]),
      .addr2(ID_instr[24:20]),
      .waddr(WR_instr[11:7]),
      .wdata(WR_reg_wdata),
      .we(WR_reg_we),
      .rdata1(ID_reg_rdata1),
      .rdata2(ID_reg_rdata2)
  );

  //EX_section

  logic [31:0] EX_pc;
  logic [31:0] EX_pc_plus4;
  logic [31:0] EX_instr;
  logic [31:0] EX_pc_label;
  logic [31:0] EX_pc_jump_target;
  logic EX_branch_taken;
  instruction_t EX_d_instr;

  logic [31:0] EX_reg_rdata1;
  logic [31:0] EX_reg_rdata2;
  logic [31:0] EX_imm_result;

  logic [31:0] EX_alu_src_a;
  logic [31:0] EX_alu_src_b;
  logic [31:0] EX_alu_result;
  alu_control_t EX_alu_control;
  alu_src_b_op_t EX_alu_src_b_op;
  write_enable_t EX_reg_we;
  write_enable_t EX_mem_we;
  reg_wdata_op_t EX_reg_wdata_op;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      EX_pc <= 32'd0;
      EX_pc_plus4 <= 32'd0;
      EX_instr <= 32'h00000013;
      EX_reg_rdata1 <= 32'd0;
      EX_reg_rdata2 <= 32'd0;
      EX_imm_result <= 32'd0;
      EX_alu_control <= ALU_ADD;
      EX_d_instr <= INST_ILLEGAL;
      EX_alu_src_b_op <= REG_RDATA2;
      EX_reg_we <= DISABLE;
      EX_mem_we <= DISABLE;
      EX_reg_wdata_op <= ALU_RESULT;
    end else begin
      EX_pc <= ID_pc;
      EX_pc_plus4 <= ID_pc_plus4;
      EX_instr <= ID_instr;
      EX_reg_rdata1 <= ID_reg_rdata1;
      EX_reg_rdata2 <= ID_reg_rdata2;
      EX_imm_result <= ID_imm_result;
      EX_alu_control <= ID_alu_control;
      EX_d_instr <= ID_d_instr;
      EX_alu_src_b_op <= ID_alu_src_b_op;
      EX_reg_we <= ID_reg_we;
      EX_mem_we <= ID_mem_we;
      EX_reg_wdata_op <= ID_reg_wdata_op;
    end
  end


  always_comb begin
    case (EX_d_instr)
      INST_AUIPC: begin
        EX_alu_src_a = EX_pc;
      end
      default: begin
        EX_alu_src_a = EX_reg_rdata1;
      end
    endcase
  end

  always_comb begin
    case (EX_alu_src_b_op)
      REG_RDATA2: begin
        EX_alu_src_b = EX_reg_rdata2;
      end
      IMM: begin
        EX_alu_src_b = EX_imm_result;
      end
      default: begin
        EX_alu_src_b = EX_reg_rdata2;
      end
    endcase
  end

  alu u_alu (
      .src_a(EX_alu_src_a),
      .src_b(EX_alu_src_b),
      .alu_control(EX_alu_control),
      .result(EX_alu_result)
  );

  assign EX_pc_label = EX_pc + EX_imm_result;
  assign EX_pc_jump_target = (EX_d_instr == INST_JALR) ? EX_alu_result & ~32'd1 : EX_pc_label;

  always_comb begin
    case (EX_d_instr)
      INST_JAL:  EX_branch_taken = 1'b1;
      INST_JALR: EX_branch_taken = 1'b1;
      INST_BEQ:  EX_branch_taken = (EX_reg_rdata1 == EX_reg_rdata2);
      INST_BNE:  EX_branch_taken = (EX_reg_rdata1 != EX_reg_rdata2);
      INST_BLT:  EX_branch_taken = ($signed(EX_reg_rdata1) < $signed(EX_reg_rdata2));
      INST_BGE:  EX_branch_taken = ($signed(EX_reg_rdata1) >= $signed(EX_reg_rdata2));
      INST_BLTU: EX_branch_taken = (EX_reg_rdata1 < EX_reg_rdata2);
      INST_BGEU: EX_branch_taken = (EX_reg_rdata1 >= EX_reg_rdata2);
      default:   EX_branch_taken = 1'b0;
    endcase
  end

  //MEM_section

  logic [31:0] MEM_pc_plus4;
  logic [31:0] MEM_instr;
  logic [31:0] MEM_alu_result;
  logic [31:0] MEM_reg_rdata2;
  write_enable_t MEM_reg_we;
  write_enable_t MEM_mem_we;
  instruction_t MEM_d_instr;
  logic [31:0] MEM_mem_rdata;
  reg_wdata_op_t MEM_reg_wdata_op;
  logic [31:0] MEM_imm_result;


  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      MEM_pc_plus4 <= 32'd0;
      MEM_instr <= 32'h00000013;
      MEM_alu_result <= 32'd0;
      MEM_reg_rdata2 <= 32'd0;
      MEM_reg_we <= DISABLE;
      MEM_mem_we <= DISABLE;
      MEM_d_instr <= INST_ILLEGAL;
      MEM_reg_wdata_op <= ALU_RESULT;
      MEM_imm_result <= 32'd0;
    end else begin
      MEM_pc_plus4 <= EX_pc_plus4;
      MEM_instr <= EX_instr;
      MEM_alu_result <= EX_alu_result;
      MEM_reg_rdata2 <= EX_reg_rdata2;
      MEM_reg_we <= EX_reg_we;
      MEM_mem_we <= EX_mem_we;
      MEM_d_instr <= EX_d_instr;
      MEM_reg_wdata_op <= EX_reg_wdata_op;
      MEM_imm_result <= EX_imm_result;
    end
  end

  data_memory u_data_memory (
      .clk(clk),
      .rst_n(rst_n),
      .addr(MEM_alu_result),
      .wdata(MEM_reg_rdata2),
      .we(MEM_mem_we),
      .d_instr(MEM_d_instr),
      .rdata(MEM_mem_rdata)
  );

  //WR_section
  logic [31:0] WR_instr;
  instruction_t WR_d_instr;
  reg_wdata_op_t WR_reg_wdata_op;
  write_enable_t WR_reg_we;
  logic [31:0] WR_pc_plus4;
  logic [31:0] WR_imm_result;
  logic [31:0] WR_mem_rdata;
  logic [31:0] WR_alu_result;
  logic [31:0] WR_reg_wdata;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      WR_instr <= 32'h00000013;
      WR_d_instr <= INST_ILLEGAL;
      WR_reg_wdata_op <= ALU_RESULT;
      WR_reg_we <= DISABLE;
      WR_pc_plus4 <= 32'd0;
      WR_imm_result <= 32'd0;
      WR_mem_rdata <= 32'd0;
      WR_alu_result <= 32'd0;
    end else begin
      WR_instr <= MEM_instr;
      WR_d_instr <= MEM_d_instr;
      WR_reg_wdata_op <= MEM_reg_wdata_op;
      WR_reg_we <= MEM_reg_we;
      WR_pc_plus4 <= MEM_pc_plus4;
      WR_imm_result <= MEM_imm_result;
      WR_mem_rdata <= MEM_mem_rdata;
      WR_alu_result <= MEM_alu_result;
    end
  end

  always_comb begin
    case (WR_d_instr)
      INST_LUI: begin
        WR_reg_wdata = WR_imm_result;
      end
      INST_JAL: begin
        WR_reg_wdata = WR_pc_plus4;
      end
      INST_JALR: begin
        WR_reg_wdata = WR_pc_plus4;
      end
      default: begin
        case (WR_reg_wdata_op)
          ALU_RESULT: begin
            WR_reg_wdata = WR_alu_result;
          end
          MEM_RDATA: begin
            WR_reg_wdata = WR_mem_rdata;
          end
          default: begin
            WR_reg_wdta = WR_alu_result;
          end
        endcase
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

endmodule








