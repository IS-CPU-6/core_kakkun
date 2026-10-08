module immgen (
    input logic [31:0] instr,
    output logic [31:0] result
);

    logic [6:0] opcode;
    assign opcode = instr[6:0];

    always_comb begin
        case (opcode)
            7'b0110111: result = {instr[31:12], 12'b0};
            7'b0010111: result = {instr[31:12], 12'b0};
            7'b1101111: result = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21],1'b0};
            7'b1100111: result = {{20{instr[31]}}, instr[31:20]};
            7'b1100011: result = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8],1'd0};
            7'b0000011: result = {{20{instr[31]}}, instr[31:20]};
            7'b0100011: result = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            7'b0010011: result = {{20{instr[31]}}, instr[31:20]};
            7'b0000111: result = {{20{instr[31]}}, instr[31:20]};
            7'b0100111: result = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            default: result = 32'b0;
        endcase
    end
endmodule

