`include "cpu_typedef.svh"
import cpu_pkg::*;

module instruction_decoder (
    input logic [31:0] instr,
    output instruction_t d_instr
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;

    assign opcode = instr [6:0];
    assign funct3 = instr [14:12];
    assign funct7 = instr [31:25];

    always_comb begin
        case (opcode)

            7'b0110111: d_instr = INST_LUI;
            7'b0010111: d_instr = INST_AUIPC;
            7'b1101111: d_instr = INST_JAL;
            7'b1100111: d_instr = (funct3 == 3'b000) ? INST_JALR : INST_ILLEGAL;

            7'b1100011: begin
                case (funct3)
                    3'b000: d_instr = INST_BEQ;
                    3'b001: d_instr = INST_BNE;
                    3'b100: d_instr = INST_BLT;
                    3'b101: d_instr = INST_BGE;
                    3'b110: d_instr = INST_BLTU;
                    3'b111: d_instr = INST_BGEU;
                    default: d_instr = INST_ILLEGAL;
                endcase
            end 

            7'b0000011: begin
                case (funct3)
                    3'b000: d_instr = INST_LB;
                    3'b001: d_instr = INST_LH;
                    3'b010: d_instr = INST_LW;
                    3'b100: d_instr = INST_LBU;
                    3'b101: d_instr = INST_LHU;
                    default: d_instr = INST_ILLEGAL;
                endcase 
            end

            7'b0100011: begin
                case (funct3)
                    3'b000: d_instr = INST_SB;
                    3'b001: d_instr = INST_SH;
                    3'b010: d_instr = INST_SW; 
                    default: d_instr = INST_ILLEGAL;
                endcase
            end

            7'b0010011: begin
                case (funct3)
                    3'b000: d_instr = INST_ADDI;
                    3'b010: d_instr = INST_SLTI;
                    3'b011: d_instr = INST_SLTIU;
                    3'b100: d_instr = INST_XORI;
                    3'b110: d_instr = INST_ORI;
                    3'b111: d_instr = INST_ANDI;
                    3'b001: d_instr = INST_SLLI;
                    3'b101: begin
                        if (funct7 == 7'b0000000) d_instr = INST_SRLI;
                        else if (funct7 == 7'b0100000) d_instr = INST_SRAI;
                        else d_instr = INST_ILLEGAL;
                    end
                    default: d_instr = INST_ILLEGAL;
                endcase
            end

            7'b0110011: begin
                if (funct7 == 7'b0000001) begin
                    case (funct3)
                        3'b000: d_instr = INST_MUL;
                        3'b001: d_instr = INST_MULH;
                        3'b010: d_instr = INST_MULHSU;
                        3'b011: d_instr = INST_MULHU;
                        3'b100: d_instr = INST_DIV;
                        3'b101: d_instr = INST_DIVU;
                        3'b110: d_instr = INST_REM;
                        3'b111: d_instr = INST_REMU;
                        default: d_instr = INST_ILLEGAL;
                    endcase
                end else begin
                    case (funct3)
                        3'b000: begin
                            if (funct7 == 7'b0000000) d_instr = INST_ADD;
                            else if (funct7 == 7'b0100000) d_instr = INST_SUB;
                            else d_instr = INST_ILLEGAL;
                        end 
                        3'b001: d_instr = (funct7 == 7'b0000000) ? INST_SLL : INST_ILLEGAL;
                        3'b010: d_instr = (funct7 == 7'b0000000) ? INST_SLT : INST_ILLEGAL;
                        3'b011: d_instr = (funct7 == 7'b0000000) ? INST_SLTU : INST_ILLEGAL;
                        3'b100: d_instr = (funct7 == 7'b0000000) ? INST_XOR : INST_ILLEGAL;
                        3'b101: begin
                            if (funct7 == 7'b0000000) d_instr = INST_SRL;
                            else if (funct7 == 7'b0100000) d_instr = INST_SRA;
                            else d_instr = INST_ILLEGAL;
                        end
                        3'b110: d_instr = (funct7 == 7'b0000000) ? INST_OR : INST_ILLEGAL;
                        3'b111: d_instr = (funct7 == 7'b0000000) ? INST_AND : INST_ILLEGAL;
                        default: d_instr = INST_ILLEGAL;
                    endcase
                end
            end

            7'b1110011: d_instr = INST_EBREAK;
            default : d_instr = INST_ILLEGAL;
        endcase
    end

endmodule
