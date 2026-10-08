module alu(
    input logic [31:0] src_a,
    input logic [31:0] src_b,
    input logic [3:0] alu_control,
    output logic [31:0] result,
    output logic zero
);

    localparam logic [3:0] ALU_AND = 4'b0000;
    localparam logic [3:0] ALU_OR = 4'b0001;
    localparam logic [3:0] ALU_ADD = 4'b0010;
    localparam logic [3:0] ALU_SUB = 4'b0110;

    always_comb begin
        case (alu_control)
            ALU_AND: result = src_a & src_b;
            ALU_OR: result = src_a | src_b;
            ALU_ADD: result = src_a + src_b;
            ALU_SUB: result = src_a - src_b;
            default: result = 32'd0;
        endcase
    end

    assign zero = (result == 32'd0);
endmodule



    

