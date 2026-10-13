`include "cpu_typedef.svh"
import cpu_pkg::*;

module alu(
    input logic [31:0] src_a,
    input logic [31:0] src_b,
    input  alu_control_t alu_control,
    output logic [31:0] result
);

    wire [4:0] shamt = src_b[4:0];

    
    wire signed [32:0] src_a_mul;
    wire signed [32:0] src_b_mul;

    assign src_a_mul = (alu_control == ALU_MULHU) ? $signed({1'b0, src_a}) : $signed({src_a[31], src_a});
    assign src_b_mul = (alu_control == ALU_MULHU || alu_control == ALU_MULHSU) ? $signed({1'b0, src_b}) : $signed({src_b[31], src_b});

    wire signed [65:0] prod = src_a_mul * src_b_mul;

    wire [31:0] mul_result = (alu_control == ALU_MUL) ? prod [31:0] : prod [63:32];


    logic [31:0] div_res;
    logic [31:0] divu_res;
    logic [31:0] rem_res;
    logic [31:0] remu_res;

    always_comb begin
        if (src_b == 32'd0) begin
            div_res = 32'hffff_ffff;
        end else if (src_a == 32'h8000_0000 && src_b == 32'hffff_ffff) begin
            div_res = 32'h8000_0000;
        end else begin
            div_res = $signed(src_a) / $signed(src_b);
        end
    end 

    always_comb begin
        if (src_b == 32'd0) begin
            divu_res = 32'hffff_ffff;
        end else begin
            divu_res = src_a / src_b;
        end
    end

    always_comb begin
        if (src_b == 32'd0) begin
            rem_res = src_a;
        end else if (src_a == 32'h8000_0000 && src_b == 32'hffff_ffff) begin
            rem_res = 32'd0;
        end else begin
            rem_res = $signed(src_a) % $signed(src_b);
        end
    end

    always_comb begin
        if (src_b == 32'd0) begin
            remu_res = src_a;
        end else begin
            remu_res = src_a % src_b;
        end
    end

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
            ALU_MUL: result = mul_result;
            ALU_MULH: result = mul_result;
            ALU_MULHSU: result = mul_result;
            ALU_MULHU: result = mul_result;
            ALU_DIV: result = div_res;
            ALU_DIVU: result = divu_res;
            ALU_REM: result = rem_res;
            ALU_REMU: result = remu_res;

            default: result = 32'd0;
        endcase
    end

endmodule




    

