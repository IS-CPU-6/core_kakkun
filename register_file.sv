module register_file(
    input logic clk,
    input logic rst_n,
    input logic [4:0] addr1,
    input logic [4:0] addr2,
    input logic [4:0] waddr,
    input logic [31:0] wdata,
    input logic we,
    output logic [31:0] rdata1,
    output logic [31:0] rdata2
);

    logic [31:0] regs [31:0];
    assign rdata1 = regs[addr1];
    assign rdata2 = regs[addr2];
    always_ff @(posedge clk) begin
        if (rst_n && we==1 && waddr != 0) begin
            regs[waddr] <= wdata;
        end 
    end
endmodule