module instruction_memory #(
    parameter int MEM_DEPTH = 1024
)(
    input logic clk,
    input logic rst_n,
    input logic [31:0] addr,
    output logic [31:0] data
);

    logic [7:0] mem0 [0:MEM_DEPTH-1];
    logic [7:0] mem1 [0:MEM_DEPTH-1];
    logic [7:0] mem2 [0:MEM_DEPTH-1];
    logic [7:0] mem3 [0:MEM_DEPTH-1];

    wire [$clog2(MEM_DEPTH)-1:0] word_idx = addr[$clog2(MEM_DEPTH)+1 : 2];

    assign data = {mem3 [word_idx], mem2 [word_idx], mem1 [word_idx], mem0 [word_idx]};

endmodule


