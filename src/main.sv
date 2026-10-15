`timescale 1ns / 1ps

module main;

  logic clk;
  logic rst_n;
  logic halt;

  cpu_top u_cpu_top (
      .clk  (clk),
      .rst_n(rst_n),
      .halt (halt)
  );

  initial begin
    clk = 1'b0;
    forever begin
      #5 clk = ~clk;
    end
  end

  initial begin
    rst_n = 1'b0;
    #20;

    @(negedge clk);
    rst_n = 1'b1;
    wait (halt);

    #20;
  end


  initial begin
    #2000;
    $finish;
  end

  always @(posedge clk) begin
    if (rst_n && !halt) begin
      if (u_cpu_top.WR_reg_we && (u_cpu_top.WR_reg_waddr != 5'd0)) begin
        $display("core   0: 3 0x%08h (0x%08h) x%0d%s0x%08h", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                 u_cpu_top.WR_reg_waddr, (u_cpu_top.WR_reg_waddr < 10) ? "  " : " ",
                 u_cpu_top.WR_reg_wdata);
      end else if (!u_cpu_top.WR_mem_we && u_cpu_top.WR_d_instr != INST_NOP) begin
        $display("core   0: 3 0x%08h (0x%08h)", u_cpu_top.WR_pc, u_cpu_top.WR_instr);
      end else if (u_cpu_top.MEM_mem_we) begin
        $display("core   0: 3 0x%08h (0x%08h) mem 0x%08h 0x%08h", u_cpu_top.MEM_pc,
                 u_cpu_top.MEM_instr, u_cpu_top.MEM_alu_result, u_cpu_top.MEM_true_reg_rdata2);
      end
    end
  end


  always @(posedge clk) begin
    if (rst_n && halt) begin
      $finish;
    end
  end


endmodule
