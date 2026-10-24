
`include "cpu_typedef_pkg.svh"
import cpu_typedef_pkg::*;

module cpu_top (
    input logic clk,
    input logic rst_n,
    output logic halt,
    output logic [31:0] imem_addr,
    input logic [31:0] imem_rdata
);

  stall_t stall;
  forward_t rdata1_forward;
  forward_t rdata2_forward;
  forward_t f_rdata1_forward;
  forward_t f_rdata2_forward;
  forward_t f_rdata3_forward;

  //declaration maeyose
  logic [31:0] IF_pc;
  logic [31:0] IF_pc_plus4;
  logic [31:0] IF_instr;

  logic [31:0] ID_pc;
  logic [31:0] ID_pc_plus4;
  logic [31:0] ID_instr;
  instruction_t ID_d_instr;

  write_enable_t ID_reg_we;
  write_enable_t ID_f_reg_we;
  write_enable_t ID_mem_we;
  alu_src_b_op_t ID_alu_src_b_op;
  alu_control_t ID_alu_control;
  fpu_op_t ID_fpu_control;
  reg_wdata_op_t ID_reg_wdata_op;
  mem_wdata_op_t ID_mem_wdata_op;
  fpu_src_a_op_t ID_fpu_src_a_op;
  f_reg_wdata_op_t ID_f_reg_wdata_op;

  logic [31:0] ID_imm_result;

  logic [31:0] ID_reg_tentative_rdata1;
  logic [31:0] ID_reg_tentative_rdata2;
  logic [31:0] ID_reg_rdata1;
  logic [31:0] ID_reg_rdata2;

  logic [31:0] ID_f_reg_tentative_rdata1;
  logic [31:0] ID_f_reg_tentative_rdata2;
  logic [31:0] ID_f_reg_tentative_rdata3;
  logic [31:0] ID_f_reg_rdata1;
  logic [31:0] ID_f_reg_rdata2;
  logic [31:0] ID_f_reg_rdata3;

  logic [4:0] ID_reg_addr1;
  logic [4:0] ID_reg_addr2;
  logic [4:0] ID_reg_addr3;
  logic [4:0] ID_reg_waddr;

  logic [31:0] EX_instr;
  logic [31:0] EX_pc;
  logic [31:0] EX_pc_plus4;
  logic [4:0] EX_reg_waddr;
  logic [31:0] EX_pc_label;
  logic [31:0] EX_pc_jump_target;
  logic EX_branch_taken;
  instruction_t EX_d_instr;


  logic [31:0] EX_reg_rdata1;
  logic [31:0] EX_reg_rdata2;
  logic [31:0] EX_true_reg_rdata1;
  logic [31:0] EX_true_reg_rdata2;
  logic [31:0] EX_f_reg_rdata1;
  logic [31:0] EX_f_reg_rdata2;
  logic [31:0] EX_f_reg_rdata3;
  logic [31:0] EX_f_true_reg_rdata1;
  logic [31:0] EX_f_true_reg_rdata2;
  logic [31:0] EX_f_true_reg_rdata3;
  logic [31:0] EX_imm_result;
  forward_t EX_rdata1_forward;
  forward_t EX_rdata2_forward;
  forward_t EX_f_rdata1_forward;
  forward_t EX_f_rdata2_forward;
  forward_t EX_f_rdata3_forward;
  logic [31:0] EX_alu_src_a;
  logic [31:0] EX_alu_src_b;
  logic [31:0] EX_alu_result;
  logic [31:0] EX_fpu_src_a;
  logic [31:0] EX_fpu_src_b;
  logic [31:0] EX_fpu_src_c;
  logic [31:0] EX_fpu_result;
  alu_control_t EX_alu_control;
  fpu_op_t EX_fpu_control;
  alu_src_b_op_t EX_alu_src_b_op;
  write_enable_t EX_reg_we;
  write_enable_t EX_f_reg_we;
  write_enable_t EX_mem_we;
  reg_wdata_op_t EX_reg_wdata_op;
  fpu_src_a_op_t EX_fpu_src_a_op;
  mem_wdata_op_t EX_mem_wdata_op;
  f_reg_wdata_op_t EX_f_reg_wdata_op;

  logic [31:0] MEM_instr;
  logic [31:0] MEM_pc;
  logic [31:0] MEM_pc_plus4;
  logic [4:0] MEM_reg_waddr;
  logic [31:0] MEM_alu_result;
  logic [31:0] MEM_true_reg_rdata2;
  write_enable_t MEM_reg_we;
  write_enable_t MEM_f_reg_we;
  write_enable_t MEM_mem_we;
  instruction_t MEM_d_instr;
  logic [31:0] MEM_mem_rdata;
  reg_wdata_op_t MEM_reg_wdata_op;
  logic [31:0] MEM_imm_result;
  logic [31:0] MEM_forward_wdata;
  mem_wdata_op_t MEM_mem_wdata_op;
  f_reg_wdata_op_t MEM_f_reg_wdata_op;
  logic [31:0] MEM_mem_wdata;
  logic [31:0] MEM_f_true_reg_rdata2;
  logic [31:0] MEM_fpu_result;
  logic [31:0] MEM_f_forward_wdata;

  logic [31:0] WR_instr;
  logic [31:0] WR_pc;
  logic [4:0] WR_reg_waddr;
  instruction_t WR_d_instr;
  reg_wdata_op_t WR_reg_wdata_op;
  write_enable_t WR_reg_we;
  write_enable_t WR_f_reg_we;
  write_enable_t WR_mem_we;
  logic [31:0] WR_pc_plus4;
  logic [31:0] WR_imm_result;
  logic [31:0] WR_mem_rdata;
  logic [31:0] WR_alu_result;
  logic [31:0] WR_reg_wdata;
  logic [31:0] WR_true_reg_rdata2;
  logic [31:0] WR_f_reg_wdata;
  logic [31:0] WR_fpu_result;
  f_reg_wdata_op_t WR_f_reg_wdata_op;
  logic [31:0] WR_mem_wdata;

  //hazard_section

  hazard_unit u_hazard_unit (
      .EX_branch_taken(EX_branch_taken),
      .ID_d_instr(ID_d_instr),
      .EX_d_instr(EX_d_instr),
      .MEM_d_instr(MEM_d_instr),
      .EX_reg_we(EX_reg_we),
      .EX_f_reg_we(EX_f_reg_we),
      .MEM_reg_we(MEM_reg_we),
      .MEM_f_reg_we(MEM_f_reg_we),
      .ID_reg_addr1(ID_reg_addr1),
      .ID_reg_addr2(ID_reg_addr2),
      .ID_reg_addr3(ID_reg_addr3),
      .EX_reg_waddr(EX_reg_waddr),
      .MEM_reg_waddr(MEM_reg_waddr),
      .stall(stall),
      .rdata1_forward(rdata1_forward),
      .rdata2_forward(rdata2_forward),
      .f_rdata1_forward(f_rdata1_forward),
      .f_rdata2_forward(f_rdata2_forward),
      .f_rdata3_forward(f_rdata3_forward)
  );

  //IF_section

  always_comb begin
    IF_pc_plus4 = IF_pc + 32'd4;
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      IF_pc <= 32'h8000_0000;
    end else if (!halt && (stall == BRANCH_STALL)) begin
      IF_pc <= EX_pc_jump_target;
    end else if (!halt && (stall == RAW_STALL)) begin
      IF_pc <= IF_pc;
    end else if (!halt) begin
      IF_pc <= IF_pc_plus4;
    end else if (halt) begin
      IF_pc <= IF_pc;
    end
  end


  // instruction_memory u_instruction_memory (
  //     .clk  (clk),
  //     .rst_n(rst_n),
  //     .addr (IF_pc),
  //     .data (IF_instr)
  // );

  assign imem_addr = IF_pc;
  assign IF_instr = imem_rdata;

  assign halt = (WR_instr == 32'b00000000000100000000000001110011);

  //ID_section

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      ID_pc <= 32'h8000_0000;
      ID_instr <= 32'd0;
      ID_pc_plus4 <= 32'h8000_0000;
    end else if (stall == BRANCH_STALL) begin
      ID_pc       <= 32'h8000_0000;
      ID_instr    <= 32'd0;
      ID_pc_plus4 <= 32'h8000_0000;
    end else if (stall == RAW_STALL) begin
      ID_instr <= ID_instr;
      ID_pc <= ID_pc;
      ID_pc_plus4 <= ID_pc_plus4;
    end else if (halt) begin
      ID_instr <= ID_instr;
      ID_pc <= ID_pc;
      ID_pc_plus4 <= ID_pc_plus4;
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

  control_unit u_control_unit (
      .d_instr(ID_d_instr),
      .reg_we(ID_reg_we),
      .f_reg_we(ID_f_reg_we),
      .mem_we(ID_mem_we),
      .alu_src_b_op(ID_alu_src_b_op),
      .alu_control(ID_alu_control),
      .fpu_control(ID_fpu_control),
      .reg_wdata_op(ID_reg_wdata_op),
      .mem_wdata_op(ID_mem_wdata_op),
      .fpu_src_a_op(ID_fpu_src_a_op),
      .f_reg_wdata_op(ID_f_reg_wdata_op)
  );

  immgen u_immgen (
      .instr (ID_instr),
      .result(ID_imm_result)
  );

  assign ID_reg_addr1 = ID_instr[19:15];
  assign ID_reg_addr2 = ID_instr[24:20];
  assign ID_reg_addr3 = ID_instr[31:27];
  assign ID_reg_waddr = ID_instr[11:7];

  register_file u_register_file (
      .clk(clk),
      .rst_n(rst_n),
      .addr1(ID_reg_addr1),
      .addr2(ID_reg_addr2),
      .waddr(WR_reg_waddr),
      .wdata(WR_reg_wdata),
      .we(WR_reg_we),
      .rdata1(ID_reg_tentative_rdata1),
      .rdata2(ID_reg_tentative_rdata2)
  );

  f_register_file u_f_register_file (
      .clk(clk),
      .rst_n(rst_n),
      .addr1(ID_reg_addr1),
      .addr2(ID_reg_addr2),
      .addr3(ID_reg_addr3),
      .waddr(WR_reg_waddr),
      .wdata(WR_f_reg_wdata),
      .we(WR_f_reg_we),
      .rdata1(ID_f_reg_tentative_rdata1),
      .rdata2(ID_f_reg_tentative_rdata2),
      .rdata3(ID_f_reg_tentative_rdata3)
  );


  assign ID_reg_rdata1 = (ID_reg_addr1 == 5'd0) ?  32'd0
    : ((ID_reg_addr1 == WR_reg_waddr) && (WR_reg_we == ABLE)) ? WR_reg_wdata
    : ID_reg_tentative_rdata1;
  assign ID_reg_rdata2 = (ID_reg_addr2 == 5'd0) ?  32'd0
    : ((ID_reg_addr2 == WR_reg_waddr) && (WR_reg_we == ABLE)) ? WR_reg_wdata
    : ID_reg_tentative_rdata2;

  assign ID_f_reg_rdata1 = ((ID_reg_addr1 == WR_reg_waddr) && (WR_f_reg_we == ABLE)) ? 
    WR_f_reg_wdata : ID_f_reg_tentative_rdata1;
  assign ID_f_reg_rdata2 = ((ID_reg_addr2 == WR_reg_waddr) && (WR_f_reg_we == ABLE)) ? 
    WR_f_reg_wdata : ID_f_reg_tentative_rdata2;
  assign ID_f_reg_rdata3 = ((ID_reg_addr3 == WR_reg_waddr) && (WR_f_reg_we == ABLE)) ? 
    WR_f_reg_wdata : ID_f_reg_tentative_rdata3;


  //EX_section

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      EX_instr <= 32'd0;
      EX_pc <= 32'h8000_0000;
      EX_pc_plus4 <= 32'h8000_0000;
      EX_reg_waddr <= 5'd0;
      EX_reg_rdata1 <= 32'd0;
      EX_reg_rdata2 <= 32'd0;
      EX_f_reg_rdata1 <= 32'd0;
      EX_f_reg_rdata2 <= 32'd0;
      EX_f_reg_rdata3 <= 32'd0;
      EX_imm_result <= 32'd0;
      EX_alu_control <= ALU_ADD;
      EX_fpu_control <= FPU_ADD;
      EX_d_instr <= INST_NOP;
      EX_alu_src_b_op <= REG_RDATA2;
      EX_fpu_src_a_op <= F_REG_RDATA1;
      EX_reg_we <= DISABLE;
      EX_f_reg_we <= DISABLE;
      EX_mem_we <= DISABLE;
      EX_reg_wdata_op <= ALU_RESULT;
      EX_rdata1_forward <= NON_FORWARD;
      EX_rdata2_forward <= NON_FORWARD;
      EX_f_rdata1_forward <= NON_FORWARD;
      EX_f_rdata2_forward <= NON_FORWARD;
      EX_f_rdata3_forward <= NON_FORWARD;
      EX_mem_wdata_op <= MEM_REG_RDATA2;
      EX_f_reg_wdata_op <= F_FPU_RESULT;
    end else if ((stall == RAW_STALL) || (stall == BRANCH_STALL)) begin
      EX_instr <= 32'd0;
      EX_pc <= 32'h8000_0000;
      EX_pc_plus4 <= 32'h8000_0000;
      EX_reg_waddr <= 5'd0;
      EX_reg_rdata1 <= 32'd0;
      EX_reg_rdata2 <= 32'd0;
      EX_f_reg_rdata1 <= 32'd0;
      EX_f_reg_rdata2 <= 32'd0;
      EX_f_reg_rdata3 <= 32'd0;
      EX_imm_result <= 32'd0;
      EX_alu_control <= ALU_ADD;
      EX_fpu_control <= FPU_ADD;
      EX_d_instr <= INST_NOP;
      EX_alu_src_b_op <= REG_RDATA2;
      EX_fpu_src_a_op <= F_REG_RDATA1;
      EX_reg_we <= DISABLE;
      EX_f_reg_we <= DISABLE;
      EX_mem_we <= DISABLE;
      EX_reg_wdata_op <= ALU_RESULT;
      EX_rdata1_forward <= NON_FORWARD;
      EX_rdata2_forward <= NON_FORWARD;
      EX_f_rdata1_forward <= NON_FORWARD;
      EX_f_rdata2_forward <= NON_FORWARD;
      EX_f_rdata3_forward <= NON_FORWARD;
      EX_mem_wdata_op <= MEM_REG_RDATA2;
      EX_f_reg_wdata_op <= F_FPU_RESULT;
    end else if (halt) begin
      EX_instr <= EX_instr;
      EX_pc <= EX_pc;
      EX_pc_plus4 <= EX_pc_plus4;
      EX_reg_waddr <= EX_reg_waddr;
      EX_reg_rdata1 <= EX_reg_rdata1;
      EX_reg_rdata2 <= EX_reg_rdata2;
      EX_f_reg_rdata1 <= EX_f_reg_rdata1;
      EX_f_reg_rdata2 <= EX_f_reg_rdata2;
      EX_f_reg_rdata3 <= EX_f_reg_rdata3;
      EX_imm_result <= EX_imm_result;
      EX_alu_control <= EX_alu_control;
      EX_fpu_control <= EX_fpu_control;
      EX_d_instr <= EX_d_instr;
      EX_alu_src_b_op <= EX_alu_src_b_op;
      EX_fpu_src_a_op <= EX_fpu_src_a_op;
      EX_reg_we <= EX_reg_we;
      EX_f_reg_we <= EX_f_reg_we;
      EX_mem_we <= EX_mem_we;
      EX_reg_wdata_op <= EX_reg_wdata_op;
      EX_rdata1_forward <= EX_rdata1_forward;
      EX_rdata2_forward <= EX_rdata2_forward;
      EX_f_rdata1_forward <= EX_f_rdata1_forward;
      EX_f_rdata2_forward <= EX_f_rdata2_forward;
      EX_f_rdata3_forward <= EX_f_rdata3_forward;
      EX_mem_wdata_op <= EX_mem_wdata_op;
      EX_f_reg_wdata_op <= EX_f_reg_wdata_op;
    end else begin
      EX_instr <= ID_instr;
      EX_pc <= ID_pc;
      EX_pc_plus4 <= ID_pc_plus4;
      EX_reg_waddr <= ID_reg_waddr;
      EX_reg_rdata1 <= ID_reg_rdata1;
      EX_reg_rdata2 <= ID_reg_rdata2;
      EX_f_reg_rdata1 <= ID_f_reg_rdata1;
      EX_f_reg_rdata2 <= ID_f_reg_rdata2;
      EX_f_reg_rdata3 <= ID_f_reg_rdata3;
      EX_imm_result <= ID_imm_result;
      EX_alu_control <= ID_alu_control;
      EX_fpu_control <= ID_fpu_control;
      EX_d_instr <= ID_d_instr;
      EX_alu_src_b_op <= ID_alu_src_b_op;
      EX_fpu_src_a_op <= ID_fpu_src_a_op;
      EX_reg_we <= ID_reg_we;
      EX_f_reg_we <= ID_f_reg_we;
      EX_mem_we <= ID_mem_we;
      EX_reg_wdata_op <= ID_reg_wdata_op;
      EX_rdata1_forward <= rdata1_forward;
      EX_rdata2_forward <= rdata2_forward;
      EX_f_rdata1_forward <= f_rdata1_forward;
      EX_f_rdata2_forward <= f_rdata2_forward;
      EX_f_rdata3_forward <= f_rdata3_forward;
      EX_mem_wdata_op <= ID_mem_wdata_op;
      EX_f_reg_wdata_op <= ID_f_reg_wdata_op;
    end
  end

  assign EX_true_reg_rdata1 = (EX_rdata1_forward == EX_FORWARD) ? MEM_forward_wdata
    : (EX_rdata1_forward == MEM_FORWARD) ? WR_reg_wdata
    : EX_reg_rdata1;
  assign EX_true_reg_rdata2 = (EX_rdata2_forward == EX_FORWARD) ? MEM_forward_wdata
    : (EX_rdata2_forward == MEM_FORWARD) ? WR_reg_wdata
    : EX_reg_rdata2;

  assign EX_f_true_reg_rdata1 = (EX_f_rdata1_forward == EX_FORWARD) ? MEM_f_forward_wdata
    : (EX_f_rdata1_forward == MEM_FORWARD) ? WR_f_reg_wdata : EX_f_reg_rdata1;
  assign EX_f_true_reg_rdata2 = (EX_f_rdata2_forward == EX_FORWARD) ? MEM_f_forward_wdata
    : (EX_f_rdata2_forward == MEM_FORWARD) ? WR_f_reg_wdata : EX_f_reg_rdata2;
  assign EX_f_true_reg_rdata3 = (EX_f_rdata3_forward == EX_FORWARD) ? MEM_f_forward_wdata
    : (EX_f_rdata3_forward == MEM_FORWARD) ? WR_f_reg_wdata : EX_f_reg_rdata3;

  always_comb begin
    case (EX_d_instr)
      INST_AUIPC: begin
        EX_alu_src_a = EX_pc;
      end
      default: begin
        EX_alu_src_a = EX_true_reg_rdata1;
      end
    endcase
  end

  always_comb begin
    case (EX_alu_src_b_op)
      REG_RDATA2: begin
        EX_alu_src_b = EX_true_reg_rdata2;
      end
      IMM: begin
        EX_alu_src_b = EX_imm_result;
      end
      default: begin
        EX_alu_src_b = EX_true_reg_rdata2;
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

  /*  always_comb begin
    case (EX_d_instr)
      INST_JAL:  EX_branch_taken = 1'b1;
      INST_JALR: EX_branch_taken = 1'b1;
      INST_BEQ:  EX_branch_taken = (EX_true_reg_rdata1 == EX_true_reg_rdata2);
      INST_BNE:  EX_branch_taken = (EX_true_reg_rdata1 != EX_true_reg_rdata2);
      INST_BLT:  EX_branch_taken = ($signed(EX_true_reg_rdata1) < $signed(EX_true_reg_rdata2));
      INST_BGE:  EX_branch_taken = ($signed(EX_true_reg_rdata1) >= $signed(EX_true_reg_rdata2));
      INST_BLTU: EX_branch_taken = (EX_true_reg_rdata1 < EX_true_reg_rdata2);
      INST_BGEU: EX_branch_taken = (EX_true_reg_rdata1 >= EX_true_reg_rdata2);
      default:   EX_branch_taken = 1'b0;
    endcase
  end*/

  always_comb begin
    case (EX_instr[6:0])
      7'b1101111: EX_branch_taken = 1'b1;
      7'b1100111: EX_branch_taken = 1'b1;
      7'b1100011: begin
        case (EX_instr[14:12])
          3'b000:  EX_branch_taken = (EX_true_reg_rdata1 == EX_true_reg_rdata2);
          3'b001:  EX_branch_taken = (EX_true_reg_rdata1 != EX_true_reg_rdata2);
          3'b100:  EX_branch_taken = ($signed(EX_true_reg_rdata1) < $signed(EX_true_reg_rdata2));
          3'b101:  EX_branch_taken = ($signed(EX_true_reg_rdata1) >= $signed(EX_true_reg_rdata2));
          3'b110:  EX_branch_taken = (EX_true_reg_rdata1 < EX_true_reg_rdata2);
          3'b111:  EX_branch_taken = (EX_true_reg_rdata1 >= EX_true_reg_rdata2);
          default: EX_branch_taken = 1'b0;
        endcase
      end
      default: EX_branch_taken = 1'b0;
    endcase
  end

  always_comb begin
    case (EX_fpu_src_a_op)
      REG_RDATA1: begin
        EX_fpu_src_a = EX_true_reg_rdata1;
      end
      default: begin
        EX_fpu_src_a = EX_f_true_reg_rdata1;
      end
    endcase
  end

  assign EX_fpu_src_b = EX_f_true_reg_rdata2;
  assign EX_fpu_src_c = EX_f_true_reg_rdata3;

  fpu u_fpu (
      .clk(clk),
      .rst(rst_n),
      //.req_valid(),
      //.req_ready(),
      .req_op(EX_fpu_control),
      .req_a(EX_fpu_src_a),
      .req_b(EX_fpu_src_b),
      .req_c(EX_fpu_src_c),
      //.rsp_valid(),
      .rsp_y(EX_fpu_result)
  );



  //MEM_section

  logic MEM_branch_taken;
  logic [31:0] MEM_true_reg_rdata1;
  stall_t MEM_stall;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      MEM_instr <= 32'd0;
      MEM_pc <= 32'h8000_0000;
      MEM_pc_plus4 <= 32'h8000_0000;
      MEM_reg_waddr <= 5'd0;
      MEM_alu_result <= 32'd0;
      MEM_true_reg_rdata2 <= 32'd0;
      MEM_reg_we <= DISABLE;
      MEM_f_reg_we <= DISABLE;
      MEM_mem_we <= DISABLE;
      MEM_d_instr <= INST_NOP;
      MEM_reg_wdata_op <= ALU_RESULT;
      MEM_imm_result <= 32'd0;
      MEM_branch_taken <= 1'b0;
      MEM_true_reg_rdata1 <= 32'd0;
      MEM_stall <= NON_STALL;
      MEM_mem_wdata_op <= MEM_REG_RDATA2;
      MEM_f_reg_wdata_op <= F_FPU_RESULT;
      MEM_f_true_reg_rdata2 <= 32'd0;
      MEM_fpu_result <= 32'd0;
    end else if (halt) begin
      MEM_instr <= MEM_instr;
      MEM_pc <= MEM_pc;
      MEM_pc_plus4 <= MEM_pc_plus4;
      MEM_reg_waddr <= MEM_reg_waddr;
      MEM_alu_result <= MEM_alu_result;
      MEM_true_reg_rdata2 <= MEM_true_reg_rdata2;
      MEM_reg_we <= MEM_reg_we;
      MEM_f_reg_we <= MEM_f_reg_we;
      MEM_mem_we <= MEM_mem_we;
      MEM_d_instr <= MEM_d_instr;
      MEM_reg_wdata_op <= MEM_reg_wdata_op;
      MEM_imm_result <= MEM_imm_result;
      MEM_branch_taken <= MEM_branch_taken;
      MEM_true_reg_rdata1 <= MEM_true_reg_rdata1;
      MEM_stall <= MEM_stall;
      MEM_mem_wdata_op <= MEM_mem_wdata_op;
      MEM_f_reg_wdata_op <= MEM_f_reg_wdata_op;
      MEM_f_true_reg_rdata2 <= MEM_f_true_reg_rdata2;
      MEM_fpu_result <= MEM_fpu_result;
    end else begin
      MEM_instr <= EX_instr;
      MEM_pc <= EX_pc;
      MEM_pc_plus4 <= EX_pc_plus4;
      MEM_reg_waddr <= EX_reg_waddr;
      MEM_alu_result <= EX_alu_result;
      MEM_true_reg_rdata2 <= EX_true_reg_rdata2;
      MEM_reg_we <= EX_reg_we;
      MEM_f_reg_we <= EX_f_reg_we;
      MEM_mem_we <= EX_mem_we;
      MEM_d_instr <= EX_d_instr;
      MEM_reg_wdata_op <= EX_reg_wdata_op;
      MEM_imm_result <= EX_imm_result;
      MEM_branch_taken <= EX_branch_taken;
      MEM_true_reg_rdata1 <= EX_true_reg_rdata1;
      MEM_stall <= stall;
      MEM_mem_wdata_op <= EX_mem_wdata_op;
      MEM_f_reg_wdata_op <= EX_f_reg_wdata_op;
      MEM_f_true_reg_rdata2 <= EX_f_true_reg_rdata2;
      MEM_fpu_result <= EX_fpu_result;
    end
  end

  always_comb begin
    case (MEM_mem_wdata_op)
      MEM_F_REG_RDATA2: begin
        MEM_mem_wdata = MEM_f_true_reg_rdata2;
      end
      default: begin
        MEM_mem_wdata = MEM_true_reg_rdata2;
      end
    endcase
  end

  data_memory u_data_memory (
      .clk(clk),
      .rst_n(rst_n),
      .addr(MEM_alu_result),
      .wdata(MEM_mem_wdata),
      .we(MEM_mem_we),
      .d_instr(MEM_d_instr),
      .rdata(MEM_mem_rdata)
  );

  always_comb begin
    case (MEM_d_instr)
      INST_LUI: begin
        MEM_forward_wdata = MEM_imm_result;
      end
      INST_JAL: begin
        MEM_forward_wdata = MEM_pc_plus4;
      end
      INST_JALR: begin
        MEM_forward_wdata = MEM_pc_plus4;
      end
      default: begin
        case (MEM_reg_wdata_op)
          FPU_RESULT: begin
            MEM_forward_wdata = MEM_fpu_result;
          end
          default: begin
            MEM_forward_wdata = MEM_alu_result;
          end
        endcase
      end
    endcase
  end

  always_comb begin
    MEM_f_forward_wdata = MEM_fpu_result;
  end


  //WR_section
  /*logic [31:0] WR_instr;
  logic [31:0] WR_pc;
  logic [4:0] WR_reg_waddr;
  instruction_t WR_d_instr;
  reg_wdata_op_t WR_reg_wdata_op;
  write_enable_t WR_reg_we;
  write_enable_t WR_mem_we;
  logic [31:0] WR_pc_plus4;
  logic [31:0] WR_imm_result;
  logic [31:0] WR_mem_rdata;
  logic [31:0] WR_alu_result;
  logic [31:0] WR_reg_wdata;
  logic [31:0] WR_true_reg_rdata2;*/

  logic WR_branch_taken;
  logic [31:0] WR_true_reg_rdata1;
  stall_t WR_stall;
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      WR_instr <= 32'd0;
      WR_pc <= 32'h8000_0000;
      WR_reg_waddr <= 5'd0;
      WR_d_instr <= INST_NOP;
      WR_reg_wdata_op <= ALU_RESULT;
      WR_reg_we <= DISABLE;
      WR_f_reg_we <= DISABLE;
      WR_mem_we <= DISABLE;
      WR_pc_plus4 <= 32'h8000_0000;
      WR_imm_result <= 32'd0;
      WR_mem_rdata <= 32'd0;
      WR_alu_result <= 32'd0;
      WR_true_reg_rdata2 <= 32'd0;
      WR_branch_taken <= 1'b0;
      WR_true_reg_rdata1 <= 32'd0;
      WR_stall <= NON_STALL;
      WR_fpu_result <= 32'd0;
      WR_f_reg_wdata_op <= F_FPU_RESULT;
      WR_mem_wdata <= 32'd0;
    end else if (halt) begin
      WR_instr <= WR_instr;
      WR_pc <= WR_pc;
      WR_reg_waddr <= WR_reg_waddr;
      WR_d_instr <= WR_d_instr;
      WR_reg_wdata_op <= WR_reg_wdata_op;
      WR_reg_we <= WR_reg_we;
      WR_f_reg_we <= WR_f_reg_we;
      WR_mem_we <= WR_mem_we;
      WR_pc_plus4 <= WR_pc_plus4;
      WR_imm_result <= WR_imm_result;
      WR_mem_rdata <= WR_mem_rdata;
      WR_alu_result <= WR_alu_result;
      WR_true_reg_rdata2 <= WR_true_reg_rdata2;
      WR_branch_taken <= WR_branch_taken;
      WR_true_reg_rdata1 <= WR_true_reg_rdata1;
      WR_stall <= WR_stall;
      WR_fpu_result <= WR_fpu_result;
      WR_f_reg_wdata_op <= WR_f_reg_wdata_op;
      WR_mem_wdata <= WR_mem_wdata;
    end else begin
      WR_instr <= MEM_instr;
      WR_pc <= MEM_pc;
      WR_reg_waddr <= MEM_reg_waddr;
      WR_d_instr <= MEM_d_instr;
      WR_reg_wdata_op <= MEM_reg_wdata_op;
      WR_reg_we <= MEM_reg_we;
      WR_f_reg_we <= MEM_f_reg_we;
      WR_mem_we <= MEM_mem_we;
      WR_pc_plus4 <= MEM_pc_plus4;
      WR_imm_result <= MEM_imm_result;
      WR_mem_rdata <= MEM_mem_rdata;
      WR_alu_result <= MEM_alu_result;
      WR_true_reg_rdata2 <= MEM_true_reg_rdata2;
      WR_branch_taken <= MEM_branch_taken;
      WR_true_reg_rdata1 <= MEM_true_reg_rdata1;
      WR_stall <= MEM_stall;
      WR_fpu_result <= MEM_fpu_result;
      WR_f_reg_wdata_op <= MEM_f_reg_wdata_op;
      WR_mem_wdata <= MEM_mem_wdata;
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
          FPU_RESULT: begin
            WR_reg_wdata = WR_fpu_result;
          end
          default: begin
            WR_reg_wdata = WR_alu_result;
          end
        endcase
      end
    endcase
  end

  always_comb begin
    case (WR_f_reg_wdata_op)
      F_MEM_RDATA: begin
        WR_f_reg_wdata = WR_mem_rdata;
      end
      default: begin
        WR_f_reg_wdata = WR_fpu_result;
      end
    endcase
  end

  logic [31:0] WR_former_instr;
  logic WR_former_branch_taken;
  logic [31:0] WR_former_true_reg_rdata1;
  logic [31:0] WR_former_true_reg_rdata2;
  stall_t WR_former_stall;
  instruction_t WR_former_d_instr;
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      WR_former_instr <= 32'd0;
      WR_former_branch_taken <= 1'b0;
      WR_former_true_reg_rdata1 <= 32'd0;
      WR_former_true_reg_rdata2 <= 32'd0;
      WR_former_stall <= NON_STALL;
      WR_former_d_instr <= INST_NOP;
    end else if (halt) begin
      WR_former_instr <= WR_former_instr;
      WR_former_branch_taken <= WR_former_branch_taken;
      WR_former_true_reg_rdata1 <= WR_former_true_reg_rdata1;
      WR_former_true_reg_rdata2 <= WR_former_true_reg_rdata2;
      WR_former_stall <= WR_former_stall;
      WR_former_d_instr <= WR_former_d_instr;
    end else begin
      WR_former_instr <= WR_instr;
      WR_former_branch_taken <= WR_branch_taken;
      WR_former_true_reg_rdata1 <= WR_true_reg_rdata1;
      WR_former_true_reg_rdata2 <= WR_true_reg_rdata2;
      WR_former_stall <= WR_stall;
      WR_former_d_instr <= WR_d_instr;
    end
  end

endmodule









