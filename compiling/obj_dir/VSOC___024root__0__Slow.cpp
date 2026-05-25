// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"

VL_ATTR_COLD void VSOC___024root___eval_static(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SOC__DOT__CPU__DOT__PC = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__state = 0U;
    vlSelfRef.SOC__DOT__UART__DOT__cnt = 0U;
    vlSelfRef.SOC__DOT__CW__DOT__slow_CLK = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__SOC__DOT__CW__DOT__slow_CLK__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

VL_ATTR_COLD void VSOC___024root___eval_static__TOP(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static__TOP\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SOC__DOT__CPU__DOT__PC = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__state = 0U;
    vlSelfRef.SOC__DOT__UART__DOT__cnt = 0U;
    vlSelfRef.SOC__DOT__CW__DOT__slow_CLK = 0U;
}

VL_ATTR_COLD void VSOC___024root___eval_initial(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[10U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[11U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[12U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[13U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[14U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[15U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[16U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[17U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[18U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[19U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[20U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[21U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[22U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[23U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[24U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[25U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[26U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[27U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[28U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[29U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[30U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[31U] = 0U;
    VL_READMEM_N(true, 32, 3072, 0, "hello.hex"s,  &(vlSelfRef.SOC__DOT__RAM__DOT__MEM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSOC___024root___eval_initial__TOP(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial__TOP\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[10U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[11U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[12U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[13U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[14U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[15U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[16U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[17U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[18U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[19U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[20U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[21U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[22U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[23U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[24U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[25U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[26U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[27U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[28U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[29U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[30U] = 0U;
    vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[31U] = 0U;
    VL_READMEM_N(true, 32, 3072, 0, "hello.hex"s,  &(vlSelfRef.SOC__DOT__RAM__DOT__MEM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSOC___024root___eval_final(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_final\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_settle(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_settle\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSOC___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("RTL/SOC.v", 346, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VSOC___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VSOC___024root___eval_triggers_vec__stl(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_triggers_vec__stl\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VSOC___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSOC___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSOC___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 64> VSOC__ConstPool__TABLE_h381f83e2_0;

VL_ATTR_COLD void VSOC___024root___stl_sequent__TOP__0(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___stl_sequent__TOP__0\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
    SOC__DOT__CPU__DOT__loadstore_addr = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.TXD = (1U & ((~ (0U != (IData)(vlSelfRef.SOC__DOT__UART__DOT__data))) 
                           | (IData)(vlSelfRef.SOC__DOT__UART__DOT__data)));
    vlSelfRef.SOC__DOT__CPU__DOT__Uimm = (0xfffff000U 
                                          & vlSelfRef.SOC__DOT__CPU__DOT__instr);
    vlSelfRef.SOC__DOT__CPU__DOT__PCplus4 = ((IData)(4U) 
                                             + vlSelfRef.SOC__DOT__CPU__DOT__PC);
    vlSelfRef.SOC__DOT__CPU__DOT__PCplusImm = (vlSelfRef.SOC__DOT__CPU__DOT__PC 
                                               + ((8U 
                                                   & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                            >> 0x00000014U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | ((0x00000800U 
                                                        & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                           << 4U)) 
                                                       | ((0x000007e0U 
                                                           & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                >> 7U))))))));
    vlSelfRef.SOC__DOT__CPU__DOT__aluIn2 = (((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.SOC__DOT__CPU__DOT__instr)) 
                                             | (0x63U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.SOC__DOT__CPU__DOT__instr)))
                                             ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                             : (((- (IData)(
                                                            (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000bU) 
                                                | (0x000007ffU 
                                                   & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                      >> 0x00000014U))));
    SOC__DOT__CPU__DOT__loadstore_addr = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                          + (((- (IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000bU) 
                                             | (0x000007ffU 
                                                & ((0x23U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                                                    ? 
                                                   ((0x000007e0U 
                                                     & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                          >> 7U)))
                                                    : 
                                                   (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                    >> 0x00000014U)))));
    vlSelfRef.SOC__DOT__CPU__DOT__aluPlus = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                             + vlSelfRef.SOC__DOT__CPU__DOT__aluIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x00000001ffffffffULL 
                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                 (((QData)((IData)(
                                                                                ((vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001fU) 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x0000001eU)))) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x0000000cU)))
                                                                                 ? 
                                                                                ((((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 1U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 3U))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 7U))))) 
                                                                                << 0x00000018U) 
                                                                                | ((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 9U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000bU))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000bU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000dU))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000dU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000fU))))) 
                                                                                << 0x00000010U)) 
                                                                                | (((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000fU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000011U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000011U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000013U))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000013U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000015U))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000015U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000017U))))) 
                                                                                << 8U) 
                                                                                | (((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000017U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000019U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000019U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001bU))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001bU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001dU))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001dU)) 
                                                                                | (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001fU))))))
                                                                                 : vlSelfRef.SOC__DOT__CPU__DOT__rs1)))), 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.SOC__DOT__CPU__DOT__aluIn2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                ^ vlSelfRef.SOC__DOT__CPU__DOT__aluIn2);
    vlSelfRef.SOC__DOT__CPU__DOT__aluMinus = (0x00000001ffffffffULL 
                                              & (1ULL 
                                                 + 
                                                 ((0x0000000100000000ULL 
                                                   | (QData)((IData)(
                                                                     (~ vlSelfRef.SOC__DOT__CPU__DOT__aluIn2)))) 
                                                  + (QData)((IData)(vlSelfRef.SOC__DOT__CPU__DOT__rs1)))));
    vlSelfRef.SOC__DOT__mem_wdata = ((((0x0000ff00U 
                                        & (((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                             ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                             : ((2U 
                                                 & SOC__DOT__CPU__DOT__loadstore_addr)
                                                 ? 
                                                (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 0x00000018U))) 
                                           << 8U)) 
                                       | (0x000000ffU 
                                          & ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                              ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                              : (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 0x00000010U)))) 
                                      << 0x00000010U) 
                                     | ((0x0000ff00U 
                                         & (((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                              ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                              : (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 8U)) 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & vlSelfRef.SOC__DOT__CPU__DOT__rs2)));
    vlSelfRef.SOC__DOT__mem_wmask = (0x0000000fU & 
                                     (((0U == (3U & 
                                               (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                >> 0x0000000cU)))
                                        ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                            ? ((1U 
                                                & SOC__DOT__CPU__DOT__loadstore_addr)
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & SOC__DOT__CPU__DOT__loadstore_addr)
                                                ? 2U
                                                : 1U))
                                        : (((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                             ? 0x0cU
                                             : 3U) 
                                           | (- (IData)(
                                                        (1U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                             >> 0x0000000cU))))))) 
                                      & (- (IData)(
                                                   (6U 
                                                    == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))))));
    vlSelfRef.SOC__DOT__mem_addr = (((1U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)) 
                                     | (0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)))
                                     ? vlSelfRef.SOC__DOT__CPU__DOT__PC
                                     : SOC__DOT__CPU__DOT__loadstore_addr);
    vlSelfRef.SOC__DOT__CPU__DOT__LT = (1U & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                               >> 0x0000001fU)
                                               ? (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                  >> 0x0000001fU)
                                               : (IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__aluMinus 
                                                          >> 0x00000020U))));
    vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask 
        = ((- (IData)((1U & (~ (vlSelfRef.SOC__DOT__mem_addr 
                                >> 0x00000016U))))) 
           & (IData)(vlSelfRef.SOC__DOT__mem_wmask));
    vlSelfRef.SOC__DOT__uart_valid = (IData)(((0x00400008U 
                                               == (0x00400008U 
                                                   & vlSelfRef.SOC__DOT__mem_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.SOC__DOT__mem_wmask))));
    vlSelfRef.SOC__DOT__mem_rdata = ((0x00400000U & vlSelfRef.SOC__DOT__mem_addr)
                                      ? (0x00000200U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.SOC__DOT__mem_addr 
                                                           >> 4U)))) 
                                            & ((~ (IData)(vlSelfRef.SOC__DOT__uart_ready)) 
                                               << 9U)))
                                      : vlSelfRef.SOC__DOT__RAM_rdata);
    __Vtableidx1 = (((0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__aluMinus)) 
                     << 5U) | (((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LT) 
                                << 4U) | ((8U & ((IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__aluMinus 
                                                          >> 0x00000020U)) 
                                                 << 3U)) 
                                          | (7U & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                   >> 0x0000000cU)))));
    vlSelfRef.SOC__DOT__CPU__DOT__takeBranch = VSOC__ConstPool__TABLE_h381f83e2_0
        [__Vtableidx1];
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword = (0x0000ffffU 
                                                   & ((2U 
                                                       & SOC__DOT__CPU__DOT__loadstore_addr)
                                                       ? 
                                                      (vlSelfRef.SOC__DOT__mem_rdata 
                                                       >> 0x00000010U)
                                                       : vlSelfRef.SOC__DOT__mem_rdata));
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_byte = (0x000000ffU 
                                               & ((1U 
                                                   & SOC__DOT__CPU__DOT__loadstore_addr)
                                                   ? 
                                                  ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword)));
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_sign = (1U & 
                                               ((~ 
                                                 (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                  >> 0x0000000eU)) 
                                                & ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? 
                                                   ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_byte) 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                    >> 0x0000000fU))));
}

VL_ATTR_COLD void VSOC___024root___eval_stl(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_stl\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VSOC___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__stl\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VSOC___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSOC___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VSOC___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VSOC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VSOC___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSOC___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge SOC.CW.slow_CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSOC___024root___ctor_var_reset(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___ctor_var_reset\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->RESET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5415920568641164577ull);
    vlSelf->LEDS = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18402494796112979162ull);
    vlSelf->RXD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14998296088947887726ull);
    vlSelf->TXD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15820581041885547904ull);
    vlSelf->SOC__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2467280259726289843ull);
    vlSelf->SOC__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1534955409959932329ull);
    vlSelf->SOC__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14931902795857503889ull);
    vlSelf->SOC__DOT__mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10734899324586952109ull);
    vlSelf->SOC__DOT__RAM_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17109447797047016121ull);
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = 0;
    vlSelf->SOC__DOT__uart_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3463948716835833012ull);
    vlSelf->SOC__DOT__uart_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11023694305202308102ull);
    vlSelf->SOC__DOT__CPU__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14962598658796438314ull);
    vlSelf->SOC__DOT__CPU__DOT__Uimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12861175580971192318ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1955504343613856906ull);
    }
    vlSelf->SOC__DOT__CPU__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6360527787319470988ull);
    vlSelf->SOC__DOT__CPU__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4666279302068497673ull);
    vlSelf->SOC__DOT__CPU__DOT__aluIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8856391138549199198ull);
    vlSelf->SOC__DOT__CPU__DOT__aluPlus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2496262152981307259ull);
    vlSelf->SOC__DOT__CPU__DOT__aluMinus = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13514212692113664598ull);
    vlSelf->SOC__DOT__CPU__DOT__LT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16738333410842157128ull);
    vlSelf->SOC__DOT__CPU__DOT__takeBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11568771049885840084ull);
    vlSelf->SOC__DOT__CPU__DOT__PCplusImm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3508591908322156741ull);
    vlSelf->SOC__DOT__CPU__DOT__PCplus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10494292781584695036ull);
    vlSelf->SOC__DOT__CPU__DOT__LOAD_halfword = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11395425005044221633ull);
    vlSelf->SOC__DOT__CPU__DOT__LOAD_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5435965977768247080ull);
    vlSelf->SOC__DOT__CPU__DOT__LOAD_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11172027261510384250ull);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h14078eb5__0 = 0;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h1407909f__0 = 0;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h14079299__0 = 0;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h14079483__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2621317326513363662ull);
    }
    vlSelf->SOC__DOT__UART__DOT__data = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3128971638388923037ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__SOC__DOT__CW__DOT__slow_CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
