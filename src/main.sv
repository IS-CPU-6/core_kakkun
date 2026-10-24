`timescale 1ns / 1ps

module main;

  logic clk;
  logic rst_n;
  logic halt;
  logic [31:0] imem_addr;
  logic [31:0] imem_rdata;

  cpu_top u_cpu_top (
      .clk(clk),
      .rst_n(rst_n),
      .halt(halt),
      .imem_addr(imem_addr),
      .imem_rdata(imem_rdata)
  );

  instruction_memory u_instruction_memory (
      .clk  (clk),
      .rst_n(rst_n),
      .addr (imem_addr),
      .data (imem_rdata)
  );

`ifdef VERILATOR
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

`endif

  always @(posedge clk) begin
    if (rst_n && !halt) begin
      if (u_cpu_top.WR_reg_we && (u_cpu_top.WR_reg_waddr != 5'd0)) begin
        if ((u_cpu_top.WR_d_instr == INST_LB) ||
            (u_cpu_top.WR_d_instr == INST_LH) ||
            (u_cpu_top.WR_d_instr == INST_LW) ||
            (u_cpu_top.WR_d_instr == INST_LBU) ||
            (u_cpu_top.WR_d_instr == INST_LHU)) begin
          $display("0x%08h (0x%08h) x%0d = [0x%08h]", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                   u_cpu_top.WR_reg_waddr, u_cpu_top.WR_alu_result);
        end else begin
          $display("0x%08h (0x%08h) x%0d = 0x%08h", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                   u_cpu_top.WR_reg_waddr, u_cpu_top.WR_reg_wdata);
        end
      end /*else if (!u_cpu_top.WR_mem_we && u_cpu_top.WR_d_instr != INST_NOP) begin
        $display("0x%08h (0x%08h)", u_cpu_top.WR_pc, u_cpu_top.WR_instr);
      end*/ else if (u_cpu_top.WR_mem_we) begin
        $display("0x%08h (0x%08h) [0x%08h] = 0x%08h", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                 u_cpu_top.WR_alu_result, u_cpu_top.WR_mem_wdata);
      end else if (u_cpu_top.WR_f_reg_we) begin
        if (u_cpu_top.WR_d_instr == INST_FLW) begin
          $display("0x%08h (0x%08h) f%0d = [0x%08h]", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                   u_cpu_top.WR_reg_waddr, u_cpu_top.WR_alu_result);
        end else begin
          $display("0x%08h (0x%08h) f%0d = 0x%08h", u_cpu_top.WR_pc, u_cpu_top.WR_instr,
                   u_cpu_top.WR_reg_waddr, u_cpu_top.WR_f_reg_wdata);
        end
      end
    end


  end



  always @(posedge clk) begin
    if (rst_n && halt) begin
      repeat (2) @(posedge clk);
      $finish;
    end
  end


endmodule
