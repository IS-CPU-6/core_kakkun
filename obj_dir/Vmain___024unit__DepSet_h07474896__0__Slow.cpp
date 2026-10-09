// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024unit.h"

VL_ATTR_COLD void Vmain___024unit___ctor_var_reset(Vmain___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmain___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Venumtab_enum_name0.atDefault() = std::string{""};
    vlSelf->__Venumtab_enum_name0.at(0) = std::string{"INST_ILLEGAL"};
    vlSelf->__Venumtab_enum_name0.at(1) = std::string{"INST_LUI"};
    vlSelf->__Venumtab_enum_name0.at(2) = std::string{"INST_AUIPC"};
    vlSelf->__Venumtab_enum_name0.at(3) = std::string{"INST_JAL"};
    vlSelf->__Venumtab_enum_name0.at(4) = std::string{"INST_JALR"};
    vlSelf->__Venumtab_enum_name0.at(5) = std::string{"INST_BEQ"};
    vlSelf->__Venumtab_enum_name0.at(6) = std::string{"INST_BNE"};
    vlSelf->__Venumtab_enum_name0.at(7) = std::string{"INST_BLT"};
    vlSelf->__Venumtab_enum_name0.at(8) = std::string{"INST_BGE"};
    vlSelf->__Venumtab_enum_name0.at(9) = std::string{"INST_BLTU"};
    vlSelf->__Venumtab_enum_name0.at(10) = std::string{"INST_BGEU"};
    vlSelf->__Venumtab_enum_name0.at(11) = std::string{"INST_LB"};
    vlSelf->__Venumtab_enum_name0.at(12) = std::string{"INST_LH"};
    vlSelf->__Venumtab_enum_name0.at(13) = std::string{"INST_LW"};
    vlSelf->__Venumtab_enum_name0.at(14) = std::string{"INST_LBU"};
    vlSelf->__Venumtab_enum_name0.at(15) = std::string{"INST_LHU"};
    vlSelf->__Venumtab_enum_name0.at(16) = std::string{"INST_SB"};
    vlSelf->__Venumtab_enum_name0.at(17) = std::string{"INST_SH"};
    vlSelf->__Venumtab_enum_name0.at(18) = std::string{"INST_SW"};
    vlSelf->__Venumtab_enum_name0.at(19) = std::string{"INST_ADDI"};
    vlSelf->__Venumtab_enum_name0.at(20) = std::string{"INST_SLTI"};
    vlSelf->__Venumtab_enum_name0.at(21) = std::string{"INST_SLTIU"};
    vlSelf->__Venumtab_enum_name0.at(22) = std::string{"INST_XORI"};
    vlSelf->__Venumtab_enum_name0.at(23) = std::string{"INST_ORI"};
    vlSelf->__Venumtab_enum_name0.at(24) = std::string{"INST_ANDI"};
    vlSelf->__Venumtab_enum_name0.at(25) = std::string{"INST_SLLI"};
    vlSelf->__Venumtab_enum_name0.at(26) = std::string{"INST_SRLI"};
    vlSelf->__Venumtab_enum_name0.at(27) = std::string{"INST_SRAI"};
    vlSelf->__Venumtab_enum_name0.at(28) = std::string{"INST_ADD"};
    vlSelf->__Venumtab_enum_name0.at(29) = std::string{"INST_SUB"};
    vlSelf->__Venumtab_enum_name0.at(30) = std::string{"INST_SLL"};
    vlSelf->__Venumtab_enum_name0.at(31) = std::string{"INST_SLT"};
    vlSelf->__Venumtab_enum_name0.at(32) = std::string{"INST_SLTU"};
    vlSelf->__Venumtab_enum_name0.at(33) = std::string{"INST_XOR"};
    vlSelf->__Venumtab_enum_name0.at(34) = std::string{"INST_SRL"};
    vlSelf->__Venumtab_enum_name0.at(35) = std::string{"INST_SRA"};
    vlSelf->__Venumtab_enum_name0.at(36) = std::string{"INST_OR"};
    vlSelf->__Venumtab_enum_name0.at(37) = std::string{"INST_AND"};
    vlSelf->__Venumtab_enum_name0.at(38) = std::string{"INST_EBREAK"};
    vlSelf->__Venumtab_enum_name0.at(39) = std::string{"INST_FENCE"};
    vlSelf->__Venumtab_enum_name0.at(40) = std::string{"INST_PAUSE"};
    vlSelf->__Venumtab_enum_name0.at(41) = std::string{"INST_MUL"};
    vlSelf->__Venumtab_enum_name0.at(42) = std::string{"INST_MULH"};
    vlSelf->__Venumtab_enum_name0.at(43) = std::string{"INST_MULHSU"};
    vlSelf->__Venumtab_enum_name0.at(44) = std::string{"INST_MULHU"};
    vlSelf->__Venumtab_enum_name0.at(45) = std::string{"INST_DIV"};
    vlSelf->__Venumtab_enum_name0.at(46) = std::string{"INST_DIVU"};
    vlSelf->__Venumtab_enum_name0.at(47) = std::string{"INST_REM"};
    vlSelf->__Venumtab_enum_name0.at(48) = std::string{"INST_REMU"};
}
