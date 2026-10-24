module f_register_file (
    input logic clk,
    input logic rst_n,
    input logic [4:0] addr1,
    input logic [4:0] addr2,
    input logic [4:0] addr3,
    input logic [4:0] waddr,
    input logic [31:0] wdata,
    input logic we,
    output logic [31:0] rdata1,
    output logic [31:0] rdata2,
    output logic [31:0] rdata3
);

  logic [31:0] regs[32];

  assign rdata1 = regs[addr1];
  assign rdata2 = regs[addr2];
  assign rdata3 = regs[addr3];

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      for (int i = 0; i < 32; i++) begin
        regs[i] <= 32'd0;
      end
    end else if (we) begin
      regs[waddr] <= wdata;
    end
  end
endmodule
