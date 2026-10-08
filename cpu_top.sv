`include "cpu_types.svh"
import cpu_pkg::*;

module cpu_top (
    input logic clk,
    input logic rst_n,
    output logic [31:0] pc,
    output logic halt
);

    logic [31:0] instr;

    "instruction memory rdata = instr"

    instruction_t d_instr;

    instruction_decoder u_instruction_decoder(
        .instr (instr)
        .d_instr (d_instr)
    )



    

    assign halt = (instr == 32'b00000000000100000000000001110011);

    logic [31:0] pc_plus_4;
    assign pc_plus_4 = pc + 32'd4;

    logic [31:0] reg_rdata1;
    logic [31:0] reg_rdata2;

    register_file u_register_file(
        .clk (clk)
        .rst_n (rst_n)
        .addr1 (instr[19:15])
        .addr2 (instr[24:20])
        .waddr (instr[11:7])
        .wdata
        .we
        .rdata1 (reg_rdata1)
        .rdata2 (reg_rdata2)
    )

    logic [31:0] imm_result;

    immgen u_immgen(
        .instr (instr)
        .result (imm_result)
    )






