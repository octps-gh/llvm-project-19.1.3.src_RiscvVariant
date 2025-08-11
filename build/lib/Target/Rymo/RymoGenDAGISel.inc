/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Rymo target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/ OPC_SwitchOpcode /*2 cases */, 11, TARGET_VAL(ISD::Constant),// ->15
/*     4*/  OPC_RecordNode, // #0 = $imm12
/*     5*/  OPC_EmitRegisterI32, Rymo::X0,
/*     7*/  OPC_EmitConvertToTarget0,
/*     8*/  OPC_MorphNodeTo1None, TARGET_VAL(Rymo::ADDI),
                MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (imm:{ *:[i32] }):$imm12 - Complexity = 3
            // Dst: (ADDI:{ *:[i32] } X0:{ *:[i32] }, (imm:{ *:[i32] }):$imm12)
/*    15*/ /*SwitchOpcode*/ 8, TARGET_VAL(RymoISD::RET_GLUE),// ->26
/*    18*/  OPC_RecordNode, // #0 = 'retglue' chained node
/*    19*/  OPC_CaptureGlueInput,
/*    20*/  OPC_EmitMergeInputChains1_0,
/*    21*/  OPC_MorphNodeTo0, TARGET_VAL(Rymo::PseudoRET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#Ops*/, 
            // Src: (retglue) - Complexity = 3
            // Dst: (PseudoRET)
/*    26*/ 0, // EndSwitchOpcode
    0
  }; // Total Array size is 28 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 0
  // #OPC_RecordNode                           = 2
  // #OPC_RecordChild                          = 0
  // #OPC_RecordMemRef                         = 0
  // #OPC_CaptureGlueInput                     = 1
  // #OPC_MoveChild                            = 0
  // #OPC_MoveSibling                          = 0
  // #OPC_MoveParent                           = 0
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 0
  // #OPC_CheckOpcode                          = 0
  // #OPC_SwitchOpcode                         = 1
  // #OPC_CheckType                            = 0
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 0
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 0
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 0
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 0
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 1
  // #OPC_EmitConvertToTarget                  = 1
  // #OPC_EmitMergeInputChains                 = 1
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 0
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 2

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable, sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
