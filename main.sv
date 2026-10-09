`timescale 1ns / 1ps

module main;

    logic clk;
    logic rst_n;
    logic [31:0] pc;
    logic halt;

    cpu_top u_cpu_top (
        .clk (clk),
        .rst_n (rst_n),
        .pc (pc),
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
        $display("[TB] Reset asserted (rst_n = 0)");
        #20;

        @(negedge clk);
        rst_n = 1'b1;
        $display("[TB] Reset released (rst_n = 1) -> CPU Starts Execution!");
        wait(halt);

        $display("----------------------------------------------");
        $display("[TB] HALT (EBREAK) detected at PC = 0x%08h!", pc);
        $display("[TB] Simulation Completed Successfully.");
        $display("----------------------------------------------");

        #20; 
    end


    initial begin
        #500;
        $display("[TB] ERROR: Simulation Timeout!");
        $finish;
    end


    always @(posedge clk) begin
        if (rst_n && !halt) begin
            $display("Time=%0t | PC=0x%08h | Instr=0x%08h (%0s)",$time, pc , u_cpu_top.instr , u_cpu_top.d_instr.name());
        end else if (rst_n) begin
            $finish;
        end
    end

endmodule
