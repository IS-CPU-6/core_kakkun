// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain__Syms.h"
#include "Vmain___024unit.h"
VlAssocArray<CData/*5:0*/, std::string> Vmain___024unit::__Venumtab_enum_name0;

void Vmain___024unit___ctor_var_reset(Vmain___024unit* vlSelf);

Vmain___024unit::Vmain___024unit(Vmain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmain___024unit___ctor_var_reset(this);
}

void Vmain___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmain___024unit::~Vmain___024unit() {
}
