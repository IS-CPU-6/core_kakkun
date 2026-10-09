// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain__Syms.h"
#include "Vmain___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain___024root___eval_triggers__act(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_ha1f6905e__0;
    __Vtrigcurrexpr_ha1f6905e__0 = 0;
    __Vtrigcurrexpr_ha1f6905e__0 = (0x26U == (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr));
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.main__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, (((IData)(vlSelfRef.main__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.main__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__rst_n__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.main__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_ha1f6905e__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_ha1f6905e__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__clk__0 
        = vlSelfRef.main__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__main__DOT__rst_n__0 
        = vlSelfRef.main__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_ha1f6905e__0 = __Vtrigcurrexpr_ha1f6905e__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0;
    __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0;
    __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0;
    __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 = 0;
    SData/*9:0*/ __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0;
    __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0;
    __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 = 0;
    SData/*9:0*/ __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0;
    __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 = 0;
    CData/*7:0*/ __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0;
    __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 = 0;
    SData/*9:0*/ __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0;
    __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 = 0;
    std::string __Vtemp_1;
    // Body
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 = 0U;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 = 0U;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 = 0U;
    __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelfRef.main__DOT__rst_n) 
                     & (0x26U != (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr))))) {
        __Vtemp_1 = Vmain___024unit::__Venumtab_enum_name0
            .at((IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__d_instr));
        VL_WRITEF_NX("Time=%0t | PC=0x%08x | Instr=0x%08x (%0@)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.main__DOT__pc,32,vlSelfRef.main__DOT__u_cpu_top__DOT__instr,
                     -1,&(__Vtemp_1));
    }
    if ((8U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en))) {
        __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 
            = (vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata 
               >> 0x18U);
        __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 
            = (0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                         >> 2U));
        __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en))) {
        __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 
            = (0xffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata 
                        >> 0x10U));
        __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 
            = (0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                         >> 2U));
        __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en))) {
        __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 
            = (0xffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata 
                        >> 8U));
        __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 
            = (0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                         >> 2U));
        __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en))) {
        __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 
            = (0xffU & vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata);
        __VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 
            = (0x3ffU & (vlSelfRef.main__DOT__u_cpu_top__DOT__alu_result 
                         >> 2U));
        __VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0 = 1U;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3[__VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0] 
            = __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3__v0;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2[__VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0] 
            = __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2__v0;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1[__VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0] 
            = __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1__v0;
    }
    if (__VdlySet__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0) {
        vlSelfRef.main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0[__VdlyDim0__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0] 
            = __VdlyVal__main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0__v0;
    }
}
