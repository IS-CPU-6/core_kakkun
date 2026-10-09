// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,((0x26U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))));
        bufp->chgCData(oldp+1,(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr),6);
        bufp->chgBit(oldp+2,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_we));
        bufp->chgBit(oldp+3,(vlSelfRef.main__DOT__u_cpu_top__DOT__mem_we));
        bufp->chgBit(oldp+4,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b_op));
        bufp->chgCData(oldp+5,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control),4);
        bufp->chgBit(oldp+6,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata_op));
        bufp->chgIData(oldp+7,(vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+8,(vlSelfRef.main__DOT__u_cpu_top__DOT__instr),32);
        bufp->chgIData(oldp+9,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+10,((0x7fU & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)),7);
        bufp->chgCData(oldp+11,((7U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+12,((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+13,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+14,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+16,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+18,(vlSelfRef.main__DOT__pc),32);
        bufp->chgIData(oldp+19,(((IData)(4U) + vlSelfRef.main__DOT__pc)),32);
        bufp->chgIData(oldp+20,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1),32);
        bufp->chgIData(oldp+21,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2),32);
        bufp->chgIData(oldp+22,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a),32);
        bufp->chgIData(oldp+23,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b),32);
        bufp->chgIData(oldp+24,(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result),32);
        bufp->chgIData(oldp+25,(vlSelfRef.main__DOT__u_cpu_top__DOT__pc_next),32);
        bufp->chgIData(oldp+26,(vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label),32);
        bufp->chgCData(oldp+27,((0x1fU & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)),5);
        bufp->chgSData(oldp+28,((0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                           >> 2U))),10);
        bufp->chgCData(oldp+29,((3U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)),2);
        bufp->chgCData(oldp+30,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en),4);
        bufp->chgIData(oldp+31,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata),32);
        bufp->chgSData(oldp+32,((0x3ffU & (vlSelfRef.main__DOT__pc 
                                           >> 2U))),10);
        bufp->chgIData(oldp+33,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[1]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[2]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[3]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[4]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[5]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[6]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[7]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[8]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[9]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[10]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[11]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[12]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[13]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[14]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[15]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[16]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[17]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[18]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[19]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[20]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[21]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[22]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[23]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[24]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[25]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[26]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[27]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[28]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[29]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[30]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[31]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+66,(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata),32);
        bufp->chgCData(oldp+67,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte),8);
        bufp->chgSData(oldp+68,(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0),16);
    }
    bufp->chgBit(oldp+69,(vlSelfRef.main__DOT__clk));
    bufp->chgBit(oldp+70,(vlSelfRef.main__DOT__rst_n));
    bufp->chgIData(oldp+71,(((0x20U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? 0U : ((0x10U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                       ? 0U : ((8U 
                                                & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                ? (
                                                   (4U 
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
    bufp->chgIData(oldp+72,(((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3
                              [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                          >> 2U))] 
                              << 0x18U) | ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2
                                            [(0x3ffU 
                                              & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                                                 >> 2U))] 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1)))),32);
}

void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_cleanup\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
