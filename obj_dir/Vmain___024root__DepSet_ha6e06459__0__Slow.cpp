// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem0[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem1[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem2[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem3[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_2[0U] = 0x783d2573U;
    __Vtemp_2[1U] = 0x61646865U;
    __Vtemp_2[2U] = 0x6c6fU;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                             vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__hex_file)) {
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NN(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__hex_file)
                     ,  &(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem)
                     , 0, ~0ULL);
    } else {
        __Vtemp_3[0U] = 0x2e686578U;
        __Vtemp_3[1U] = 0x6772616dU;
        __Vtemp_3[2U] = 0x70726fU;
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                     ,  &(vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem)
                     , 0, ~0ULL);
    }
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem0[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
            = (0xffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem
               [(0x3ffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)]);
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem1[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
            = (0xffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem
                        [(0x3ffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
                        >> 8U));
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem2[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
            = (0xffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem
                        [(0x3ffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
                        >> 0x10U));
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem3[(0x3ffU 
                                                                              & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
            = (vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem
               [(0x3ffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i)] 
               >> 0x18U);
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.main__DOT__u_cpu_top__DOT__instr = ((
                                                   vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem3
                                                   [
                                                   (0x3ffU 
                                                    & (vlSelfRef.main__DOT__pc 
                                                       >> 2U))] 
                                                   << 0x18U) 
                                                  | ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem2
                                                      [
                                                      (0x3ffU 
                                                       & (vlSelfRef.main__DOT__pc 
                                                          >> 2U))] 
                                                      << 0x10U) 
                                                     | ((vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem1
                                                         [
                                                         (0x3ffU 
                                                          & (vlSelfRef.main__DOT__pc 
                                                             >> 2U))] 
                                                         << 8U) 
                                                        | vlSelfRef.main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem0
                                                        [
                                                        (0x3ffU 
                                                         & (vlSelfRef.main__DOT__pc 
                                                            >> 2U))])));
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0[(0x3ffU 
                                                                       & vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1[(0x3ffU 
                                                                       & vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2[(0x3ffU 
                                                                       & vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3[(0x3ffU 
                                                                       & vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("main.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_he20e8f34_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_hc848822e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_he33f67c0_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vmain__ConstPool__TABLE_hb861f2b2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_h91469146_0;

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0;
    main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1 
        = vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
        [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                   >> 0xfU))];
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata2 
        = vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
        [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                   >> 0x14U))];
    if ((0x40U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        if ((0x20U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            if ((0x10U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                    = ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                        ? 0U : ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                 ? 0U : ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                          ? ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                              ? 0x26U
                                              : 0U)
                                          : 0U)));
            } else if ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                    if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                        if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                                = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelfRef.main__DOT__u_cpu_top__DOT__instr) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                             >> 0x14U))))));
                            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 3U;
                        } else {
                            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                        }
                    } else {
                        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                    }
                } else {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                }
            } else if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                    if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                            = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                            = ((0U == (7U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                             >> 0xcU)))
                                ? 4U : 0U);
                    } else {
                        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                    }
                } else {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                }
            } else if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                        = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                    >> 7U))))));
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                        = ((0x4000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                            ? ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                ? ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                    ? 0xaU : 9U) : 
                               ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                 ? 8U : 7U)) : ((0x2000U 
                                                 & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                                  ? 6U
                                                  : 5U)));
                } else {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                }
            } else {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
            }
        } else {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        }
    } else if ((0x20U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        if ((0x10U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            if ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
            } else if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                    if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                            = (0xfffff000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr);
                        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 1U;
                    } else {
                        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                    }
                } else {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                }
            } else {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                    = ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                        ? ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                            ? ((1U == (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                       >> 0x19U)) ? 
                               ((0x4000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                 ? ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                     ? ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                         ? 0x30U : 0x2fU)
                                     : ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                         ? 0x2eU : 0x2dU))
                                 : ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                     ? ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                         ? 0x2cU : 0x2bU)
                                     : ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                         ? 0x2aU : 0x29U)))
                                : ((0x4000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                    ? ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                            ? ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x25U
                                                : 0U)
                                            : ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x24U
                                                : 0U))
                                        : ((0x1000U 
                                            & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                            ? ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x22U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                     >> 0x19U))
                                                    ? 0x23U
                                                    : 0U))
                                            : ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x21U
                                                : 0U)))
                                    : ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                            ? ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x20U
                                                : 0U)
                                            : ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x1fU
                                                : 0U))
                                        : ((0x1000U 
                                            & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                            ? ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x1eU
                                                : 0U)
                                            : ((0U 
                                                == 
                                                (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                 >> 0x19U))
                                                ? 0x1cU
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                     >> 0x19U))
                                                    ? 0x1dU
                                                    : 0U))))))
                            : 0U) : 0U);
            }
        } else if ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        } else if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                = ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                    ? ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                        ? (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                            >> 7U))))
                        : 0U) : 0U);
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        } else if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                    = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                      >> 7U))));
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                    = ((0U == (7U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                     >> 0xcU))) ? 0x10U
                        : ((1U == (7U & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                         >> 0xcU)))
                            ? 0x11U : ((2U == (7U & 
                                               (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                                >> 0xcU)))
                                        ? 0x12U : 0U)));
            } else {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
            }
        } else {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        }
    } else if ((0x10U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        if ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        } else if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                        = (0xfffff000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr);
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 2U;
                } else {
                    vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                    vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
                }
            } else {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
            }
        } else if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                    = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                          >> 0x14U));
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                    = ((0x4000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                        ? ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                            ? ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                ? 0x18U : 0x17U) : 
                           ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                             ? ((0U == (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                        >> 0x19U)) ? 0x1aU
                                 : ((0x20U == (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                               >> 0x19U))
                                     ? 0x1bU : 0U))
                             : 0x16U)) : ((0x2000U 
                                           & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                           ? ((0x1000U 
                                               & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                               ? 0x15U
                                               : 0x14U)
                                           : ((0x1000U 
                                               & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                               ? 0x19U
                                               : 0x13U)));
            } else {
                vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
                vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
            }
        } else {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        }
    } else if ((8U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
    } else if ((4U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
            = ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                ? ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                    ? (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                          >> 0x14U)) : 0U) : 0U);
        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
    } else if ((2U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
        if ((1U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)) {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result 
                = (((- (IData)((vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                      >> 0x14U));
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr 
                = ((0x4000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                    ? ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                        ? 0U : ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                 ? 0xfU : 0xeU)) : 
                   ((0x2000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                     ? ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                         ? 0U : 0xdU) : ((0x1000U & vlSelfRef.main__DOT__u_cpu_top__DOT__instr)
                                          ? 0xcU : 0xbU)));
        } else {
            vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
            vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
        }
    } else {
        vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result = 0U;
        vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr = 0U;
    }
    vlSelfRef.main__DOT__u_cpu_top__DOT__pc_label = 
        (vlSelfRef.main__DOT__pc + vlSelfRef.main__DOT__u_cpu_top__DOT__imm_result);
    vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_a 
        = ((2U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
            ? vlSelfRef.main__DOT__pc : vlSelfRef.main__DOT__u_cpu_top__DOT__reg_rdata1);
    __Vtableidx1 = vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr;
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_we = Vmain__ConstPool__TABLE_he20e8f34_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u_cpu_top__DOT__mem_we = Vmain__ConstPool__TABLE_hc848822e_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u_cpu_top__DOT__alu_src_b_op 
        = Vmain__ConstPool__TABLE_he33f67c0_0[__Vtableidx1];
    vlSelfRef.main__DOT__u_cpu_top__DOT__alu_control 
        = Vmain__ConstPool__TABLE_hb861f2b2_0[__Vtableidx1];
    vlSelfRef.main__DOT__u_cpu_top__DOT__reg_wdata_op 
        = Vmain__ConstPool__TABLE_h91469146_0[__Vtableidx1];
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
    vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata 
        = ((0x10U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
            ? main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0
            : ((0x11U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))
                ? main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_0
                : vlSelfRef.main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs
               [(0x1fU & (vlSelfRef.main__DOT__u_cpu_top__DOT__instr 
                          >> 0x14U))]));
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

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge main.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge main.clk or negedge main.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge main.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] (6'h26 == main.u_cpu_top.d_instr))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge main.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge main.clk or negedge main.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge main.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] (6'h26 == main.u_cpu_top.d_instr))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->main__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__d_instr = VL_RAND_RESET_I(6);
    vlSelf->main__DOT__u_cpu_top__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__u_cpu_top__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__u_cpu_top__DOT__alu_src_b_op = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__u_cpu_top__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->main__DOT__u_cpu_top__DOT__reg_wdata_op = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__u_cpu_top__DOT__imm_result = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__reg_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__reg_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__alu_src_a = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__alu_src_b = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__pc_label = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->main__DOT__u_cpu_top__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en = VL_RAND_RESET_I(4);
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte = VL_RAND_RESET_I(8);
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0 = VL_RAND_RESET_I(16);
    vlSelf->main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_ha1f6905e__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
