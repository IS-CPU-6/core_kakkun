`ifndef CPU_TYPES_SVH
`define CPU_TYPES_SVH

package cpu_pkg;

    typedef enum logic [5:0] {

        INST_ILLEGAL,

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
        INST_REMU

    }instruction_t;

    typedef enum logic [3:0] {
        ALU_AND,
        ALU_OR,
        ALU_ADD,
        ALU_SUB,
        ALU_XOR,
        ALU_SLT,
        ALU_SLTU,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA
    }alu_control_t;

endpackage

`endif