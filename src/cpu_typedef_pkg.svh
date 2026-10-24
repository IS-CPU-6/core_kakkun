`ifndef CPU_TYPEDEF_PKG_SVH
`define CPU_TYPEDEF_PKG_SVH

package cpu_typedef_pkg;

  typedef enum logic [6:0] {

    INST_ILLEGAL,

    INST_NOP,

    INST_LUI,
    INST_AUIPC,
    INST_JAL,
    INST_JALR,

    INST_BEQ,
    INST_BNE,
    INST_BLT,
    INST_BGE,
    INST_BLTU,
    INST_BGEU,

    INST_LB,
    INST_LH,
    INST_LW,
    INST_LBU,
    INST_LHU,
    INST_SB,
    INST_SH,
    INST_SW,

    INST_ADDI,
    INST_SLTI,
    INST_SLTIU,
    INST_XORI,
    INST_ORI,
    INST_ANDI,
    INST_SLLI,
    INST_SRLI,
    INST_SRAI,
    INST_ADD,
    INST_SUB,
    INST_SLL,
    INST_SLT,
    INST_SLTU,
    INST_XOR,
    INST_SRL,
    INST_SRA,
    INST_OR,
    INST_AND,

    INST_EBREAK,
    INST_FENCE,
    INST_PAUSE,

    INST_MUL,
    INST_MULH,
    INST_MULHSU,
    INST_MULHU,
    INST_DIV,
    INST_DIVU,
    INST_REM,
    INST_REMU,

    INST_FLW,
    INST_FSW,

    INST_FADD_S,
    INST_FSUB_S,
    INST_FMUL_S,
    INST_FDIV_S,
    INST_FSQRT_S,
    INST_FMIN_S,
    INST_FMAX_S,

    INST_FMADD_S,
    INST_FMSUB_S,
    INST_FNMSUB_S,
    INST_FNMADD_S,

    INST_FSGNJ_S,
    INST_FSGNJN_S,
    INST_FSGNJX_S,

    INST_FLE_S,
    INST_FLT_S,
    INST_FEQ_S,

    INST_FCVT_W_S,
    INST_FCVT_WU_S,
    INST_FCVT_S_W,
    INST_FCVT_S_WU,
    INST_FMV_X_W,
    INST_FMV_W_X,

    INST_FCLASS_S

  } instruction_t;

  typedef enum logic [4:0] {
    ALU_AND,
    ALU_OR,
    ALU_ADD,
    ALU_SUB,
    ALU_XOR,
    ALU_SLT,
    ALU_SLTU,
    ALU_SLL,
    ALU_SRL,
    ALU_SRA,
    ALU_MUL,
    ALU_MULH,
    ALU_MULHSU,
    ALU_MULHU,
    ALU_DIV,
    ALU_DIVU,
    ALU_REM,
    ALU_REMU
  } alu_control_t;

  typedef enum logic [0:0] {
    DISABLE,
    ABLE
  } write_enable_t;

  typedef enum logic [0:0] {
    REG_RDATA2,
    IMM
  } alu_src_b_op_t;

  typedef enum logic {
    F_REG_RDATA1,
    REG_RDATA1
  } fpu_src_a_op_t;

  typedef enum logic [1:0] {
    ALU_RESULT,
    MEM_RDATA,
    FPU_RESULT
  } reg_wdata_op_t;

  typedef enum logic [1:0] {
    NON_STALL,
    RAW_STALL,
    BRANCH_STALL
  } stall_t;

  typedef enum logic [1:0] {
    NON_FORWARD,
    EX_FORWARD,
    MEM_FORWARD
  } forward_t;

  typedef enum logic {
    F_FPU_RESULT,
    F_MEM_RDATA
  } f_reg_wdata_op_t;

  typedef enum logic {
    MEM_REG_RDATA2,
    MEM_F_REG_RDATA2
  } mem_wdata_op_t;


  typedef enum logic [4:0] {
    FPU_ADD,
    FPU_SUB,
    FPU_MUL,
    FPU_DIV,
    FPU_SQRT,
    FPU_SGNJ,
    FPU_SGNJN,
    FPU_SGNJX,
    FPU_MIN,
    FPU_MAX,
    FPU_EQ,
    FPU_LT,
    FPU_LE,
    FPU_CLASS,
    FPU_CVT_W_S,
    FPU_CVT_WU_S,
    FPU_CVT_S_W,
    FPU_CVT_S_WU,
    FPU_MV_X_W,
    FPU_MV_W_X,
    FPU_MADD,
    FPU_MSUB,
    FPU_NMSUB,
    FPU_NMADD,
    FPU_NORM
  } fpu_op_t;

endpackage

`endif
