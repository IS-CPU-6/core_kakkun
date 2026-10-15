module hazard_unit (
    input logic EX_branch_taken,
    input instruction_t ID_d_instr,
    input instruction_t EX_d_instr,
    input instruction_t MEM_d_instr,
    input write_enable_t EX_reg_we,
    input write_enable_t MEM_reg_we,
    input logic [4:0] ID_reg_addr1,
    input logic [4:0] ID_reg_addr2,
    input logic [4:0] EX_reg_waddr,
    input logic [4:0] MEM_reg_waddr,
    output stall_t stall,
    output forward_t rdata1_forward,
    output forward_t rdata2_forward
);

  logic EX_load;
  assign EX_load = (EX_d_instr == INST_LB) || (EX_d_instr == INST_LH) || (EX_d_instr == INST_LW) || (EX_d_instr == INST_LBU) || (EX_d_instr == INST_LHU);

  logic ID_addr1_EX_waddr;
  logic ID_addr2_EX_waddr;
  logic ID_addr1_MEM_waddr;
  logic ID_addr2_MEM_waddr;

  assign ID_addr1_EX_waddr = ((ID_reg_addr1 != 5'd0) && (ID_reg_addr1 == EX_reg_waddr)) && (EX_reg_we == ABLE);
  assign ID_addr2_EX_waddr = ((ID_reg_addr2 != 5'd0) && (ID_reg_addr2 == EX_reg_waddr)) && (EX_reg_we == ABLE);
  assign ID_addr1_MEM_waddr = ((ID_reg_addr1 != 5'd0) && (ID_reg_addr1 == MEM_reg_waddr)) && (MEM_reg_we == ABLE);
  assign ID_addr2_MEM_waddr = ((ID_reg_addr2 != 5'd0) && (ID_reg_addr2 == MEM_reg_waddr)) && (MEM_reg_we == ABLE);

  assign stall = ((ID_addr1_EX_waddr || ID_addr2_EX_waddr) && EX_load) ? RAW_STALL : EX_branch_taken ? BRANCH_STALL : NON_STALL;
  assign rdata1_forward = ID_addr1_EX_waddr ? EX_FORWARD : ID_addr1_MEM_waddr ? MEM_FORWARD : NON_FORWARD;
  assign rdata2_forward = ID_addr2_EX_waddr ? EX_FORWARD : ID_addr2_MEM_waddr ? MEM_FORWARD : NON_FORWARD;
endmodule
