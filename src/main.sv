`timescale 1ns / 1ps

module main;

    logic clk;
    logic rst_n;
    logic halt;

    cpu_top u_cpu_top (
        .clk (clk),
        .rst_n (rst_n),
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
        wait(halt);

        #20; 
    end


    initial begin
        #2000;
        $display("time out");
        $finish;
    end

    always @(posedge clk) begin
        if (rst_n && !halt) begin
            if (u_cpu_top.reg_we && (u_cpu_top.instr[11:7] != 5'd0)) begin
                $display("Time=%0t ns | PC=0x%08h | Instr=0x%08h (%-12s) | Write x%02d <= 0x%08h (%0d)",
                    $time,
                    u_cpu_top.pc,
                    u_cpu_top.instr,
                    u_cpu_top.d_instr.name(),
                    u_cpu_top.instr[11:7],
                    u_cpu_top.reg_wdata,
                    $signed(u_cpu_top.reg_wdata)
                );
            end 
            else if (u_cpu_top.mem_we) begin
                $display("Time=%0t ns | PC=0x%08h | Instr=0x%08h (%-12s) | Store: Mem[0x%08h] <= 0x%08h",
                    $time,
                    u_cpu_top.pc,
                    u_cpu_top.instr,
                    u_cpu_top.d_instr.name(),
                    u_cpu_top.alu_result,
                    u_cpu_top.reg_rdata2
                );
            end
            else begin
                $display("Time=%0t ns | PC=0x%08h | Instr=0x%08h (%-12s)",
                    $time,
                    u_cpu_top.pc,
                    u_cpu_top.instr,
                    u_cpu_top.d_instr.name()
                );
            end
        end
    end


    always @(posedge clk) begin
        if (rst_n && halt) begin
            $finish;
        end
    end

endmodule
