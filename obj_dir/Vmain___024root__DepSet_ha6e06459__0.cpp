// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf);
VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__0(Vmain___024root* vlSelf);
VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__1(Vmain___024root* vlSelf);
VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__2(Vmain___024root* vlSelf);

void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vmain___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmain___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vmain___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__clk__0 
        = vlSelfRef.main__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__rst_n__0 
        = vlSelfRef.main__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_ha1f6905e__0 = (0x26U 
                                              == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr));
}

VL_INLINE_OPT VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "main.sv", 
                                             20);
        vlSelfRef.main__DOT__clk = (1U & (~ (IData)(vlSelfRef.main__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__1(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__rst_n = 0U;
    VL_WRITEF_NX("[TB] Reset asserted (rst_n = 0)\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "main.sv", 
                                         27);
    co_await vlSelfRef.__VtrigSched_h94d8b39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge main.clk)", 
                                                         "main.sv", 
                                                         29);
    vlSelfRef.main__DOT__rst_n = 1U;
    VL_WRITEF_NX("[TB] Reset released (rst_n = 1) -> CPU Starts Execution!\n",0);
    while ((0x26U != (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))) {
        co_await vlSelfRef.__VtrigSched_h05c1c6ab__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] (6'h26 == main.u_cpu_top.d_instr))", 
                                                             "main.sv", 
                                                             32);
    }
    VL_WRITEF_NX("----------------------------------------------\n[TB] HALT (EBREAK) detected at PC = 0x%08x!\n[TB] Simulation Completed Successfully.\n----------------------------------------------\n",0,
                 32,vlSelfRef.main__DOT__pc);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "main.sv", 
                                         39);
}

VL_INLINE_OPT VlCoroutine Vmain___024root___eval_initial__TOP__Vtiming__2(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2faf080ULL, 
                                         nullptr, "main.sv", 
                                         43);
    VL_WRITEF_NX("[TB] ERROR: Simulation Timeout!\n",0);
    VL_FINISH_MT("main.sv", 45, "");
}

void Vmain___024root___eval_act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf);
void Vmain___024root___nba_comb__TOP__0(Vmain___024root* vlSelf);

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0;
    main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0 = 0;
    IData/*31:0*/ __VdlyVal__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0;
    __VdlyVal__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0;
    __VdlyDim0__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v1;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v1 = 0;
    // Body
    __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 = 0U;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.main__DOT__rst_n)))) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.main__DOT__rst_n) {
        if (((IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__reg_we) 
             & (0U != (0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                >> 7U))))) {
            __VdlyVal__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 
                = vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata;
            __VdlyDim0__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 
                = (0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                            >> 7U));
            __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0 = 1U;
        }
        if ((0x26U != (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))) {
            vlSelfRef.main__DOT__pc = vlSelfRef.main__DOT__u_cpu_top__DOT__pc_next;
        }
    } else {
        __VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v1 = 1U;
        vlSelfRef.main__DOT__pc = 0U;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[__VdlyDim0__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0] 
            = __VdlyVal__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v0;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs__v1) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[1U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[2U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[3U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[4U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[5U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[6U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[7U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[8U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[9U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xaU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xbU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xcU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xdU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xeU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0xfU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x10U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x11U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x12U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x13U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x14U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x15U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x16U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x17U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x18U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x19U] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1aU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1bU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1cU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1dU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1eU] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[0x1fU] = 0U;
    }
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
        = vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
        [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                   >> 0xfU))];
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2 
        = vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
        [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                   >> 0x14U))];
    vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label = 
        (vlSelfRef.main__DOT__pc + vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result);
    vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
        = ((2U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
            ? vlSelfRef.main__DOT__pc : vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1);
    if (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b_op) {
        if (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b_op) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b 
                = vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result;
        }
    } else {
        vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b 
            = vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2;
    }
    vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
            ? ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                ? 0U : ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                         ? 0U : ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                                  ? VL_SHIFTRS_III(32,32,5, vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a, 
                                                   (0x1fU 
                                                    & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b))
                                  : (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                                     >> (0x1fU & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)))))
            : ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                        ? (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                           << (0x1fU & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b))
                        : ((vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                            < vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                                            ? (VL_LTS_III(32, vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a, vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)
                                                ? 1U
                                                : 0U)
                                            : (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                                               ^ vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)))
                : ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                        ? (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                           - vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)
                        : (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                           + vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b))
                    : ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control))
                        ? (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                           | vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)
                        : (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
                           & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b)))));
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en 
        = ((IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__mem_we)
            ? ((0x10U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                ? ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                    ? ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                        ? 8U : 4U) : ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                                       ? 2U : 1U)) : 
               ((0x11U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                 ? ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                     ? 0xcU : 3U) : ((0x12U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                      ? 0xfU : 0U)))
            : 0U);
    vlSelfRef.main__DOT__u_cpu_top__DOT__pc_next = 
        ((0x20U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
          ? ((IData)(4U) + vlSelfRef.main__DOT__pc)
          : ((0x10U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
              ? ((IData)(4U) + vlSelfRef.main__DOT__pc)
              : ((8U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                  ? ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                      ? ((IData)(4U) + vlSelfRef.main__DOT__pc)
                      : ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                          ? ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? ((IData)(4U) + vlSelfRef.main__DOT__pc)
                              : ((vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
                                  >= vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc)))
                          : ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? ((vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
                                  < vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc))
                              : (VL_GTES_III(32, vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1, vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc)))))
                  : ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                      ? ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                          ? ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? (VL_LTS_III(32, vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1, vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc))
                              : ((vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
                                  != vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc)))
                          : ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? ((vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
                                  == vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2)
                                  ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                                  : ((IData)(4U) + vlSelfRef.main__DOT__pc))
                              : (0xfffffffeU & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)))
                      : ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                          ? ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                              ? vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label
                              : ((IData)(4U) + vlSelfRef.main__DOT__pc))
                          : ((IData)(4U) + vlSelfRef.main__DOT__pc))))));
    main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
                        [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                   >> 0x14U))], VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result), 3U));
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata 
        = ((0x10U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
            ? main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0
            : ((0x11U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                ? main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0
                : vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
               [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                          >> 0x14U))]));
}

VL_INLINE_OPT void Vmain___024root___nba_comb__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1 
        = ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1
            [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                        >> 2U))] << 8U) | vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0
           [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                       >> 2U))]);
    if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte 
            = ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                ? vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3
               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                           >> 2U))] : vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2
               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                           >> 2U))]);
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0 
            = ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3
                [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                            >> 2U))] << 8U) | vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2
               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                           >> 2U))]);
    } else {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte 
            = ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result)
                ? vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1
               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                           >> 2U))] : vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0
               [(0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                           >> 2U))]);
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0 
            = vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1;
    }
    if ((1U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata 
            = vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result;
    } else if ((3U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata 
            = ((IData)(4U) + vlSelfRef.main__DOT__pc);
    } else if ((4U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata 
            = ((IData)(4U) + vlSelfRef.main__DOT__pc);
    } else if (vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata_op) {
        if (vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata_op) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata 
                = ((0x20U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                    ? 0U : ((0x10U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                             ? 0U : ((8U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                      ? ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                          ? ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                                  ? (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0)
                                                  : (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte))
                                              : ((1U 
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
                                          : ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                                              ? ((1U 
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
                                      : 0U)));
        }
    } else {
        vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata 
            = vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result;
    }
}

void Vmain___024root___timing_commit(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h94d8b39c__0.commit(
                                                   "@(negedge main.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h05c1c6ab__0.commit(
                                                   "@([changed] (6'h26 == main.u_cpu_top.d_instr))");
    }
}

void Vmain___024root___timing_resume(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h94d8b39c__0.resume(
                                                   "@(negedge main.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h05c1c6ab__0.resume(
                                                   "@([changed] (6'h26 == main.u_cpu_top.d_instr))");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmain___024root___eval_triggers__act(Vmain___024root* vlSelf);

bool Vmain___024root___eval_phase__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmain___024root___eval_triggers__act(vlSelf);
    Vmain___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmain___024root___timing_resume(vlSelf);
        Vmain___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmain___024root___eval_phase__nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmain___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("main.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("main.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmain___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmain___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
