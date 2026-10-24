`include "cpu_typedef_pkg.svh"
import cpu_typedef_pkg::*;


module control_unit (
    input instruction_t d_instr,
    output write_enable_t reg_we,
    output write_enable_t f_reg_we,
    output write_enable_t mem_we,
    output alu_src_b_op_t alu_src_b_op,
    output alu_control_t alu_control,
    output fpu_op_t fpu_control,
    output reg_wdata_op_t reg_wdata_op,
    output mem_wdata_op_t mem_wdata_op,
    output fpu_src_a_op_t fpu_src_a_op,
    output f_reg_wdata_op_t f_reg_wdata_op
);

  always_comb begin

    reg_we = DISABLE;
    f_reg_we = DISABLE;
    mem_we = DISABLE;
    alu_src_b_op = REG_RDATA2;
    alu_control = ALU_ADD;
    fpu_control = FPU_ADD;
    reg_wdata_op = ALU_RESULT;
    mem_wdata_op = MEM_REG_RDATA2;
    fpu_src_a_op = F_REG_RDATA1;
    f_reg_wdata_op = F_FPU_RESULT;

    case (d_instr)

      INST_ILLEGAL: ;

      INST_LUI: begin
        reg_we = ABLE;
      end
      INST_AUIPC: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
      end
      INST_JAL: begin
        reg_we = ABLE;
      end
      INST_JALR: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
      end

      INST_BEQ:  ;
      INST_BNE:  ;
      INST_BLT:  ;
      INST_BGE:  ;
      INST_BLTU: ;
      INST_BGEU: ;

      INST_LB: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        reg_wdata_op = MEM_RDATA;
      end
      INST_LH: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        reg_wdata_op = MEM_RDATA;
      end
      INST_LW: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        reg_wdata_op = MEM_RDATA;
      end
      INST_LBU: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        reg_wdata_op = MEM_RDATA;
      end
      INST_LHU: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        reg_wdata_op = MEM_RDATA;
      end
      INST_SB: begin
        mem_we = ABLE;
        alu_src_b_op = IMM;
      end
      INST_SH: begin
        mem_we = ABLE;
        alu_src_b_op = IMM;
      end
      INST_SW: begin
        mem_we = ABLE;
        alu_src_b_op = IMM;
      end

      INST_ADDI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
      end
      INST_SLTI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_SLT;
      end
      INST_SLTIU: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_SLTU;
      end
      INST_XORI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_XOR;
      end
      INST_ORI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_OR;
      end
      INST_ANDI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_AND;
      end
      INST_SLLI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_SLL;
      end
      INST_SRLI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_SRL;
      end
      INST_SRAI: begin
        reg_we = ABLE;
        alu_src_b_op = IMM;
        alu_control = ALU_SRA;
      end
      INST_ADD: begin
        reg_we = ABLE;
      end
      INST_SUB: begin
        reg_we = ABLE;
        alu_control = ALU_SUB;
      end
      INST_SLL: begin
        reg_we = ABLE;
        alu_control = ALU_SLL;
      end
      INST_SLT: begin
        reg_we = ABLE;
        alu_control = ALU_SLT;
      end
      INST_SLTU: begin
        reg_we = ABLE;
        alu_control = ALU_SLTU;
      end
      INST_XOR: begin
        reg_we = ABLE;
        alu_control = ALU_XOR;
      end
      INST_SRL: begin
        reg_we = ABLE;
        alu_control = ALU_SRL;
      end
      INST_SRA: begin
        reg_we = ABLE;
        alu_control = ALU_SRA;
      end
      INST_OR: begin
        reg_we = ABLE;
        alu_control = ALU_OR;
      end
      INST_AND: begin
        reg_we = ABLE;
        alu_control = ALU_AND;
      end

      INST_EBREAK: ;
      INST_FENCE:  ;
      INST_PAUSE:  ;

      INST_MUL: begin
        reg_we = ABLE;
        alu_control = ALU_MUL;
      end
      INST_MULH: begin
        reg_we = ABLE;
        alu_control = ALU_MULH;
      end
      INST_MULHSU: begin
        reg_we = ABLE;
        alu_control = ALU_MULHSU;
      end
      INST_MULHU: begin
        reg_we = ABLE;
        alu_control = ALU_MULHU;
      end
      INST_DIV: begin
        reg_we = ABLE;
        alu_control = ALU_DIV;
      end
      INST_DIVU: begin
        reg_we = ABLE;
        alu_control = ALU_DIVU;
      end
      INST_REM: begin
        reg_we = ABLE;
        alu_control = ALU_REM;
      end
      INST_REMU: begin
        reg_we = ABLE;
        alu_control = ALU_REMU;
      end

      INST_FLW: begin
        alu_src_b_op = IMM;
        f_reg_we = ABLE;
        f_reg_wdata_op = F_MEM_RDATA;
      end
      INST_FSW: begin
        alu_src_b_op = IMM;
        mem_we = ABLE;
        mem_wdata_op = MEM_F_REG_RDATA2;
      end

      INST_FADD_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_ADD;
      end
      INST_FSUB_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_SUB;
      end
      INST_FMUL_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MUL;
      end
      INST_FDIV_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_DIV;
      end
      INST_FSQRT_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_SQRT;
      end
      INST_FMIN_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MIN;
      end
      INST_FMAX_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MAX;
      end

      INST_FMADD_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MADD;
      end
      INST_FMSUB_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MSUB;
      end
      INST_FNMSUB_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_NMSUB;
      end
      INST_FNMADD_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_NMADD;
      end

      INST_FSGNJ_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_SGNJ;
      end
      INST_FSGNJN_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_SGNJN;
      end
      INST_FSGNJX_S: begin
        f_reg_we = ABLE;
        fpu_control = FPU_SGNJX;
      end

      INST_FLE_S: begin
        reg_we = ABLE;
        fpu_control = FPU_LE;
        reg_wdata_op = FPU_RESULT;
      end
      INST_FLT_S: begin
        reg_we = ABLE;
        fpu_control = FPU_LT;
        reg_wdata_op = FPU_RESULT;
      end
      INST_FEQ_S: begin
        reg_we = ABLE;
        fpu_control = FPU_EQ;
        reg_wdata_op = FPU_RESULT;
      end

      INST_FCVT_W_S: begin
        reg_we = ABLE;
        fpu_control = FPU_CVT_W_S;
        reg_wdata_op = FPU_RESULT;
      end
      INST_FCVT_WU_S: begin
        reg_we = ABLE;
        fpu_control = FPU_CVT_WU_S;
        reg_wdata_op = FPU_RESULT;
      end
      INST_FCVT_S_W: begin
        f_reg_we = ABLE;
        fpu_control = FPU_CVT_S_W;
        fpu_src_a_op = REG_RDATA1;
      end
      INST_FCVT_S_WU: begin
        f_reg_we = ABLE;
        fpu_control = FPU_CVT_S_WU;
        fpu_src_a_op = REG_RDATA1;
      end
      INST_FMV_X_W: begin
        reg_we = ABLE;
        fpu_control = FPU_MV_X_W;
        reg_wdata_op = FPU_RESULT;
      end

      INST_FMV_W_X: begin
        f_reg_we = ABLE;
        fpu_control = FPU_MV_W_X;
        fpu_src_a_op = REG_RDATA1;
      end

      INST_FCLASS_S: begin
        reg_we = ABLE;
        fpu_control = FPU_CLASS;
        reg_wdata_op = FPU_RESULT;
      end

      default: begin
      end

    endcase
  end
endmodule
