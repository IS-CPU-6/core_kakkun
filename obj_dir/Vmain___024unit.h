// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024UNIT_H_
#define VERILATED_VMAIN___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<CData/*5:0*/, std::string> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024unit(Vmain__Syms* symsp, const char* v__name);
    ~Vmain___024unit();
    VL_UNCOPYABLE(Vmain___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
