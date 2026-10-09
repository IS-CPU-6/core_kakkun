// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("main", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_cpu_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"d_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+5,0,"alu_src_b_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"reg_wdata_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"imm_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"reg_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"alu_src_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"alu_src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"pc_label",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"src_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"src_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"d_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"reg_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+5,0,"alu_src_b_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"reg_wdata_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"d_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+30,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"byte_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"aligned_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"raw_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"target_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"target_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_immgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"d_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_instruction_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmain___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmain___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(0x400U),32);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((0x26U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))));
    bufp->fullCData(oldp+2,(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr),6);
    bufp->fullBit(oldp+3,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_we));
    bufp->fullBit(oldp+4,(vlSelfRef.main__DOT__u_cpu_top__DOT__mem_we));
    bufp->fullBit(oldp+5,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b_op));
    bufp->fullCData(oldp+6,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control),4);
    bufp->fullBit(oldp+7,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata_op));
    bufp->fullIData(oldp+8,(vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result),32);
    bufp->fullIData(oldp+9,(vlSelfRef.main__DOT__u_cpu_top__DOT__instr),32);
    bufp->fullIData(oldp+10,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+11,((0x7fU & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)),7);
    bufp->fullCData(oldp+12,((7U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+13,((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+14,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+15,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+19,(vlSelfRef.main__DOT__pc),32);
    bufp->fullIData(oldp+20,(((IData)(4U) + vlSelfRef.main__DOT__pc)),32);
    bufp->fullIData(oldp+21,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1),32);
    bufp->fullIData(oldp+22,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2),32);
    bufp->fullIData(oldp+23,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a),32);
    bufp->fullIData(oldp+24,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b),32);
    bufp->fullIData(oldp+25,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result),32);
    bufp->fullIData(oldp+26,(vlSelfRef.main__DOT__u_cpu_top__DOT__pc_next),32);
    bufp->fullIData(oldp+27,(vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label),32);
    bufp->fullCData(oldp+28,((0x1fU & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)),5);
    bufp->fullSData(oldp+29,((0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                        >> 2U))),10);
    bufp->fullCData(oldp+30,((3U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)),2);
    bufp->fullCData(oldp+31,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en),4);
    bufp->fullIData(oldp+32,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata),32);
    bufp->fullSData(oldp+33,((0x3ffU & (vlSelfRef.main__DOT__pc 
                                        >> 2U))),10);
    bufp->fullIData(oldp+34,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[31]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+67,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata),32);
    bufp->fullCData(oldp+68,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte),8);
    bufp->fullSData(oldp+69,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0),16);
    bufp->fullBit(oldp+70,(vlSelfRef.main__DOT__clk));
    bufp->fullBit(oldp+71,(vlSelfRef.main__DOT__rst_n));
    bufp->fullIData(oldp+72,(((0x20U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                               ? 0U : ((0x10U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                        ? 0U : ((8U 
                                                 & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                    ? (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0)
                                                    : (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                    ? 
                                                   ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3
                                                     [
                                                     (0x3ffU 
                                                      & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                                         >> 2U))] 
                                                     << 0x18U) 
                                                    | ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2
                                                        [
                                                        (0x3ffU 
                                                         & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                                            >> 2U))] 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0) 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte) 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte))
                                                    : 0U)
                                                   : 0U))
                                                 : 0U)))),32);
    bufp->fullIData(oldp+73,(((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3
                               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                           >> 2U))] 
                               << 0x18U) | ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2
                                             [(0x3ffU 
                                               & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                                  >> 2U))] 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1)))),32);
}
