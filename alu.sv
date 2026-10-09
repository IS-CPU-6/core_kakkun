`include "cpu_typedef.svh"
import cpu_pkg::*;

module alu(
    input logic [31:0] src_a,
    input logic [31:0] src_b,
    input  alu_control_t alu_control,
    output logic [31:0] result
);

    wire [4:0] shamt = src_b[4:0];

    always_comb begin
        case (alu_control)
            ALU_AND: result = src_a & src_b;
            ALU_OR: result = src_a | src_b;
            ALU_ADD: result = src_a + src_b;
            ALU_SUB: result = src_a - src_b;
            ALU_XOR: result = src_a ^ src_b;
            ALU_SLT: result = ($signed(src_a) < $signed(src_b)) ? 32'd1 : 32'd0;
            ALU_SLTU: result = (src_a < src_b) ? 32'd1 : 32'd0;
            ALU_SLL: result = src_a << shamt;
            ALU_SRL: result = src_a >> shamt;
            ALU_SRA: result = $signed(src_a) >>> shamt;
            default: result = 32'd0;
        endcase
    end

endmodule




    

