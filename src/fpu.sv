module fpu (
    input logic clk,
    input logic rst,
    input fpu_op_t req_op,
    input logic [31:0] req_a,
    input logic [31:0] req_b,
    input logic [31:0] req_c,
    output logic [31:0] rsp_y
);
  assign rsp_y = 32'd0;
endmodule
