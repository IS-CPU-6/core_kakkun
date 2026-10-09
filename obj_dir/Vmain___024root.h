// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmain___024unit;


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmain___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ main__DOT__clk;
    CData/*0:0*/ main__DOT__rst_n;
    CData/*5:0*/ main__DOT__u_cpu_top__DOT__d_instr;
    CData/*0:0*/ main__DOT__u_cpu_top__DOT__reg_we;
    CData/*0:0*/ main__DOT__u_cpu_top__DOT__mem_we;
    CData/*0:0*/ main__DOT__u_cpu_top__DOT__alu_src_b_op;
    CData/*3:0*/ main__DOT__u_cpu_top__DOT__alu_control;
    CData/*0:0*/ main__DOT__u_cpu_top__DOT__reg_wdata_op;
    CData/*3:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT__byte_en;
    CData/*7:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT__target_byte;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__main__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__main__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_ha1f6905e__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgExtracted_h31ee765a__0;
    SData/*15:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT____VdfgRegularize_hda23c55f_0_1;
    IData/*31:0*/ main__DOT__pc;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__instr;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__imm_result;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__reg_wdata;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__reg_rdata1;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__reg_rdata2;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__alu_src_a;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__alu_src_b;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__alu_result;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__pc_next;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__pc_label;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT__aligned_wdata;
    IData/*31:0*/ main__DOT__u_cpu_top__DOT__u_data_memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__temp_mem;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem0;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem1;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem2;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__mem3;
    VlUnpacked<IData/*31:0*/, 32> main__DOT__u_cpu_top__DOT__u_register_file__DOT__regs;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem0;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem1;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem2;
    VlUnpacked<CData/*7:0*/, 1024> main__DOT__u_cpu_top__DOT__u_data_memory__DOT__mem3;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string main__DOT__u_cpu_top__DOT__u_instruction_memory__DOT__hex_file;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h94d8b39c__0;
    VlTriggerScheduler __VtrigSched_h05c1c6ab__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* v__name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
