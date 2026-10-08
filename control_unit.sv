module control_unit(
    input logic [6:0] opcode;
    output logic reg_we;
    output logic [3:0] alu_control;
    output logic alu_src_b;
    output logic mem_we;    
);