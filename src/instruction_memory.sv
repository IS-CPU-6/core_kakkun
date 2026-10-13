module instruction_memory #(
    parameter int MEM_DEPTH = 1024
)(
    input logic clk,
    input logic rst_n,
    input logic [31:0] addr,
    output logic [31:0] data
);

    string hex_file;
    logic [31:0] temp_mem [0:MEM_DEPTH-1];


    logic [7:0] mem0 [0:MEM_DEPTH-1];
    logic [7:0] mem1 [0:MEM_DEPTH-1];
    logic [7:0] mem2 [0:MEM_DEPTH-1];
    logic [7:0] mem3 [0:MEM_DEPTH-1];

    wire [$clog2(MEM_DEPTH)-1:0] word_idx = addr[$clog2(MEM_DEPTH)+1:2];

    assign data = {mem3 [word_idx], mem2 [word_idx], mem1 [word_idx], mem0 [word_idx]};

    initial begin
        for (int i = 0; i < MEM_DEPTH; i++) begin
            mem0 [i] = 8'd0;
            mem1 [i] = 8'd0;
            mem2 [i] = 8'd0;
            mem3 [i] = 8'd0;
        end
    

        if ($value$plusargs("loadhex=%s", hex_file)) begin
            $readmemh(hex_file, temp_mem);
        end else begin
            $readmemh("program.hex", temp_mem);
        end

        for (int i = 0; i < MEM_DEPTH; i++) begin
            mem0[i] = temp_mem[i][7:0];
            mem1[i] = temp_mem[i][15:8];
            mem2[i] = temp_mem[i][23:16];
            mem3[i] = temp_mem[i][31:24];
        end
    end


endmodule



