`include "cpu_typedef.svh"
import cpu_pkg::*;

module data_memory #(
    parameter int MEM_DEPTH = 1024
)(
    input logic clk,
    input logic rst_n,
    input logic [31:0] addr,
    input logic [31:0] wdata,
    input logic we,
    input instruction_t d_instr,
    output logic [31:0] rdata
);

    logic [7:0] mem0 [0:MEM_DEPTH-1];
    logic [7:0] mem1 [0:MEM_DEPTH-1];
    logic [7:0] mem2 [0:MEM_DEPTH-1];
    logic [7:0] mem3 [0:MEM_DEPTH-1];

    initial begin
        for (int i = 0; i < MEM_DEPTH; i++) begin
            mem0[i] = 8'd0;
            mem1[i] = 8'd0;
            mem2[i] = 8'd0;
            mem3[i] = 8'd0;
        end
    end

    wire [$clog2(MEM_DEPTH)-1:0] word_idx = addr[$clog2(MEM_DEPTH)+1 : 2];
    wire [1:0] byte_offset = addr[1:0];

    logic [3:0] byte_en;

    always_comb begin
        if (!we) begin
            byte_en = 4'b0000;
        end else begin
            case (d_instr)
                INST_SB: begin
                    case (byte_offset)
                        2'b00: byte_en = 4'b0001;
                        2'b01: byte_en = 4'b0010;
                        2'b10: byte_en = 4'b0100;
                        2'b11: byte_en = 4'b1000;
                    endcase
                end
                INST_SH: begin
                        byte_en = (byte_offset[1]) ? 4'b1100 : 4'b0011; 
                end
                INST_SW: begin
                        byte_en = 4'b1111; 
                end
                default: byte_en = 4'b0000;
            endcase
        end
    end

    logic [31:0] aligned_wdata;
    assign aligned_wdata = (d_instr == INST_SB) ? (wdata << (byte_offset * 8)) :
                           (d_instr == INST_SH) ? (wdata << (byte_offset * 8)) :
                           wdata;
    
    always_ff @(posedge clk) begin
        if (byte_en [0]) mem0 [word_idx] <= aligned_wdata [7:0];
        if (byte_en [1]) mem1 [word_idx] <= aligned_wdata [15:8];
        if (byte_en [2]) mem2 [word_idx] <= aligned_wdata [23:16];
        if (byte_en [3]) mem3 [word_idx] <= aligned_wdata [31:24];
    end

    wire [31:0] raw_word = {mem3 [word_idx], mem2 [word_idx], mem1 [word_idx], mem0 [word_idx]};
    logic [7:0] target_byte;
    logic [15:0] target_half;

    always_comb begin
        case (byte_offset)
            2'b00: target_byte = raw_word [7:0];
            2'b01: target_byte = raw_word [15:8];
            2'b10: target_byte = raw_word [23:16];
            2'b11: target_byte = raw_word [31:24];
        endcase

        target_half = (byte_offset [1]) ? raw_word [31:16] : raw_word [15:0];
    end

    always_comb begin
        case (d_instr)
            INST_LB: rdata = {{24{target_byte [7]}}, target_byte};
            INST_LBU: rdata = {24'd0, target_byte};
            INST_LH: rdata = {{16{target_half [15]}}, target_half};
            INST_LHU: rdata = {16'd0, target_half};
            INST_LW: rdata = raw_word;
            default: rdata = 32'd0;
        endcase
    end
endmodule



