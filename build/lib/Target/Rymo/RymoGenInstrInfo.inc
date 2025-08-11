/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Rymo {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_VALUE_LIST	= 14,
    DBG_INSTR_REF	= 15,
    DBG_PHI	= 16,
    DBG_LABEL	= 17,
    REG_SEQUENCE	= 18,
    COPY	= 19,
    BUNDLE	= 20,
    LIFETIME_START	= 21,
    LIFETIME_END	= 22,
    PSEUDO_PROBE	= 23,
    ARITH_FENCE	= 24,
    STACKMAP	= 25,
    FENTRY_CALL	= 26,
    PATCHPOINT	= 27,
    LOAD_STACK_GUARD	= 28,
    PREALLOCATED_SETUP	= 29,
    PREALLOCATED_ARG	= 30,
    STATEPOINT	= 31,
    LOCAL_ESCAPE	= 32,
    FAULTING_OP	= 33,
    PATCHABLE_OP	= 34,
    PATCHABLE_FUNCTION_ENTER	= 35,
    PATCHABLE_RET	= 36,
    PATCHABLE_FUNCTION_EXIT	= 37,
    PATCHABLE_TAIL_CALL	= 38,
    PATCHABLE_EVENT_CALL	= 39,
    PATCHABLE_TYPED_EVENT_CALL	= 40,
    ICALL_BRANCH_FUNNEL	= 41,
    MEMBARRIER	= 42,
    JUMP_TABLE_DEBUG_INFO	= 43,
    CONVERGENCECTRL_ENTRY	= 44,
    CONVERGENCECTRL_ANCHOR	= 45,
    CONVERGENCECTRL_LOOP	= 46,
    CONVERGENCECTRL_GLUE	= 47,
    G_ASSERT_SEXT	= 48,
    G_ASSERT_ZEXT	= 49,
    G_ASSERT_ALIGN	= 50,
    G_ADD	= 51,
    G_SUB	= 52,
    G_MUL	= 53,
    G_SDIV	= 54,
    G_UDIV	= 55,
    G_SREM	= 56,
    G_UREM	= 57,
    G_SDIVREM	= 58,
    G_UDIVREM	= 59,
    G_AND	= 60,
    G_OR	= 61,
    G_XOR	= 62,
    G_IMPLICIT_DEF	= 63,
    G_PHI	= 64,
    G_FRAME_INDEX	= 65,
    G_GLOBAL_VALUE	= 66,
    G_PTRAUTH_GLOBAL_VALUE	= 67,
    G_CONSTANT_POOL	= 68,
    G_EXTRACT	= 69,
    G_UNMERGE_VALUES	= 70,
    G_INSERT	= 71,
    G_MERGE_VALUES	= 72,
    G_BUILD_VECTOR	= 73,
    G_BUILD_VECTOR_TRUNC	= 74,
    G_CONCAT_VECTORS	= 75,
    G_PTRTOINT	= 76,
    G_INTTOPTR	= 77,
    G_BITCAST	= 78,
    G_FREEZE	= 79,
    G_CONSTANT_FOLD_BARRIER	= 80,
    G_INTRINSIC_FPTRUNC_ROUND	= 81,
    G_INTRINSIC_TRUNC	= 82,
    G_INTRINSIC_ROUND	= 83,
    G_INTRINSIC_LRINT	= 84,
    G_INTRINSIC_LLRINT	= 85,
    G_INTRINSIC_ROUNDEVEN	= 86,
    G_READCYCLECOUNTER	= 87,
    G_READSTEADYCOUNTER	= 88,
    G_LOAD	= 89,
    G_SEXTLOAD	= 90,
    G_ZEXTLOAD	= 91,
    G_INDEXED_LOAD	= 92,
    G_INDEXED_SEXTLOAD	= 93,
    G_INDEXED_ZEXTLOAD	= 94,
    G_STORE	= 95,
    G_INDEXED_STORE	= 96,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 97,
    G_ATOMIC_CMPXCHG	= 98,
    G_ATOMICRMW_XCHG	= 99,
    G_ATOMICRMW_ADD	= 100,
    G_ATOMICRMW_SUB	= 101,
    G_ATOMICRMW_AND	= 102,
    G_ATOMICRMW_NAND	= 103,
    G_ATOMICRMW_OR	= 104,
    G_ATOMICRMW_XOR	= 105,
    G_ATOMICRMW_MAX	= 106,
    G_ATOMICRMW_MIN	= 107,
    G_ATOMICRMW_UMAX	= 108,
    G_ATOMICRMW_UMIN	= 109,
    G_ATOMICRMW_FADD	= 110,
    G_ATOMICRMW_FSUB	= 111,
    G_ATOMICRMW_FMAX	= 112,
    G_ATOMICRMW_FMIN	= 113,
    G_ATOMICRMW_UINC_WRAP	= 114,
    G_ATOMICRMW_UDEC_WRAP	= 115,
    G_FENCE	= 116,
    G_PREFETCH	= 117,
    G_BRCOND	= 118,
    G_BRINDIRECT	= 119,
    G_INVOKE_REGION_START	= 120,
    G_INTRINSIC	= 121,
    G_INTRINSIC_W_SIDE_EFFECTS	= 122,
    G_INTRINSIC_CONVERGENT	= 123,
    G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS	= 124,
    G_ANYEXT	= 125,
    G_TRUNC	= 126,
    G_CONSTANT	= 127,
    G_FCONSTANT	= 128,
    G_VASTART	= 129,
    G_VAARG	= 130,
    G_SEXT	= 131,
    G_SEXT_INREG	= 132,
    G_ZEXT	= 133,
    G_SHL	= 134,
    G_LSHR	= 135,
    G_ASHR	= 136,
    G_FSHL	= 137,
    G_FSHR	= 138,
    G_ROTR	= 139,
    G_ROTL	= 140,
    G_ICMP	= 141,
    G_FCMP	= 142,
    G_SCMP	= 143,
    G_UCMP	= 144,
    G_SELECT	= 145,
    G_UADDO	= 146,
    G_UADDE	= 147,
    G_USUBO	= 148,
    G_USUBE	= 149,
    G_SADDO	= 150,
    G_SADDE	= 151,
    G_SSUBO	= 152,
    G_SSUBE	= 153,
    G_UMULO	= 154,
    G_SMULO	= 155,
    G_UMULH	= 156,
    G_SMULH	= 157,
    G_UADDSAT	= 158,
    G_SADDSAT	= 159,
    G_USUBSAT	= 160,
    G_SSUBSAT	= 161,
    G_USHLSAT	= 162,
    G_SSHLSAT	= 163,
    G_SMULFIX	= 164,
    G_UMULFIX	= 165,
    G_SMULFIXSAT	= 166,
    G_UMULFIXSAT	= 167,
    G_SDIVFIX	= 168,
    G_UDIVFIX	= 169,
    G_SDIVFIXSAT	= 170,
    G_UDIVFIXSAT	= 171,
    G_FADD	= 172,
    G_FSUB	= 173,
    G_FMUL	= 174,
    G_FMA	= 175,
    G_FMAD	= 176,
    G_FDIV	= 177,
    G_FREM	= 178,
    G_FPOW	= 179,
    G_FPOWI	= 180,
    G_FEXP	= 181,
    G_FEXP2	= 182,
    G_FEXP10	= 183,
    G_FLOG	= 184,
    G_FLOG2	= 185,
    G_FLOG10	= 186,
    G_FLDEXP	= 187,
    G_FFREXP	= 188,
    G_FNEG	= 189,
    G_FPEXT	= 190,
    G_FPTRUNC	= 191,
    G_FPTOSI	= 192,
    G_FPTOUI	= 193,
    G_SITOFP	= 194,
    G_UITOFP	= 195,
    G_FABS	= 196,
    G_FCOPYSIGN	= 197,
    G_IS_FPCLASS	= 198,
    G_FCANONICALIZE	= 199,
    G_FMINNUM	= 200,
    G_FMAXNUM	= 201,
    G_FMINNUM_IEEE	= 202,
    G_FMAXNUM_IEEE	= 203,
    G_FMINIMUM	= 204,
    G_FMAXIMUM	= 205,
    G_GET_FPENV	= 206,
    G_SET_FPENV	= 207,
    G_RESET_FPENV	= 208,
    G_GET_FPMODE	= 209,
    G_SET_FPMODE	= 210,
    G_RESET_FPMODE	= 211,
    G_PTR_ADD	= 212,
    G_PTRMASK	= 213,
    G_SMIN	= 214,
    G_SMAX	= 215,
    G_UMIN	= 216,
    G_UMAX	= 217,
    G_ABS	= 218,
    G_LROUND	= 219,
    G_LLROUND	= 220,
    G_BR	= 221,
    G_BRJT	= 222,
    G_VSCALE	= 223,
    G_INSERT_SUBVECTOR	= 224,
    G_EXTRACT_SUBVECTOR	= 225,
    G_INSERT_VECTOR_ELT	= 226,
    G_EXTRACT_VECTOR_ELT	= 227,
    G_SHUFFLE_VECTOR	= 228,
    G_SPLAT_VECTOR	= 229,
    G_VECTOR_COMPRESS	= 230,
    G_CTTZ	= 231,
    G_CTTZ_ZERO_UNDEF	= 232,
    G_CTLZ	= 233,
    G_CTLZ_ZERO_UNDEF	= 234,
    G_CTPOP	= 235,
    G_BSWAP	= 236,
    G_BITREVERSE	= 237,
    G_FCEIL	= 238,
    G_FCOS	= 239,
    G_FSIN	= 240,
    G_FTAN	= 241,
    G_FACOS	= 242,
    G_FASIN	= 243,
    G_FATAN	= 244,
    G_FCOSH	= 245,
    G_FSINH	= 246,
    G_FTANH	= 247,
    G_FSQRT	= 248,
    G_FFLOOR	= 249,
    G_FRINT	= 250,
    G_FNEARBYINT	= 251,
    G_ADDRSPACE_CAST	= 252,
    G_BLOCK_ADDR	= 253,
    G_JUMP_TABLE	= 254,
    G_DYN_STACKALLOC	= 255,
    G_STACKSAVE	= 256,
    G_STACKRESTORE	= 257,
    G_STRICT_FADD	= 258,
    G_STRICT_FSUB	= 259,
    G_STRICT_FMUL	= 260,
    G_STRICT_FDIV	= 261,
    G_STRICT_FREM	= 262,
    G_STRICT_FMA	= 263,
    G_STRICT_FSQRT	= 264,
    G_STRICT_FLDEXP	= 265,
    G_READ_REGISTER	= 266,
    G_WRITE_REGISTER	= 267,
    G_MEMCPY	= 268,
    G_MEMCPY_INLINE	= 269,
    G_MEMMOVE	= 270,
    G_MEMSET	= 271,
    G_BZERO	= 272,
    G_TRAP	= 273,
    G_DEBUGTRAP	= 274,
    G_UBSANTRAP	= 275,
    G_VECREDUCE_SEQ_FADD	= 276,
    G_VECREDUCE_SEQ_FMUL	= 277,
    G_VECREDUCE_FADD	= 278,
    G_VECREDUCE_FMUL	= 279,
    G_VECREDUCE_FMAX	= 280,
    G_VECREDUCE_FMIN	= 281,
    G_VECREDUCE_FMAXIMUM	= 282,
    G_VECREDUCE_FMINIMUM	= 283,
    G_VECREDUCE_ADD	= 284,
    G_VECREDUCE_MUL	= 285,
    G_VECREDUCE_AND	= 286,
    G_VECREDUCE_OR	= 287,
    G_VECREDUCE_XOR	= 288,
    G_VECREDUCE_SMAX	= 289,
    G_VECREDUCE_SMIN	= 290,
    G_VECREDUCE_UMAX	= 291,
    G_VECREDUCE_UMIN	= 292,
    G_SBFX	= 293,
    G_UBFX	= 294,
    PseudoLI	= 295,
    PseudoRET	= 296,
    ADDI	= 297,
    FMUL	= 298,
    JALR	= 299,
    INSTRUCTION_LIST_END = 300
  };

} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Rymo {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    WriteALU	= 1,
    WriteFALU	= 2,
    SCHED_LIST_END = 3
  };
} // end namespace Sched
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#if defined(GET_INSTRINFO_MC_DESC) || defined(GET_INSTRINFO_CTOR_DTOR)
namespace llvm {

struct RymoInstrTable {
  MCInstrDesc Insts[300];
  static_assert(alignof(MCInstrDesc) >= alignof(MCOperandInfo), "Unwanted padding between Insts and OperandInfo");
  MCOperandInfo OperandInfo[157];
  static_assert(alignof(MCOperandInfo) >= alignof(MCPhysReg), "Unwanted padding between OperandInfo and ImplicitOps");
  MCPhysReg ImplicitOps[1];
};

} // end namespace llvm
#endif // defined(GET_INSTRINFO_MC_DESC) || defined(GET_INSTRINFO_CTOR_DTOR)

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static_assert(sizeof(MCOperandInfo) % sizeof(MCPhysReg) == 0);
static constexpr unsigned RymoImpOpBase = sizeof RymoInstrTable::OperandInfo / (sizeof(MCPhysReg));

extern const RymoInstrTable RymoDescs = {
  {
    { 299,	3,	1,	4,	1,	0,	0,	RymoImpOpBase + 0,	154,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #299 = JALR
    { 298,	3,	1,	4,	2,	0,	0,	RymoImpOpBase + 0,	154,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #298 = FMUL
    { 297,	3,	1,	4,	1,	0,	0,	RymoImpOpBase + 0,	154,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #297 = ADDI
    { 296,	0,	0,	4,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #296 = PseudoRET
    { 295,	2,	1,	4,	0,	0,	0,	RymoImpOpBase + 0,	152,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #295 = PseudoLI
    { 294,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	148,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #294 = G_UBFX
    { 293,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	148,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #293 = G_SBFX
    { 292,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #292 = G_VECREDUCE_UMIN
    { 291,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #291 = G_VECREDUCE_UMAX
    { 290,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #290 = G_VECREDUCE_SMIN
    { 289,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #289 = G_VECREDUCE_SMAX
    { 288,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #288 = G_VECREDUCE_XOR
    { 287,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #287 = G_VECREDUCE_OR
    { 286,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #286 = G_VECREDUCE_AND
    { 285,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #285 = G_VECREDUCE_MUL
    { 284,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #284 = G_VECREDUCE_ADD
    { 283,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #283 = G_VECREDUCE_FMINIMUM
    { 282,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #282 = G_VECREDUCE_FMAXIMUM
    { 281,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #281 = G_VECREDUCE_FMIN
    { 280,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #280 = G_VECREDUCE_FMAX
    { 279,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #279 = G_VECREDUCE_FMUL
    { 278,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #278 = G_VECREDUCE_FADD
    { 277,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	131,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #277 = G_VECREDUCE_SEQ_FMUL
    { 276,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	131,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #276 = G_VECREDUCE_SEQ_FADD
    { 275,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #275 = G_UBSANTRAP
    { 274,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #274 = G_DEBUGTRAP
    { 273,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #273 = G_TRAP
    { 272,	3,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	58,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #272 = G_BZERO
    { 271,	4,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	144,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #271 = G_MEMSET
    { 270,	4,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	144,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #270 = G_MEMMOVE
    { 269,	3,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	131,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #269 = G_MEMCPY_INLINE
    { 268,	4,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	144,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #268 = G_MEMCPY
    { 267,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	142,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #267 = G_WRITE_REGISTER
    { 266,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #266 = G_READ_REGISTER
    { 265,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #265 = G_STRICT_FLDEXP
    { 264,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #264 = G_STRICT_FSQRT
    { 263,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	46,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #263 = G_STRICT_FMA
    { 262,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #262 = G_STRICT_FREM
    { 261,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #261 = G_STRICT_FDIV
    { 260,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #260 = G_STRICT_FMUL
    { 259,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #259 = G_STRICT_FSUB
    { 258,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #258 = G_STRICT_FADD
    { 257,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #257 = G_STACKRESTORE
    { 256,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #256 = G_STACKSAVE
    { 255,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	69,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #255 = G_DYN_STACKALLOC
    { 254,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #254 = G_JUMP_TABLE
    { 253,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #253 = G_BLOCK_ADDR
    { 252,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #252 = G_ADDRSPACE_CAST
    { 251,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #251 = G_FNEARBYINT
    { 250,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #250 = G_FRINT
    { 249,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #249 = G_FFLOOR
    { 248,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #248 = G_FSQRT
    { 247,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #247 = G_FTANH
    { 246,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #246 = G_FSINH
    { 245,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #245 = G_FCOSH
    { 244,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #244 = G_FATAN
    { 243,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #243 = G_FASIN
    { 242,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #242 = G_FACOS
    { 241,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #241 = G_FTAN
    { 240,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #240 = G_FSIN
    { 239,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #239 = G_FCOS
    { 238,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #238 = G_FCEIL
    { 237,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #237 = G_BITREVERSE
    { 236,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #236 = G_BSWAP
    { 235,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #235 = G_CTPOP
    { 234,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #234 = G_CTLZ_ZERO_UNDEF
    { 233,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #233 = G_CTLZ
    { 232,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #232 = G_CTTZ_ZERO_UNDEF
    { 231,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #231 = G_CTTZ
    { 230,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	138,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #230 = G_VECTOR_COMPRESS
    { 229,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #229 = G_SPLAT_VECTOR
    { 228,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	134,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #228 = G_SHUFFLE_VECTOR
    { 227,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	131,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #227 = G_EXTRACT_VECTOR_ELT
    { 226,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	127,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #226 = G_INSERT_VECTOR_ELT
    { 225,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	40,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #225 = G_EXTRACT_SUBVECTOR
    { 224,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	63,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #224 = G_INSERT_SUBVECTOR
    { 223,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #223 = G_VSCALE
    { 222,	3,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	124,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #222 = G_BRJT
    { 221,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #221 = G_BR
    { 220,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #220 = G_LLROUND
    { 219,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #219 = G_LROUND
    { 218,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #218 = G_ABS
    { 217,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #217 = G_UMAX
    { 216,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #216 = G_UMIN
    { 215,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #215 = G_SMAX
    { 214,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #214 = G_SMIN
    { 213,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #213 = G_PTRMASK
    { 212,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #212 = G_PTR_ADD
    { 211,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #211 = G_RESET_FPMODE
    { 210,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #210 = G_SET_FPMODE
    { 209,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #209 = G_GET_FPMODE
    { 208,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #208 = G_RESET_FPENV
    { 207,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #207 = G_SET_FPENV
    { 206,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #206 = G_GET_FPENV
    { 205,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #205 = G_FMAXIMUM
    { 204,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #204 = G_FMINIMUM
    { 203,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #203 = G_FMAXNUM_IEEE
    { 202,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #202 = G_FMINNUM_IEEE
    { 201,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #201 = G_FMAXNUM
    { 200,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #200 = G_FMINNUM
    { 199,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #199 = G_FCANONICALIZE
    { 198,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	98,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #198 = G_IS_FPCLASS
    { 197,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #197 = G_FCOPYSIGN
    { 196,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #196 = G_FABS
    { 195,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #195 = G_UITOFP
    { 194,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #194 = G_SITOFP
    { 193,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #193 = G_FPTOUI
    { 192,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #192 = G_FPTOSI
    { 191,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #191 = G_FPTRUNC
    { 190,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #190 = G_FPEXT
    { 189,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #189 = G_FNEG
    { 188,	3,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #188 = G_FFREXP
    { 187,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #187 = G_FLDEXP
    { 186,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #186 = G_FLOG10
    { 185,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #185 = G_FLOG2
    { 184,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #184 = G_FLOG
    { 183,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #183 = G_FEXP10
    { 182,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #182 = G_FEXP2
    { 181,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #181 = G_FEXP
    { 180,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #180 = G_FPOWI
    { 179,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #179 = G_FPOW
    { 178,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #178 = G_FREM
    { 177,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #177 = G_FDIV
    { 176,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	46,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #176 = G_FMAD
    { 175,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	46,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #175 = G_FMA
    { 174,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #174 = G_FMUL
    { 173,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #173 = G_FSUB
    { 172,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #172 = G_FADD
    { 171,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #171 = G_UDIVFIXSAT
    { 170,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #170 = G_SDIVFIXSAT
    { 169,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #169 = G_UDIVFIX
    { 168,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #168 = G_SDIVFIX
    { 167,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #167 = G_UMULFIXSAT
    { 166,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #166 = G_SMULFIXSAT
    { 165,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #165 = G_UMULFIX
    { 164,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	120,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #164 = G_SMULFIX
    { 163,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #163 = G_SSHLSAT
    { 162,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #162 = G_USHLSAT
    { 161,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #161 = G_SSUBSAT
    { 160,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #160 = G_USUBSAT
    { 159,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #159 = G_SADDSAT
    { 158,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #158 = G_UADDSAT
    { 157,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #157 = G_SMULH
    { 156,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #156 = G_UMULH
    { 155,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #155 = G_SMULO
    { 154,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #154 = G_UMULO
    { 153,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	115,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #153 = G_SSUBE
    { 152,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #152 = G_SSUBO
    { 151,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	115,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #151 = G_SADDE
    { 150,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #150 = G_SADDO
    { 149,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	115,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #149 = G_USUBE
    { 148,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #148 = G_USUBO
    { 147,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	115,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #147 = G_UADDE
    { 146,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #146 = G_UADDO
    { 145,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #145 = G_SELECT
    { 144,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	112,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #144 = G_UCMP
    { 143,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	112,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #143 = G_SCMP
    { 142,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	108,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #142 = G_FCMP
    { 141,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	108,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #141 = G_ICMP
    { 140,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #140 = G_ROTL
    { 139,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #139 = G_ROTR
    { 138,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	104,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #138 = G_FSHR
    { 137,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	104,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #137 = G_FSHL
    { 136,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #136 = G_ASHR
    { 135,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #135 = G_LSHR
    { 134,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	101,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #134 = G_SHL
    { 133,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #133 = G_ZEXT
    { 132,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	40,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #132 = G_SEXT_INREG
    { 131,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #131 = G_SEXT
    { 130,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	98,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #130 = G_VAARG
    { 129,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #129 = G_VASTART
    { 128,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #128 = G_FCONSTANT
    { 127,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #127 = G_CONSTANT
    { 126,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #126 = G_TRUNC
    { 125,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #125 = G_ANYEXT
    { 124,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #124 = G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS
    { 123,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #123 = G_INTRINSIC_CONVERGENT
    { 122,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #122 = G_INTRINSIC_W_SIDE_EFFECTS
    { 121,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #121 = G_INTRINSIC
    { 120,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #120 = G_INVOKE_REGION_START
    { 119,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #119 = G_BRINDIRECT
    { 118,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #118 = G_BRCOND
    { 117,	4,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	94,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #117 = G_PREFETCH
    { 116,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	21,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #116 = G_FENCE
    { 115,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #115 = G_ATOMICRMW_UDEC_WRAP
    { 114,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #114 = G_ATOMICRMW_UINC_WRAP
    { 113,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #113 = G_ATOMICRMW_FMIN
    { 112,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #112 = G_ATOMICRMW_FMAX
    { 111,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #111 = G_ATOMICRMW_FSUB
    { 110,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #110 = G_ATOMICRMW_FADD
    { 109,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #109 = G_ATOMICRMW_UMIN
    { 108,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #108 = G_ATOMICRMW_UMAX
    { 107,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #107 = G_ATOMICRMW_MIN
    { 106,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #106 = G_ATOMICRMW_MAX
    { 105,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #105 = G_ATOMICRMW_XOR
    { 104,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #104 = G_ATOMICRMW_OR
    { 103,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #103 = G_ATOMICRMW_NAND
    { 102,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #102 = G_ATOMICRMW_AND
    { 101,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #101 = G_ATOMICRMW_SUB
    { 100,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #100 = G_ATOMICRMW_ADD
    { 99,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	91,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #99 = G_ATOMICRMW_XCHG
    { 98,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	87,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #98 = G_ATOMIC_CMPXCHG
    { 97,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	82,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #97 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
    { 96,	5,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	77,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #96 = G_INDEXED_STORE
    { 95,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #95 = G_STORE
    { 94,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	72,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #94 = G_INDEXED_ZEXTLOAD
    { 93,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	72,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #93 = G_INDEXED_SEXTLOAD
    { 92,	5,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	72,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #92 = G_INDEXED_LOAD
    { 91,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #91 = G_ZEXTLOAD
    { 90,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #90 = G_SEXTLOAD
    { 89,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #89 = G_LOAD
    { 88,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #88 = G_READSTEADYCOUNTER
    { 87,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #87 = G_READCYCLECOUNTER
    { 86,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #86 = G_INTRINSIC_ROUNDEVEN
    { 85,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #85 = G_INTRINSIC_LLRINT
    { 84,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #84 = G_INTRINSIC_LRINT
    { 83,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #83 = G_INTRINSIC_ROUND
    { 82,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #82 = G_INTRINSIC_TRUNC
    { 81,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	69,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #81 = G_INTRINSIC_FPTRUNC_ROUND
    { 80,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #80 = G_CONSTANT_FOLD_BARRIER
    { 79,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	67,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #79 = G_FREEZE
    { 78,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #78 = G_BITCAST
    { 77,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #77 = G_INTTOPTR
    { 76,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #76 = G_PTRTOINT
    { 75,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #75 = G_CONCAT_VECTORS
    { 74,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #74 = G_BUILD_VECTOR_TRUNC
    { 73,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #73 = G_BUILD_VECTOR
    { 72,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #72 = G_MERGE_VALUES
    { 71,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	63,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #71 = G_INSERT
    { 70,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	61,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #70 = G_UNMERGE_VALUES
    { 69,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	58,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #69 = G_EXTRACT
    { 68,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #68 = G_CONSTANT_POOL
    { 67,	5,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	53,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #67 = G_PTRAUTH_GLOBAL_VALUE
    { 66,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #66 = G_GLOBAL_VALUE
    { 65,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	51,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #65 = G_FRAME_INDEX
    { 64,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #64 = G_PHI
    { 63,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	50,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #63 = G_IMPLICIT_DEF
    { 62,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #62 = G_XOR
    { 61,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #61 = G_OR
    { 60,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #60 = G_AND
    { 59,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	46,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #59 = G_UDIVREM
    { 58,	4,	2,	0,	0,	0,	0,	RymoImpOpBase + 0,	46,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #58 = G_SDIVREM
    { 57,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #57 = G_UREM
    { 56,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #56 = G_SREM
    { 55,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #55 = G_UDIV
    { 54,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #54 = G_SDIV
    { 53,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #53 = G_MUL
    { 52,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #52 = G_SUB
    { 51,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	43,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #51 = G_ADD
    { 50,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	40,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #50 = G_ASSERT_ALIGN
    { 49,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	40,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #49 = G_ASSERT_ZEXT
    { 48,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	40,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #48 = G_ASSERT_SEXT
    { 47,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #47 = CONVERGENCECTRL_GLUE
    { 46,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	13,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #46 = CONVERGENCECTRL_LOOP
    { 45,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #45 = CONVERGENCECTRL_ANCHOR
    { 44,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL },  // Inst #44 = CONVERGENCECTRL_ENTRY
    { 43,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #43 = JUMP_TABLE_DEBUG_INFO
    { 42,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #42 = MEMBARRIER
    { 41,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #41 = ICALL_BRANCH_FUNNEL
    { 40,	3,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	37,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
    { 39,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	35,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #39 = PATCHABLE_EVENT_CALL
    { 38,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #38 = PATCHABLE_TAIL_CALL
    { 37,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
    { 36,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #36 = PATCHABLE_RET
    { 35,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
    { 34,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #34 = PATCHABLE_OP
    { 33,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #33 = FAULTING_OP
    { 32,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	33,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #32 = LOCAL_ESCAPE
    { 31,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #31 = STATEPOINT
    { 30,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	30,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #30 = PREALLOCATED_ARG
    { 29,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #29 = PREALLOCATED_SETUP
    { 28,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	29,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #28 = LOAD_STACK_GUARD
    { 27,	6,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	23,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #27 = PATCHPOINT
    { 26,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #26 = FENTRY_CALL
    { 25,	2,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	21,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #25 = STACKMAP
    { 24,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	19,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #24 = ARITH_FENCE
    { 23,	4,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	15,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #23 = PSEUDO_PROBE
    { 22,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #22 = LIFETIME_END
    { 21,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #21 = LIFETIME_START
    { 20,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #20 = BUNDLE
    { 19,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	13,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #19 = COPY
    { 18,	2,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	13,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #18 = REG_SEQUENCE
    { 17,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #17 = DBG_LABEL
    { 16,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #16 = DBG_PHI
    { 15,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #15 = DBG_INSTR_REF
    { 14,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #14 = DBG_VALUE_LIST
    { 13,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #13 = DBG_VALUE
    { 12,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	2,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #12 = COPY_TO_REGCLASS
    { 11,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	9,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #11 = SUBREG_TO_REG
    { 10,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #10 = IMPLICIT_DEF
    { 9,	4,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	5,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #9 = INSERT_SUBREG
    { 8,	3,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	2,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #8 = EXTRACT_SUBREG
    { 7,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #7 = KILL
    { 6,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #6 = ANNOTATION_LABEL
    { 5,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #5 = GC_LABEL
    { 4,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #4 = EH_LABEL
    { 3,	1,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #3 = CFI_INSTRUCTION
    { 2,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #2 = INLINEASM_BR
    { 1,	0,	0,	0,	0,	0,	0,	RymoImpOpBase + 0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #1 = INLINEASM
    { 0,	1,	1,	0,	0,	0,	0,	RymoImpOpBase + 0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL },  // Inst #0 = PHI
  }, {
    /* 0 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 1 */
    /* 1 */ { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 2 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 5 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 9 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 13 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 15 */ { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 19 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) },
    /* 21 */ { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 23 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 29 */ { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 },
    /* 30 */ { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 33 */ { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 35 */ { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 37 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 40 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 },
    /* 43 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 46 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 50 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 51 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 53 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 58 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 },
    /* 61 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 63 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 },
    /* 67 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 69 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 72 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 77 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 82 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 87 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 91 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 94 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 98 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 101 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 104 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 108 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 112 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 115 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 120 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 },
    /* 124 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 127 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 },
    /* 131 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 },
    /* 134 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 },
    /* 138 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 142 */ { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 },
    /* 144 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 },
    /* 148 */ { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 },
    /* 152 */ { Rymo::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
    /* 154 */ { Rymo::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Rymo::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 },
  }, {
    /* 0 */
  }
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RymoInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "G_FEXP10\0"
  /* 18 */ "G_FLOG2\0"
  /* 26 */ "G_FEXP2\0"
  /* 34 */ "G_FMA\0"
  /* 40 */ "G_STRICT_FMA\0"
  /* 53 */ "G_FSUB\0"
  /* 60 */ "G_STRICT_FSUB\0"
  /* 74 */ "G_ATOMICRMW_FSUB\0"
  /* 91 */ "G_SUB\0"
  /* 97 */ "G_ATOMICRMW_SUB\0"
  /* 113 */ "G_INTRINSIC\0"
  /* 125 */ "G_FPTRUNC\0"
  /* 135 */ "G_INTRINSIC_TRUNC\0"
  /* 153 */ "G_TRUNC\0"
  /* 161 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 182 */ "G_DYN_STACKALLOC\0"
  /* 199 */ "G_FMAD\0"
  /* 206 */ "G_INDEXED_SEXTLOAD\0"
  /* 225 */ "G_SEXTLOAD\0"
  /* 236 */ "G_INDEXED_ZEXTLOAD\0"
  /* 255 */ "G_ZEXTLOAD\0"
  /* 266 */ "G_INDEXED_LOAD\0"
  /* 281 */ "G_LOAD\0"
  /* 288 */ "G_VECREDUCE_FADD\0"
  /* 305 */ "G_FADD\0"
  /* 312 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 333 */ "G_STRICT_FADD\0"
  /* 347 */ "G_ATOMICRMW_FADD\0"
  /* 364 */ "G_VECREDUCE_ADD\0"
  /* 380 */ "G_ADD\0"
  /* 386 */ "G_PTR_ADD\0"
  /* 396 */ "G_ATOMICRMW_ADD\0"
  /* 412 */ "G_ATOMICRMW_NAND\0"
  /* 429 */ "G_VECREDUCE_AND\0"
  /* 445 */ "G_AND\0"
  /* 451 */ "G_ATOMICRMW_AND\0"
  /* 467 */ "LIFETIME_END\0"
  /* 480 */ "G_BRCOND\0"
  /* 489 */ "G_LLROUND\0"
  /* 499 */ "G_LROUND\0"
  /* 508 */ "G_INTRINSIC_ROUND\0"
  /* 526 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 552 */ "LOAD_STACK_GUARD\0"
  /* 569 */ "PSEUDO_PROBE\0"
  /* 582 */ "G_SSUBE\0"
  /* 590 */ "G_USUBE\0"
  /* 598 */ "G_FENCE\0"
  /* 606 */ "ARITH_FENCE\0"
  /* 618 */ "REG_SEQUENCE\0"
  /* 631 */ "G_SADDE\0"
  /* 639 */ "G_UADDE\0"
  /* 647 */ "G_GET_FPMODE\0"
  /* 660 */ "G_RESET_FPMODE\0"
  /* 675 */ "G_SET_FPMODE\0"
  /* 688 */ "G_FMINNUM_IEEE\0"
  /* 703 */ "G_FMAXNUM_IEEE\0"
  /* 718 */ "G_VSCALE\0"
  /* 727 */ "G_JUMP_TABLE\0"
  /* 740 */ "BUNDLE\0"
  /* 747 */ "G_MEMCPY_INLINE\0"
  /* 763 */ "LOCAL_ESCAPE\0"
  /* 776 */ "G_STACKRESTORE\0"
  /* 791 */ "G_INDEXED_STORE\0"
  /* 807 */ "G_STORE\0"
  /* 815 */ "G_BITREVERSE\0"
  /* 828 */ "DBG_VALUE\0"
  /* 838 */ "G_GLOBAL_VALUE\0"
  /* 853 */ "G_PTRAUTH_GLOBAL_VALUE\0"
  /* 876 */ "CONVERGENCECTRL_GLUE\0"
  /* 897 */ "G_STACKSAVE\0"
  /* 909 */ "G_MEMMOVE\0"
  /* 919 */ "G_FREEZE\0"
  /* 928 */ "G_FCANONICALIZE\0"
  /* 944 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 962 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 980 */ "G_IMPLICIT_DEF\0"
  /* 995 */ "DBG_INSTR_REF\0"
  /* 1009 */ "G_FNEG\0"
  /* 1016 */ "EXTRACT_SUBREG\0"
  /* 1031 */ "INSERT_SUBREG\0"
  /* 1045 */ "G_SEXT_INREG\0"
  /* 1058 */ "SUBREG_TO_REG\0"
  /* 1072 */ "G_ATOMIC_CMPXCHG\0"
  /* 1089 */ "G_ATOMICRMW_XCHG\0"
  /* 1106 */ "G_FLOG\0"
  /* 1113 */ "G_VAARG\0"
  /* 1121 */ "PREALLOCATED_ARG\0"
  /* 1138 */ "G_PREFETCH\0"
  /* 1149 */ "G_SMULH\0"
  /* 1157 */ "G_UMULH\0"
  /* 1165 */ "G_FTANH\0"
  /* 1173 */ "G_FSINH\0"
  /* 1181 */ "G_FCOSH\0"
  /* 1189 */ "ADDI\0"
  /* 1194 */ "DBG_PHI\0"
  /* 1202 */ "PseudoLI\0"
  /* 1211 */ "G_FPTOSI\0"
  /* 1220 */ "G_FPTOUI\0"
  /* 1229 */ "G_FPOWI\0"
  /* 1237 */ "G_PTRMASK\0"
  /* 1247 */ "GC_LABEL\0"
  /* 1256 */ "DBG_LABEL\0"
  /* 1266 */ "EH_LABEL\0"
  /* 1275 */ "ANNOTATION_LABEL\0"
  /* 1292 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1312 */ "G_FSHL\0"
  /* 1319 */ "G_SHL\0"
  /* 1325 */ "G_FCEIL\0"
  /* 1333 */ "PATCHABLE_TAIL_CALL\0"
  /* 1353 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1380 */ "PATCHABLE_EVENT_CALL\0"
  /* 1401 */ "FENTRY_CALL\0"
  /* 1413 */ "KILL\0"
  /* 1418 */ "G_CONSTANT_POOL\0"
  /* 1434 */ "G_ROTL\0"
  /* 1441 */ "G_VECREDUCE_FMUL\0"
  /* 1458 */ "G_FMUL\0"
  /* 1465 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1486 */ "G_STRICT_FMUL\0"
  /* 1500 */ "G_VECREDUCE_MUL\0"
  /* 1516 */ "G_MUL\0"
  /* 1522 */ "G_FREM\0"
  /* 1529 */ "G_STRICT_FREM\0"
  /* 1543 */ "G_SREM\0"
  /* 1550 */ "G_UREM\0"
  /* 1557 */ "G_SDIVREM\0"
  /* 1567 */ "G_UDIVREM\0"
  /* 1577 */ "INLINEASM\0"
  /* 1587 */ "G_VECREDUCE_FMINIMUM\0"
  /* 1608 */ "G_FMINIMUM\0"
  /* 1619 */ "G_VECREDUCE_FMAXIMUM\0"
  /* 1640 */ "G_FMAXIMUM\0"
  /* 1651 */ "G_FMINNUM\0"
  /* 1661 */ "G_FMAXNUM\0"
  /* 1671 */ "G_FATAN\0"
  /* 1679 */ "G_FTAN\0"
  /* 1686 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 1708 */ "G_ASSERT_ALIGN\0"
  /* 1723 */ "G_FCOPYSIGN\0"
  /* 1735 */ "G_VECREDUCE_FMIN\0"
  /* 1752 */ "G_ATOMICRMW_FMIN\0"
  /* 1769 */ "G_VECREDUCE_SMIN\0"
  /* 1786 */ "G_SMIN\0"
  /* 1793 */ "G_VECREDUCE_UMIN\0"
  /* 1810 */ "G_UMIN\0"
  /* 1817 */ "G_ATOMICRMW_UMIN\0"
  /* 1834 */ "G_ATOMICRMW_MIN\0"
  /* 1850 */ "G_FASIN\0"
  /* 1858 */ "G_FSIN\0"
  /* 1865 */ "CFI_INSTRUCTION\0"
  /* 1881 */ "G_SSUBO\0"
  /* 1889 */ "G_USUBO\0"
  /* 1897 */ "G_SADDO\0"
  /* 1905 */ "G_UADDO\0"
  /* 1913 */ "JUMP_TABLE_DEBUG_INFO\0"
  /* 1935 */ "G_SMULO\0"
  /* 1943 */ "G_UMULO\0"
  /* 1951 */ "G_BZERO\0"
  /* 1959 */ "STACKMAP\0"
  /* 1968 */ "G_DEBUGTRAP\0"
  /* 1980 */ "G_UBSANTRAP\0"
  /* 1992 */ "G_TRAP\0"
  /* 1999 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 2021 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 2043 */ "G_BSWAP\0"
  /* 2051 */ "G_SITOFP\0"
  /* 2060 */ "G_UITOFP\0"
  /* 2069 */ "G_FCMP\0"
  /* 2076 */ "G_ICMP\0"
  /* 2083 */ "G_SCMP\0"
  /* 2090 */ "G_UCMP\0"
  /* 2097 */ "CONVERGENCECTRL_LOOP\0"
  /* 2118 */ "G_CTPOP\0"
  /* 2126 */ "PATCHABLE_OP\0"
  /* 2139 */ "FAULTING_OP\0"
  /* 2151 */ "PREALLOCATED_SETUP\0"
  /* 2170 */ "G_FLDEXP\0"
  /* 2179 */ "G_STRICT_FLDEXP\0"
  /* 2195 */ "G_FEXP\0"
  /* 2202 */ "G_FFREXP\0"
  /* 2211 */ "G_BR\0"
  /* 2216 */ "INLINEASM_BR\0"
  /* 2229 */ "G_BLOCK_ADDR\0"
  /* 2242 */ "MEMBARRIER\0"
  /* 2253 */ "G_CONSTANT_FOLD_BARRIER\0"
  /* 2277 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2302 */ "G_READCYCLECOUNTER\0"
  /* 2321 */ "G_READSTEADYCOUNTER\0"
  /* 2341 */ "G_READ_REGISTER\0"
  /* 2357 */ "G_WRITE_REGISTER\0"
  /* 2374 */ "G_ASHR\0"
  /* 2381 */ "G_FSHR\0"
  /* 2388 */ "G_LSHR\0"
  /* 2395 */ "JALR\0"
  /* 2400 */ "CONVERGENCECTRL_ANCHOR\0"
  /* 2423 */ "G_FFLOOR\0"
  /* 2432 */ "G_EXTRACT_SUBVECTOR\0"
  /* 2452 */ "G_INSERT_SUBVECTOR\0"
  /* 2471 */ "G_BUILD_VECTOR\0"
  /* 2486 */ "G_SHUFFLE_VECTOR\0"
  /* 2503 */ "G_SPLAT_VECTOR\0"
  /* 2518 */ "G_VECREDUCE_XOR\0"
  /* 2534 */ "G_XOR\0"
  /* 2540 */ "G_ATOMICRMW_XOR\0"
  /* 2556 */ "G_VECREDUCE_OR\0"
  /* 2571 */ "G_OR\0"
  /* 2576 */ "G_ATOMICRMW_OR\0"
  /* 2591 */ "G_ROTR\0"
  /* 2598 */ "G_INTTOPTR\0"
  /* 2609 */ "G_FABS\0"
  /* 2616 */ "G_ABS\0"
  /* 2622 */ "G_UNMERGE_VALUES\0"
  /* 2639 */ "G_MERGE_VALUES\0"
  /* 2654 */ "G_FACOS\0"
  /* 2662 */ "G_FCOS\0"
  /* 2669 */ "G_CONCAT_VECTORS\0"
  /* 2686 */ "COPY_TO_REGCLASS\0"
  /* 2703 */ "G_IS_FPCLASS\0"
  /* 2716 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2746 */ "G_VECTOR_COMPRESS\0"
  /* 2764 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2791 */ "G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS\0"
  /* 2829 */ "G_SSUBSAT\0"
  /* 2839 */ "G_USUBSAT\0"
  /* 2849 */ "G_SADDSAT\0"
  /* 2859 */ "G_UADDSAT\0"
  /* 2869 */ "G_SSHLSAT\0"
  /* 2879 */ "G_USHLSAT\0"
  /* 2889 */ "G_SMULFIXSAT\0"
  /* 2902 */ "G_UMULFIXSAT\0"
  /* 2915 */ "G_SDIVFIXSAT\0"
  /* 2928 */ "G_UDIVFIXSAT\0"
  /* 2941 */ "G_EXTRACT\0"
  /* 2951 */ "G_SELECT\0"
  /* 2960 */ "G_BRINDIRECT\0"
  /* 2973 */ "PATCHABLE_RET\0"
  /* 2987 */ "PseudoRET\0"
  /* 2997 */ "G_MEMSET\0"
  /* 3006 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 3030 */ "G_BRJT\0"
  /* 3037 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 3058 */ "G_INSERT_VECTOR_ELT\0"
  /* 3078 */ "G_FCONSTANT\0"
  /* 3090 */ "G_CONSTANT\0"
  /* 3101 */ "G_INTRINSIC_CONVERGENT\0"
  /* 3124 */ "STATEPOINT\0"
  /* 3135 */ "PATCHPOINT\0"
  /* 3146 */ "G_PTRTOINT\0"
  /* 3157 */ "G_FRINT\0"
  /* 3165 */ "G_INTRINSIC_LLRINT\0"
  /* 3184 */ "G_INTRINSIC_LRINT\0"
  /* 3202 */ "G_FNEARBYINT\0"
  /* 3215 */ "G_VASTART\0"
  /* 3225 */ "LIFETIME_START\0"
  /* 3240 */ "G_INVOKE_REGION_START\0"
  /* 3262 */ "G_INSERT\0"
  /* 3271 */ "G_FSQRT\0"
  /* 3279 */ "G_STRICT_FSQRT\0"
  /* 3294 */ "G_BITCAST\0"
  /* 3304 */ "G_ADDRSPACE_CAST\0"
  /* 3321 */ "DBG_VALUE_LIST\0"
  /* 3336 */ "G_FPEXT\0"
  /* 3344 */ "G_SEXT\0"
  /* 3351 */ "G_ASSERT_SEXT\0"
  /* 3365 */ "G_ANYEXT\0"
  /* 3374 */ "G_ZEXT\0"
  /* 3381 */ "G_ASSERT_ZEXT\0"
  /* 3395 */ "G_FDIV\0"
  /* 3402 */ "G_STRICT_FDIV\0"
  /* 3416 */ "G_SDIV\0"
  /* 3423 */ "G_UDIV\0"
  /* 3430 */ "G_GET_FPENV\0"
  /* 3442 */ "G_RESET_FPENV\0"
  /* 3456 */ "G_SET_FPENV\0"
  /* 3468 */ "G_FPOW\0"
  /* 3475 */ "G_VECREDUCE_FMAX\0"
  /* 3492 */ "G_ATOMICRMW_FMAX\0"
  /* 3509 */ "G_VECREDUCE_SMAX\0"
  /* 3526 */ "G_SMAX\0"
  /* 3533 */ "G_VECREDUCE_UMAX\0"
  /* 3550 */ "G_UMAX\0"
  /* 3557 */ "G_ATOMICRMW_UMAX\0"
  /* 3574 */ "G_ATOMICRMW_MAX\0"
  /* 3590 */ "G_FRAME_INDEX\0"
  /* 3604 */ "G_SBFX\0"
  /* 3611 */ "G_UBFX\0"
  /* 3618 */ "G_SMULFIX\0"
  /* 3628 */ "G_UMULFIX\0"
  /* 3638 */ "G_SDIVFIX\0"
  /* 3648 */ "G_UDIVFIX\0"
  /* 3658 */ "G_MEMCPY\0"
  /* 3667 */ "COPY\0"
  /* 3672 */ "CONVERGENCECTRL_ENTRY\0"
  /* 3694 */ "G_CTLZ\0"
  /* 3701 */ "G_CTTZ\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned RymoInstrNameIndices[] = {
    1198U, 1577U, 2216U, 1865U, 1266U, 1247U, 1275U, 1413U, 
    1016U, 1031U, 982U, 1058U, 2686U, 828U, 3321U, 995U, 
    1194U, 1256U, 618U, 3667U, 740U, 3225U, 467U, 569U, 
    606U, 1959U, 1401U, 3135U, 552U, 2151U, 1121U, 3124U, 
    763U, 2139U, 2126U, 2277U, 2973U, 3006U, 1333U, 1380U, 
    1353U, 1292U, 2242U, 1913U, 3672U, 2400U, 2097U, 876U, 
    3351U, 3381U, 1708U, 380U, 91U, 1516U, 3416U, 3423U, 
    1543U, 1550U, 1557U, 1567U, 445U, 2571U, 2534U, 980U, 
    1196U, 3590U, 838U, 853U, 1418U, 2941U, 2622U, 3262U, 
    2639U, 2471U, 161U, 2669U, 3146U, 2598U, 3294U, 919U, 
    2253U, 526U, 135U, 508U, 3184U, 3165U, 1686U, 2302U, 
    2321U, 281U, 225U, 255U, 266U, 206U, 236U, 807U, 
    791U, 2716U, 1072U, 1089U, 396U, 97U, 451U, 412U, 
    2576U, 2540U, 3574U, 1834U, 3557U, 1817U, 347U, 74U, 
    3492U, 1752U, 2021U, 1999U, 598U, 1138U, 480U, 2960U, 
    3240U, 113U, 2764U, 3101U, 2791U, 3365U, 153U, 3090U, 
    3078U, 3215U, 1113U, 3344U, 1045U, 3374U, 1319U, 2388U, 
    2374U, 1312U, 2381U, 2591U, 1434U, 2076U, 2069U, 2083U, 
    2090U, 2951U, 1905U, 639U, 1889U, 590U, 1897U, 631U, 
    1881U, 582U, 1943U, 1935U, 1157U, 1149U, 2859U, 2849U, 
    2839U, 2829U, 2879U, 2869U, 3618U, 3628U, 2889U, 2902U, 
    3638U, 3648U, 2915U, 2928U, 305U, 53U, 1458U, 34U, 
    199U, 3395U, 1522U, 3468U, 1229U, 2195U, 26U, 9U, 
    1106U, 18U, 0U, 2170U, 2202U, 1009U, 3336U, 125U, 
    1211U, 1220U, 2051U, 2060U, 2609U, 1723U, 2703U, 928U, 
    1651U, 1661U, 688U, 703U, 1608U, 1640U, 3430U, 3456U, 
    3442U, 647U, 675U, 660U, 386U, 1237U, 1786U, 3526U, 
    1810U, 3550U, 2616U, 499U, 489U, 2211U, 3030U, 718U, 
    2452U, 2432U, 3058U, 3037U, 2486U, 2503U, 2746U, 3701U, 
    962U, 3694U, 944U, 2118U, 2043U, 815U, 1325U, 2662U, 
    1858U, 1679U, 2654U, 1850U, 1671U, 1181U, 1173U, 1165U, 
    3271U, 2423U, 3157U, 3202U, 3304U, 2229U, 727U, 182U, 
    897U, 776U, 333U, 60U, 1486U, 3402U, 1529U, 40U, 
    3279U, 2179U, 2341U, 2357U, 3658U, 747U, 909U, 2997U, 
    1951U, 1992U, 1968U, 1980U, 312U, 1465U, 288U, 1441U, 
    3475U, 1735U, 1619U, 1587U, 364U, 1500U, 429U, 2556U, 
    2518U, 3509U, 1769U, 3533U, 1793U, 3604U, 3611U, 1202U, 
    2987U, 1189U, 1453U, 2395U, 
};

static inline void InitRymoMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(RymoDescs.Insts, RymoInstrNameIndices, RymoInstrNameData, nullptr, nullptr, 300);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct RymoGenInstrInfo : public TargetInstrInfo {
  explicit RymoGenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~RymoGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const RymoInstrTable RymoDescs;
extern const unsigned RymoInstrNameIndices[];
extern const char RymoInstrNameData[];
RymoGenInstrInfo::RymoGenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(RymoDescs.Insts, RymoInstrNameIndices, RymoInstrNameData, nullptr, nullptr, 300);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Rymo {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace Rymo
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Rymo {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Rymo
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Rymo {
namespace OpTypes {
enum OperandType {
  f32imm = 0,
  f64imm = 1,
  i1imm = 2,
  i8imm = 3,
  i16imm = 4,
  i32imm = 5,
  i64imm = 6,
  ptype0 = 7,
  ptype1 = 8,
  ptype2 = 9,
  ptype3 = 10,
  ptype4 = 11,
  ptype5 = 12,
  type0 = 13,
  type1 = 14,
  type2 = 15,
  type3 = 16,
  type4 = 17,
  type5 = 18,
  untyped_imm_0 = 19,
  GPR = 20,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Rymo {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  static const uint16_t Offsets[] = {
    /* PHI */
    0,
    /* INLINEASM */
    1,
    /* INLINEASM_BR */
    1,
    /* CFI_INSTRUCTION */
    1,
    /* EH_LABEL */
    2,
    /* GC_LABEL */
    3,
    /* ANNOTATION_LABEL */
    4,
    /* KILL */
    5,
    /* EXTRACT_SUBREG */
    5,
    /* INSERT_SUBREG */
    8,
    /* IMPLICIT_DEF */
    12,
    /* SUBREG_TO_REG */
    13,
    /* COPY_TO_REGCLASS */
    17,
    /* DBG_VALUE */
    20,
    /* DBG_VALUE_LIST */
    20,
    /* DBG_INSTR_REF */
    20,
    /* DBG_PHI */
    20,
    /* DBG_LABEL */
    20,
    /* REG_SEQUENCE */
    21,
    /* COPY */
    23,
    /* BUNDLE */
    25,
    /* LIFETIME_START */
    25,
    /* LIFETIME_END */
    26,
    /* PSEUDO_PROBE */
    27,
    /* ARITH_FENCE */
    31,
    /* STACKMAP */
    33,
    /* FENTRY_CALL */
    35,
    /* PATCHPOINT */
    35,
    /* LOAD_STACK_GUARD */
    41,
    /* PREALLOCATED_SETUP */
    42,
    /* PREALLOCATED_ARG */
    43,
    /* STATEPOINT */
    46,
    /* LOCAL_ESCAPE */
    46,
    /* FAULTING_OP */
    48,
    /* PATCHABLE_OP */
    49,
    /* PATCHABLE_FUNCTION_ENTER */
    49,
    /* PATCHABLE_RET */
    49,
    /* PATCHABLE_FUNCTION_EXIT */
    49,
    /* PATCHABLE_TAIL_CALL */
    49,
    /* PATCHABLE_EVENT_CALL */
    49,
    /* PATCHABLE_TYPED_EVENT_CALL */
    51,
    /* ICALL_BRANCH_FUNNEL */
    54,
    /* MEMBARRIER */
    54,
    /* JUMP_TABLE_DEBUG_INFO */
    54,
    /* CONVERGENCECTRL_ENTRY */
    55,
    /* CONVERGENCECTRL_ANCHOR */
    56,
    /* CONVERGENCECTRL_LOOP */
    57,
    /* CONVERGENCECTRL_GLUE */
    59,
    /* G_ASSERT_SEXT */
    60,
    /* G_ASSERT_ZEXT */
    63,
    /* G_ASSERT_ALIGN */
    66,
    /* G_ADD */
    69,
    /* G_SUB */
    72,
    /* G_MUL */
    75,
    /* G_SDIV */
    78,
    /* G_UDIV */
    81,
    /* G_SREM */
    84,
    /* G_UREM */
    87,
    /* G_SDIVREM */
    90,
    /* G_UDIVREM */
    94,
    /* G_AND */
    98,
    /* G_OR */
    101,
    /* G_XOR */
    104,
    /* G_IMPLICIT_DEF */
    107,
    /* G_PHI */
    108,
    /* G_FRAME_INDEX */
    109,
    /* G_GLOBAL_VALUE */
    111,
    /* G_PTRAUTH_GLOBAL_VALUE */
    113,
    /* G_CONSTANT_POOL */
    118,
    /* G_EXTRACT */
    120,
    /* G_UNMERGE_VALUES */
    123,
    /* G_INSERT */
    125,
    /* G_MERGE_VALUES */
    129,
    /* G_BUILD_VECTOR */
    131,
    /* G_BUILD_VECTOR_TRUNC */
    133,
    /* G_CONCAT_VECTORS */
    135,
    /* G_PTRTOINT */
    137,
    /* G_INTTOPTR */
    139,
    /* G_BITCAST */
    141,
    /* G_FREEZE */
    143,
    /* G_CONSTANT_FOLD_BARRIER */
    145,
    /* G_INTRINSIC_FPTRUNC_ROUND */
    147,
    /* G_INTRINSIC_TRUNC */
    150,
    /* G_INTRINSIC_ROUND */
    152,
    /* G_INTRINSIC_LRINT */
    154,
    /* G_INTRINSIC_LLRINT */
    156,
    /* G_INTRINSIC_ROUNDEVEN */
    158,
    /* G_READCYCLECOUNTER */
    160,
    /* G_READSTEADYCOUNTER */
    161,
    /* G_LOAD */
    162,
    /* G_SEXTLOAD */
    164,
    /* G_ZEXTLOAD */
    166,
    /* G_INDEXED_LOAD */
    168,
    /* G_INDEXED_SEXTLOAD */
    173,
    /* G_INDEXED_ZEXTLOAD */
    178,
    /* G_STORE */
    183,
    /* G_INDEXED_STORE */
    185,
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    190,
    /* G_ATOMIC_CMPXCHG */
    195,
    /* G_ATOMICRMW_XCHG */
    199,
    /* G_ATOMICRMW_ADD */
    202,
    /* G_ATOMICRMW_SUB */
    205,
    /* G_ATOMICRMW_AND */
    208,
    /* G_ATOMICRMW_NAND */
    211,
    /* G_ATOMICRMW_OR */
    214,
    /* G_ATOMICRMW_XOR */
    217,
    /* G_ATOMICRMW_MAX */
    220,
    /* G_ATOMICRMW_MIN */
    223,
    /* G_ATOMICRMW_UMAX */
    226,
    /* G_ATOMICRMW_UMIN */
    229,
    /* G_ATOMICRMW_FADD */
    232,
    /* G_ATOMICRMW_FSUB */
    235,
    /* G_ATOMICRMW_FMAX */
    238,
    /* G_ATOMICRMW_FMIN */
    241,
    /* G_ATOMICRMW_UINC_WRAP */
    244,
    /* G_ATOMICRMW_UDEC_WRAP */
    247,
    /* G_FENCE */
    250,
    /* G_PREFETCH */
    252,
    /* G_BRCOND */
    256,
    /* G_BRINDIRECT */
    258,
    /* G_INVOKE_REGION_START */
    259,
    /* G_INTRINSIC */
    259,
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    260,
    /* G_INTRINSIC_CONVERGENT */
    261,
    /* G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS */
    262,
    /* G_ANYEXT */
    263,
    /* G_TRUNC */
    265,
    /* G_CONSTANT */
    267,
    /* G_FCONSTANT */
    269,
    /* G_VASTART */
    271,
    /* G_VAARG */
    272,
    /* G_SEXT */
    275,
    /* G_SEXT_INREG */
    277,
    /* G_ZEXT */
    280,
    /* G_SHL */
    282,
    /* G_LSHR */
    285,
    /* G_ASHR */
    288,
    /* G_FSHL */
    291,
    /* G_FSHR */
    295,
    /* G_ROTR */
    299,
    /* G_ROTL */
    302,
    /* G_ICMP */
    305,
    /* G_FCMP */
    309,
    /* G_SCMP */
    313,
    /* G_UCMP */
    316,
    /* G_SELECT */
    319,
    /* G_UADDO */
    323,
    /* G_UADDE */
    327,
    /* G_USUBO */
    332,
    /* G_USUBE */
    336,
    /* G_SADDO */
    341,
    /* G_SADDE */
    345,
    /* G_SSUBO */
    350,
    /* G_SSUBE */
    354,
    /* G_UMULO */
    359,
    /* G_SMULO */
    363,
    /* G_UMULH */
    367,
    /* G_SMULH */
    370,
    /* G_UADDSAT */
    373,
    /* G_SADDSAT */
    376,
    /* G_USUBSAT */
    379,
    /* G_SSUBSAT */
    382,
    /* G_USHLSAT */
    385,
    /* G_SSHLSAT */
    388,
    /* G_SMULFIX */
    391,
    /* G_UMULFIX */
    395,
    /* G_SMULFIXSAT */
    399,
    /* G_UMULFIXSAT */
    403,
    /* G_SDIVFIX */
    407,
    /* G_UDIVFIX */
    411,
    /* G_SDIVFIXSAT */
    415,
    /* G_UDIVFIXSAT */
    419,
    /* G_FADD */
    423,
    /* G_FSUB */
    426,
    /* G_FMUL */
    429,
    /* G_FMA */
    432,
    /* G_FMAD */
    436,
    /* G_FDIV */
    440,
    /* G_FREM */
    443,
    /* G_FPOW */
    446,
    /* G_FPOWI */
    449,
    /* G_FEXP */
    452,
    /* G_FEXP2 */
    454,
    /* G_FEXP10 */
    456,
    /* G_FLOG */
    458,
    /* G_FLOG2 */
    460,
    /* G_FLOG10 */
    462,
    /* G_FLDEXP */
    464,
    /* G_FFREXP */
    467,
    /* G_FNEG */
    470,
    /* G_FPEXT */
    472,
    /* G_FPTRUNC */
    474,
    /* G_FPTOSI */
    476,
    /* G_FPTOUI */
    478,
    /* G_SITOFP */
    480,
    /* G_UITOFP */
    482,
    /* G_FABS */
    484,
    /* G_FCOPYSIGN */
    486,
    /* G_IS_FPCLASS */
    489,
    /* G_FCANONICALIZE */
    492,
    /* G_FMINNUM */
    494,
    /* G_FMAXNUM */
    497,
    /* G_FMINNUM_IEEE */
    500,
    /* G_FMAXNUM_IEEE */
    503,
    /* G_FMINIMUM */
    506,
    /* G_FMAXIMUM */
    509,
    /* G_GET_FPENV */
    512,
    /* G_SET_FPENV */
    513,
    /* G_RESET_FPENV */
    514,
    /* G_GET_FPMODE */
    514,
    /* G_SET_FPMODE */
    515,
    /* G_RESET_FPMODE */
    516,
    /* G_PTR_ADD */
    516,
    /* G_PTRMASK */
    519,
    /* G_SMIN */
    522,
    /* G_SMAX */
    525,
    /* G_UMIN */
    528,
    /* G_UMAX */
    531,
    /* G_ABS */
    534,
    /* G_LROUND */
    536,
    /* G_LLROUND */
    538,
    /* G_BR */
    540,
    /* G_BRJT */
    541,
    /* G_VSCALE */
    544,
    /* G_INSERT_SUBVECTOR */
    546,
    /* G_EXTRACT_SUBVECTOR */
    550,
    /* G_INSERT_VECTOR_ELT */
    553,
    /* G_EXTRACT_VECTOR_ELT */
    557,
    /* G_SHUFFLE_VECTOR */
    560,
    /* G_SPLAT_VECTOR */
    564,
    /* G_VECTOR_COMPRESS */
    566,
    /* G_CTTZ */
    570,
    /* G_CTTZ_ZERO_UNDEF */
    572,
    /* G_CTLZ */
    574,
    /* G_CTLZ_ZERO_UNDEF */
    576,
    /* G_CTPOP */
    578,
    /* G_BSWAP */
    580,
    /* G_BITREVERSE */
    582,
    /* G_FCEIL */
    584,
    /* G_FCOS */
    586,
    /* G_FSIN */
    588,
    /* G_FTAN */
    590,
    /* G_FACOS */
    592,
    /* G_FASIN */
    594,
    /* G_FATAN */
    596,
    /* G_FCOSH */
    598,
    /* G_FSINH */
    600,
    /* G_FTANH */
    602,
    /* G_FSQRT */
    604,
    /* G_FFLOOR */
    606,
    /* G_FRINT */
    608,
    /* G_FNEARBYINT */
    610,
    /* G_ADDRSPACE_CAST */
    612,
    /* G_BLOCK_ADDR */
    614,
    /* G_JUMP_TABLE */
    616,
    /* G_DYN_STACKALLOC */
    618,
    /* G_STACKSAVE */
    621,
    /* G_STACKRESTORE */
    622,
    /* G_STRICT_FADD */
    623,
    /* G_STRICT_FSUB */
    626,
    /* G_STRICT_FMUL */
    629,
    /* G_STRICT_FDIV */
    632,
    /* G_STRICT_FREM */
    635,
    /* G_STRICT_FMA */
    638,
    /* G_STRICT_FSQRT */
    642,
    /* G_STRICT_FLDEXP */
    644,
    /* G_READ_REGISTER */
    647,
    /* G_WRITE_REGISTER */
    649,
    /* G_MEMCPY */
    651,
    /* G_MEMCPY_INLINE */
    655,
    /* G_MEMMOVE */
    658,
    /* G_MEMSET */
    662,
    /* G_BZERO */
    666,
    /* G_TRAP */
    669,
    /* G_DEBUGTRAP */
    669,
    /* G_UBSANTRAP */
    669,
    /* G_VECREDUCE_SEQ_FADD */
    670,
    /* G_VECREDUCE_SEQ_FMUL */
    673,
    /* G_VECREDUCE_FADD */
    676,
    /* G_VECREDUCE_FMUL */
    678,
    /* G_VECREDUCE_FMAX */
    680,
    /* G_VECREDUCE_FMIN */
    682,
    /* G_VECREDUCE_FMAXIMUM */
    684,
    /* G_VECREDUCE_FMINIMUM */
    686,
    /* G_VECREDUCE_ADD */
    688,
    /* G_VECREDUCE_MUL */
    690,
    /* G_VECREDUCE_AND */
    692,
    /* G_VECREDUCE_OR */
    694,
    /* G_VECREDUCE_XOR */
    696,
    /* G_VECREDUCE_SMAX */
    698,
    /* G_VECREDUCE_SMIN */
    700,
    /* G_VECREDUCE_UMAX */
    702,
    /* G_VECREDUCE_UMIN */
    704,
    /* G_SBFX */
    706,
    /* G_UBFX */
    710,
    /* PseudoLI */
    714,
    /* PseudoRET */
    716,
    /* ADDI */
    716,
    /* FMUL */
    719,
    /* JALR */
    722,
  };

  using namespace OpTypes;
  static const int8_t OpcodeOperandTypes[] = {
    
    /* PHI */
    -1, 
    /* INLINEASM */
    /* INLINEASM_BR */
    /* CFI_INSTRUCTION */
    i32imm, 
    /* EH_LABEL */
    i32imm, 
    /* GC_LABEL */
    i32imm, 
    /* ANNOTATION_LABEL */
    i32imm, 
    /* KILL */
    /* EXTRACT_SUBREG */
    -1, -1, i32imm, 
    /* INSERT_SUBREG */
    -1, -1, -1, i32imm, 
    /* IMPLICIT_DEF */
    -1, 
    /* SUBREG_TO_REG */
    -1, -1, -1, i32imm, 
    /* COPY_TO_REGCLASS */
    -1, -1, i32imm, 
    /* DBG_VALUE */
    /* DBG_VALUE_LIST */
    /* DBG_INSTR_REF */
    /* DBG_PHI */
    /* DBG_LABEL */
    -1, 
    /* REG_SEQUENCE */
    -1, -1, 
    /* COPY */
    -1, -1, 
    /* BUNDLE */
    /* LIFETIME_START */
    i32imm, 
    /* LIFETIME_END */
    i32imm, 
    /* PSEUDO_PROBE */
    i64imm, i64imm, i8imm, i32imm, 
    /* ARITH_FENCE */
    -1, -1, 
    /* STACKMAP */
    i64imm, i32imm, 
    /* FENTRY_CALL */
    /* PATCHPOINT */
    -1, i64imm, i32imm, -1, i32imm, i32imm, 
    /* LOAD_STACK_GUARD */
    -1, 
    /* PREALLOCATED_SETUP */
    i32imm, 
    /* PREALLOCATED_ARG */
    -1, i32imm, i32imm, 
    /* STATEPOINT */
    /* LOCAL_ESCAPE */
    -1, i32imm, 
    /* FAULTING_OP */
    -1, 
    /* PATCHABLE_OP */
    /* PATCHABLE_FUNCTION_ENTER */
    /* PATCHABLE_RET */
    /* PATCHABLE_FUNCTION_EXIT */
    /* PATCHABLE_TAIL_CALL */
    /* PATCHABLE_EVENT_CALL */
    -1, -1, 
    /* PATCHABLE_TYPED_EVENT_CALL */
    -1, -1, -1, 
    /* ICALL_BRANCH_FUNNEL */
    /* MEMBARRIER */
    /* JUMP_TABLE_DEBUG_INFO */
    i64imm, 
    /* CONVERGENCECTRL_ENTRY */
    -1, 
    /* CONVERGENCECTRL_ANCHOR */
    -1, 
    /* CONVERGENCECTRL_LOOP */
    -1, -1, 
    /* CONVERGENCECTRL_GLUE */
    -1, 
    /* G_ASSERT_SEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ZEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ALIGN */
    type0, type0, untyped_imm_0, 
    /* G_ADD */
    type0, type0, type0, 
    /* G_SUB */
    type0, type0, type0, 
    /* G_MUL */
    type0, type0, type0, 
    /* G_SDIV */
    type0, type0, type0, 
    /* G_UDIV */
    type0, type0, type0, 
    /* G_SREM */
    type0, type0, type0, 
    /* G_UREM */
    type0, type0, type0, 
    /* G_SDIVREM */
    type0, type0, type0, type0, 
    /* G_UDIVREM */
    type0, type0, type0, type0, 
    /* G_AND */
    type0, type0, type0, 
    /* G_OR */
    type0, type0, type0, 
    /* G_XOR */
    type0, type0, type0, 
    /* G_IMPLICIT_DEF */
    type0, 
    /* G_PHI */
    type0, 
    /* G_FRAME_INDEX */
    type0, -1, 
    /* G_GLOBAL_VALUE */
    type0, -1, 
    /* G_PTRAUTH_GLOBAL_VALUE */
    type0, -1, i32imm, type1, i64imm, 
    /* G_CONSTANT_POOL */
    type0, -1, 
    /* G_EXTRACT */
    type0, type1, untyped_imm_0, 
    /* G_UNMERGE_VALUES */
    type0, type1, 
    /* G_INSERT */
    type0, type0, type1, untyped_imm_0, 
    /* G_MERGE_VALUES */
    type0, type1, 
    /* G_BUILD_VECTOR */
    type0, type1, 
    /* G_BUILD_VECTOR_TRUNC */
    type0, type1, 
    /* G_CONCAT_VECTORS */
    type0, type1, 
    /* G_PTRTOINT */
    type0, type1, 
    /* G_INTTOPTR */
    type0, type1, 
    /* G_BITCAST */
    type0, type1, 
    /* G_FREEZE */
    type0, type0, 
    /* G_CONSTANT_FOLD_BARRIER */
    type0, type0, 
    /* G_INTRINSIC_FPTRUNC_ROUND */
    type0, type1, i32imm, 
    /* G_INTRINSIC_TRUNC */
    type0, type0, 
    /* G_INTRINSIC_ROUND */
    type0, type0, 
    /* G_INTRINSIC_LRINT */
    type0, type1, 
    /* G_INTRINSIC_LLRINT */
    type0, type1, 
    /* G_INTRINSIC_ROUNDEVEN */
    type0, type0, 
    /* G_READCYCLECOUNTER */
    type0, 
    /* G_READSTEADYCOUNTER */
    type0, 
    /* G_LOAD */
    type0, ptype1, 
    /* G_SEXTLOAD */
    type0, ptype1, 
    /* G_ZEXTLOAD */
    type0, ptype1, 
    /* G_INDEXED_LOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_SEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_ZEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_STORE */
    type0, ptype1, 
    /* G_INDEXED_STORE */
    ptype0, type1, ptype0, ptype2, -1, 
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    type0, type1, type2, type0, type0, 
    /* G_ATOMIC_CMPXCHG */
    type0, ptype1, type0, type0, 
    /* G_ATOMICRMW_XCHG */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_ADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_SUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_AND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_NAND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_OR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_XOR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FSUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UINC_WRAP */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UDEC_WRAP */
    type0, ptype1, type0, 
    /* G_FENCE */
    i32imm, i32imm, 
    /* G_PREFETCH */
    ptype0, i32imm, i32imm, i32imm, 
    /* G_BRCOND */
    type0, -1, 
    /* G_BRINDIRECT */
    type0, 
    /* G_INVOKE_REGION_START */
    /* G_INTRINSIC */
    -1, 
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    -1, 
    /* G_INTRINSIC_CONVERGENT */
    -1, 
    /* G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS */
    -1, 
    /* G_ANYEXT */
    type0, type1, 
    /* G_TRUNC */
    type0, type1, 
    /* G_CONSTANT */
    type0, -1, 
    /* G_FCONSTANT */
    type0, -1, 
    /* G_VASTART */
    type0, 
    /* G_VAARG */
    type0, type1, -1, 
    /* G_SEXT */
    type0, type1, 
    /* G_SEXT_INREG */
    type0, type0, untyped_imm_0, 
    /* G_ZEXT */
    type0, type1, 
    /* G_SHL */
    type0, type0, type1, 
    /* G_LSHR */
    type0, type0, type1, 
    /* G_ASHR */
    type0, type0, type1, 
    /* G_FSHL */
    type0, type0, type0, type1, 
    /* G_FSHR */
    type0, type0, type0, type1, 
    /* G_ROTR */
    type0, type0, type1, 
    /* G_ROTL */
    type0, type0, type1, 
    /* G_ICMP */
    type0, -1, type1, type1, 
    /* G_FCMP */
    type0, -1, type1, type1, 
    /* G_SCMP */
    type0, type1, type1, 
    /* G_UCMP */
    type0, type1, type1, 
    /* G_SELECT */
    type0, type1, type0, type0, 
    /* G_UADDO */
    type0, type1, type0, type0, 
    /* G_UADDE */
    type0, type1, type0, type0, type1, 
    /* G_USUBO */
    type0, type1, type0, type0, 
    /* G_USUBE */
    type0, type1, type0, type0, type1, 
    /* G_SADDO */
    type0, type1, type0, type0, 
    /* G_SADDE */
    type0, type1, type0, type0, type1, 
    /* G_SSUBO */
    type0, type1, type0, type0, 
    /* G_SSUBE */
    type0, type1, type0, type0, type1, 
    /* G_UMULO */
    type0, type1, type0, type0, 
    /* G_SMULO */
    type0, type1, type0, type0, 
    /* G_UMULH */
    type0, type0, type0, 
    /* G_SMULH */
    type0, type0, type0, 
    /* G_UADDSAT */
    type0, type0, type0, 
    /* G_SADDSAT */
    type0, type0, type0, 
    /* G_USUBSAT */
    type0, type0, type0, 
    /* G_SSUBSAT */
    type0, type0, type0, 
    /* G_USHLSAT */
    type0, type0, type1, 
    /* G_SSHLSAT */
    type0, type0, type1, 
    /* G_SMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_FADD */
    type0, type0, type0, 
    /* G_FSUB */
    type0, type0, type0, 
    /* G_FMUL */
    type0, type0, type0, 
    /* G_FMA */
    type0, type0, type0, type0, 
    /* G_FMAD */
    type0, type0, type0, type0, 
    /* G_FDIV */
    type0, type0, type0, 
    /* G_FREM */
    type0, type0, type0, 
    /* G_FPOW */
    type0, type0, type0, 
    /* G_FPOWI */
    type0, type0, type1, 
    /* G_FEXP */
    type0, type0, 
    /* G_FEXP2 */
    type0, type0, 
    /* G_FEXP10 */
    type0, type0, 
    /* G_FLOG */
    type0, type0, 
    /* G_FLOG2 */
    type0, type0, 
    /* G_FLOG10 */
    type0, type0, 
    /* G_FLDEXP */
    type0, type0, type1, 
    /* G_FFREXP */
    type0, type1, type0, 
    /* G_FNEG */
    type0, type0, 
    /* G_FPEXT */
    type0, type1, 
    /* G_FPTRUNC */
    type0, type1, 
    /* G_FPTOSI */
    type0, type1, 
    /* G_FPTOUI */
    type0, type1, 
    /* G_SITOFP */
    type0, type1, 
    /* G_UITOFP */
    type0, type1, 
    /* G_FABS */
    type0, type0, 
    /* G_FCOPYSIGN */
    type0, type0, type1, 
    /* G_IS_FPCLASS */
    type0, type1, -1, 
    /* G_FCANONICALIZE */
    type0, type0, 
    /* G_FMINNUM */
    type0, type0, type0, 
    /* G_FMAXNUM */
    type0, type0, type0, 
    /* G_FMINNUM_IEEE */
    type0, type0, type0, 
    /* G_FMAXNUM_IEEE */
    type0, type0, type0, 
    /* G_FMINIMUM */
    type0, type0, type0, 
    /* G_FMAXIMUM */
    type0, type0, type0, 
    /* G_GET_FPENV */
    type0, 
    /* G_SET_FPENV */
    type0, 
    /* G_RESET_FPENV */
    /* G_GET_FPMODE */
    type0, 
    /* G_SET_FPMODE */
    type0, 
    /* G_RESET_FPMODE */
    /* G_PTR_ADD */
    ptype0, ptype0, type1, 
    /* G_PTRMASK */
    ptype0, ptype0, type1, 
    /* G_SMIN */
    type0, type0, type0, 
    /* G_SMAX */
    type0, type0, type0, 
    /* G_UMIN */
    type0, type0, type0, 
    /* G_UMAX */
    type0, type0, type0, 
    /* G_ABS */
    type0, type0, 
    /* G_LROUND */
    type0, type1, 
    /* G_LLROUND */
    type0, type1, 
    /* G_BR */
    -1, 
    /* G_BRJT */
    ptype0, -1, type1, 
    /* G_VSCALE */
    type0, -1, 
    /* G_INSERT_SUBVECTOR */
    type0, type0, type1, untyped_imm_0, 
    /* G_EXTRACT_SUBVECTOR */
    type0, type0, untyped_imm_0, 
    /* G_INSERT_VECTOR_ELT */
    type0, type0, type1, type2, 
    /* G_EXTRACT_VECTOR_ELT */
    type0, type1, type2, 
    /* G_SHUFFLE_VECTOR */
    type0, type1, type1, -1, 
    /* G_SPLAT_VECTOR */
    type0, type1, 
    /* G_VECTOR_COMPRESS */
    type0, type0, type1, type0, 
    /* G_CTTZ */
    type0, type1, 
    /* G_CTTZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTLZ */
    type0, type1, 
    /* G_CTLZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTPOP */
    type0, type1, 
    /* G_BSWAP */
    type0, type0, 
    /* G_BITREVERSE */
    type0, type0, 
    /* G_FCEIL */
    type0, type0, 
    /* G_FCOS */
    type0, type0, 
    /* G_FSIN */
    type0, type0, 
    /* G_FTAN */
    type0, type0, 
    /* G_FACOS */
    type0, type0, 
    /* G_FASIN */
    type0, type0, 
    /* G_FATAN */
    type0, type0, 
    /* G_FCOSH */
    type0, type0, 
    /* G_FSINH */
    type0, type0, 
    /* G_FTANH */
    type0, type0, 
    /* G_FSQRT */
    type0, type0, 
    /* G_FFLOOR */
    type0, type0, 
    /* G_FRINT */
    type0, type0, 
    /* G_FNEARBYINT */
    type0, type0, 
    /* G_ADDRSPACE_CAST */
    type0, type1, 
    /* G_BLOCK_ADDR */
    type0, -1, 
    /* G_JUMP_TABLE */
    type0, -1, 
    /* G_DYN_STACKALLOC */
    ptype0, type1, i32imm, 
    /* G_STACKSAVE */
    ptype0, 
    /* G_STACKRESTORE */
    ptype0, 
    /* G_STRICT_FADD */
    type0, type0, type0, 
    /* G_STRICT_FSUB */
    type0, type0, type0, 
    /* G_STRICT_FMUL */
    type0, type0, type0, 
    /* G_STRICT_FDIV */
    type0, type0, type0, 
    /* G_STRICT_FREM */
    type0, type0, type0, 
    /* G_STRICT_FMA */
    type0, type0, type0, type0, 
    /* G_STRICT_FSQRT */
    type0, type0, 
    /* G_STRICT_FLDEXP */
    type0, type0, type1, 
    /* G_READ_REGISTER */
    type0, -1, 
    /* G_WRITE_REGISTER */
    -1, type0, 
    /* G_MEMCPY */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMCPY_INLINE */
    ptype0, ptype1, type2, 
    /* G_MEMMOVE */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMSET */
    ptype0, type1, type2, untyped_imm_0, 
    /* G_BZERO */
    ptype0, type1, untyped_imm_0, 
    /* G_TRAP */
    /* G_DEBUGTRAP */
    /* G_UBSANTRAP */
    i8imm, 
    /* G_VECREDUCE_SEQ_FADD */
    type0, type1, type2, 
    /* G_VECREDUCE_SEQ_FMUL */
    type0, type1, type2, 
    /* G_VECREDUCE_FADD */
    type0, type1, 
    /* G_VECREDUCE_FMUL */
    type0, type1, 
    /* G_VECREDUCE_FMAX */
    type0, type1, 
    /* G_VECREDUCE_FMIN */
    type0, type1, 
    /* G_VECREDUCE_FMAXIMUM */
    type0, type1, 
    /* G_VECREDUCE_FMINIMUM */
    type0, type1, 
    /* G_VECREDUCE_ADD */
    type0, type1, 
    /* G_VECREDUCE_MUL */
    type0, type1, 
    /* G_VECREDUCE_AND */
    type0, type1, 
    /* G_VECREDUCE_OR */
    type0, type1, 
    /* G_VECREDUCE_XOR */
    type0, type1, 
    /* G_VECREDUCE_SMAX */
    type0, type1, 
    /* G_VECREDUCE_SMIN */
    type0, type1, 
    /* G_VECREDUCE_UMAX */
    type0, type1, 
    /* G_VECREDUCE_UMIN */
    type0, type1, 
    /* G_SBFX */
    type0, type0, type1, type1, 
    /* G_UBFX */
    type0, type0, type1, type1, 
    /* PseudoLI */
    GPR, i32imm, 
    /* PseudoRET */
    /* ADDI */
    GPR, GPR, i32imm, 
    /* FMUL */
    GPR, GPR, i32imm, 
    /* JALR */
    GPR, GPR, i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace Rymo {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace Rymo {
LLVM_READONLY static unsigned
getLogicalOperandSize(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return LogicalOpIdx;
}
LLVM_READONLY static inline unsigned
getLogicalOperandIdx(uint16_t Opcode, uint16_t LogicalOpIdx) {
  auto S = 0U;
  for (auto i = 0U; i < LogicalOpIdx; ++i)
    S += getLogicalOperandSize(Opcode, i);
  return S;
}
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace Rymo {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace Rymo
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace Rymo_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace Rymo_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace Rymo_MC {

} // end namespace Rymo_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#if (defined(ENABLE_INSTR_PREDICATE_VERIFIER) && !defined(NDEBUG)) ||\
    defined(GET_AVAILABLE_OPCODE_CHECKER)
#define GET_COMPUTE_FEATURES
#endif
#ifdef GET_COMPUTE_FEATURES
#undef GET_COMPUTE_FEATURES
namespace llvm {
namespace Rymo_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

inline FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  return Features;
}

inline FeatureBitset computeRequiredFeatures(unsigned Opcode) {
  enum : uint8_t {
    CEFBS_None,
  };

  static constexpr FeatureBitset FeatureBitsets[] = {
    {}, // CEFBS_None
  };
  static constexpr uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_VALUE_LIST = 14
    CEFBS_None, // DBG_INSTR_REF = 15
    CEFBS_None, // DBG_PHI = 16
    CEFBS_None, // DBG_LABEL = 17
    CEFBS_None, // REG_SEQUENCE = 18
    CEFBS_None, // COPY = 19
    CEFBS_None, // BUNDLE = 20
    CEFBS_None, // LIFETIME_START = 21
    CEFBS_None, // LIFETIME_END = 22
    CEFBS_None, // PSEUDO_PROBE = 23
    CEFBS_None, // ARITH_FENCE = 24
    CEFBS_None, // STACKMAP = 25
    CEFBS_None, // FENTRY_CALL = 26
    CEFBS_None, // PATCHPOINT = 27
    CEFBS_None, // LOAD_STACK_GUARD = 28
    CEFBS_None, // PREALLOCATED_SETUP = 29
    CEFBS_None, // PREALLOCATED_ARG = 30
    CEFBS_None, // STATEPOINT = 31
    CEFBS_None, // LOCAL_ESCAPE = 32
    CEFBS_None, // FAULTING_OP = 33
    CEFBS_None, // PATCHABLE_OP = 34
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 35
    CEFBS_None, // PATCHABLE_RET = 36
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 37
    CEFBS_None, // PATCHABLE_TAIL_CALL = 38
    CEFBS_None, // PATCHABLE_EVENT_CALL = 39
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 40
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 41
    CEFBS_None, // MEMBARRIER = 42
    CEFBS_None, // JUMP_TABLE_DEBUG_INFO = 43
    CEFBS_None, // CONVERGENCECTRL_ENTRY = 44
    CEFBS_None, // CONVERGENCECTRL_ANCHOR = 45
    CEFBS_None, // CONVERGENCECTRL_LOOP = 46
    CEFBS_None, // CONVERGENCECTRL_GLUE = 47
    CEFBS_None, // G_ASSERT_SEXT = 48
    CEFBS_None, // G_ASSERT_ZEXT = 49
    CEFBS_None, // G_ASSERT_ALIGN = 50
    CEFBS_None, // G_ADD = 51
    CEFBS_None, // G_SUB = 52
    CEFBS_None, // G_MUL = 53
    CEFBS_None, // G_SDIV = 54
    CEFBS_None, // G_UDIV = 55
    CEFBS_None, // G_SREM = 56
    CEFBS_None, // G_UREM = 57
    CEFBS_None, // G_SDIVREM = 58
    CEFBS_None, // G_UDIVREM = 59
    CEFBS_None, // G_AND = 60
    CEFBS_None, // G_OR = 61
    CEFBS_None, // G_XOR = 62
    CEFBS_None, // G_IMPLICIT_DEF = 63
    CEFBS_None, // G_PHI = 64
    CEFBS_None, // G_FRAME_INDEX = 65
    CEFBS_None, // G_GLOBAL_VALUE = 66
    CEFBS_None, // G_PTRAUTH_GLOBAL_VALUE = 67
    CEFBS_None, // G_CONSTANT_POOL = 68
    CEFBS_None, // G_EXTRACT = 69
    CEFBS_None, // G_UNMERGE_VALUES = 70
    CEFBS_None, // G_INSERT = 71
    CEFBS_None, // G_MERGE_VALUES = 72
    CEFBS_None, // G_BUILD_VECTOR = 73
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 74
    CEFBS_None, // G_CONCAT_VECTORS = 75
    CEFBS_None, // G_PTRTOINT = 76
    CEFBS_None, // G_INTTOPTR = 77
    CEFBS_None, // G_BITCAST = 78
    CEFBS_None, // G_FREEZE = 79
    CEFBS_None, // G_CONSTANT_FOLD_BARRIER = 80
    CEFBS_None, // G_INTRINSIC_FPTRUNC_ROUND = 81
    CEFBS_None, // G_INTRINSIC_TRUNC = 82
    CEFBS_None, // G_INTRINSIC_ROUND = 83
    CEFBS_None, // G_INTRINSIC_LRINT = 84
    CEFBS_None, // G_INTRINSIC_LLRINT = 85
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 86
    CEFBS_None, // G_READCYCLECOUNTER = 87
    CEFBS_None, // G_READSTEADYCOUNTER = 88
    CEFBS_None, // G_LOAD = 89
    CEFBS_None, // G_SEXTLOAD = 90
    CEFBS_None, // G_ZEXTLOAD = 91
    CEFBS_None, // G_INDEXED_LOAD = 92
    CEFBS_None, // G_INDEXED_SEXTLOAD = 93
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 94
    CEFBS_None, // G_STORE = 95
    CEFBS_None, // G_INDEXED_STORE = 96
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 97
    CEFBS_None, // G_ATOMIC_CMPXCHG = 98
    CEFBS_None, // G_ATOMICRMW_XCHG = 99
    CEFBS_None, // G_ATOMICRMW_ADD = 100
    CEFBS_None, // G_ATOMICRMW_SUB = 101
    CEFBS_None, // G_ATOMICRMW_AND = 102
    CEFBS_None, // G_ATOMICRMW_NAND = 103
    CEFBS_None, // G_ATOMICRMW_OR = 104
    CEFBS_None, // G_ATOMICRMW_XOR = 105
    CEFBS_None, // G_ATOMICRMW_MAX = 106
    CEFBS_None, // G_ATOMICRMW_MIN = 107
    CEFBS_None, // G_ATOMICRMW_UMAX = 108
    CEFBS_None, // G_ATOMICRMW_UMIN = 109
    CEFBS_None, // G_ATOMICRMW_FADD = 110
    CEFBS_None, // G_ATOMICRMW_FSUB = 111
    CEFBS_None, // G_ATOMICRMW_FMAX = 112
    CEFBS_None, // G_ATOMICRMW_FMIN = 113
    CEFBS_None, // G_ATOMICRMW_UINC_WRAP = 114
    CEFBS_None, // G_ATOMICRMW_UDEC_WRAP = 115
    CEFBS_None, // G_FENCE = 116
    CEFBS_None, // G_PREFETCH = 117
    CEFBS_None, // G_BRCOND = 118
    CEFBS_None, // G_BRINDIRECT = 119
    CEFBS_None, // G_INVOKE_REGION_START = 120
    CEFBS_None, // G_INTRINSIC = 121
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 122
    CEFBS_None, // G_INTRINSIC_CONVERGENT = 123
    CEFBS_None, // G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS = 124
    CEFBS_None, // G_ANYEXT = 125
    CEFBS_None, // G_TRUNC = 126
    CEFBS_None, // G_CONSTANT = 127
    CEFBS_None, // G_FCONSTANT = 128
    CEFBS_None, // G_VASTART = 129
    CEFBS_None, // G_VAARG = 130
    CEFBS_None, // G_SEXT = 131
    CEFBS_None, // G_SEXT_INREG = 132
    CEFBS_None, // G_ZEXT = 133
    CEFBS_None, // G_SHL = 134
    CEFBS_None, // G_LSHR = 135
    CEFBS_None, // G_ASHR = 136
    CEFBS_None, // G_FSHL = 137
    CEFBS_None, // G_FSHR = 138
    CEFBS_None, // G_ROTR = 139
    CEFBS_None, // G_ROTL = 140
    CEFBS_None, // G_ICMP = 141
    CEFBS_None, // G_FCMP = 142
    CEFBS_None, // G_SCMP = 143
    CEFBS_None, // G_UCMP = 144
    CEFBS_None, // G_SELECT = 145
    CEFBS_None, // G_UADDO = 146
    CEFBS_None, // G_UADDE = 147
    CEFBS_None, // G_USUBO = 148
    CEFBS_None, // G_USUBE = 149
    CEFBS_None, // G_SADDO = 150
    CEFBS_None, // G_SADDE = 151
    CEFBS_None, // G_SSUBO = 152
    CEFBS_None, // G_SSUBE = 153
    CEFBS_None, // G_UMULO = 154
    CEFBS_None, // G_SMULO = 155
    CEFBS_None, // G_UMULH = 156
    CEFBS_None, // G_SMULH = 157
    CEFBS_None, // G_UADDSAT = 158
    CEFBS_None, // G_SADDSAT = 159
    CEFBS_None, // G_USUBSAT = 160
    CEFBS_None, // G_SSUBSAT = 161
    CEFBS_None, // G_USHLSAT = 162
    CEFBS_None, // G_SSHLSAT = 163
    CEFBS_None, // G_SMULFIX = 164
    CEFBS_None, // G_UMULFIX = 165
    CEFBS_None, // G_SMULFIXSAT = 166
    CEFBS_None, // G_UMULFIXSAT = 167
    CEFBS_None, // G_SDIVFIX = 168
    CEFBS_None, // G_UDIVFIX = 169
    CEFBS_None, // G_SDIVFIXSAT = 170
    CEFBS_None, // G_UDIVFIXSAT = 171
    CEFBS_None, // G_FADD = 172
    CEFBS_None, // G_FSUB = 173
    CEFBS_None, // G_FMUL = 174
    CEFBS_None, // G_FMA = 175
    CEFBS_None, // G_FMAD = 176
    CEFBS_None, // G_FDIV = 177
    CEFBS_None, // G_FREM = 178
    CEFBS_None, // G_FPOW = 179
    CEFBS_None, // G_FPOWI = 180
    CEFBS_None, // G_FEXP = 181
    CEFBS_None, // G_FEXP2 = 182
    CEFBS_None, // G_FEXP10 = 183
    CEFBS_None, // G_FLOG = 184
    CEFBS_None, // G_FLOG2 = 185
    CEFBS_None, // G_FLOG10 = 186
    CEFBS_None, // G_FLDEXP = 187
    CEFBS_None, // G_FFREXP = 188
    CEFBS_None, // G_FNEG = 189
    CEFBS_None, // G_FPEXT = 190
    CEFBS_None, // G_FPTRUNC = 191
    CEFBS_None, // G_FPTOSI = 192
    CEFBS_None, // G_FPTOUI = 193
    CEFBS_None, // G_SITOFP = 194
    CEFBS_None, // G_UITOFP = 195
    CEFBS_None, // G_FABS = 196
    CEFBS_None, // G_FCOPYSIGN = 197
    CEFBS_None, // G_IS_FPCLASS = 198
    CEFBS_None, // G_FCANONICALIZE = 199
    CEFBS_None, // G_FMINNUM = 200
    CEFBS_None, // G_FMAXNUM = 201
    CEFBS_None, // G_FMINNUM_IEEE = 202
    CEFBS_None, // G_FMAXNUM_IEEE = 203
    CEFBS_None, // G_FMINIMUM = 204
    CEFBS_None, // G_FMAXIMUM = 205
    CEFBS_None, // G_GET_FPENV = 206
    CEFBS_None, // G_SET_FPENV = 207
    CEFBS_None, // G_RESET_FPENV = 208
    CEFBS_None, // G_GET_FPMODE = 209
    CEFBS_None, // G_SET_FPMODE = 210
    CEFBS_None, // G_RESET_FPMODE = 211
    CEFBS_None, // G_PTR_ADD = 212
    CEFBS_None, // G_PTRMASK = 213
    CEFBS_None, // G_SMIN = 214
    CEFBS_None, // G_SMAX = 215
    CEFBS_None, // G_UMIN = 216
    CEFBS_None, // G_UMAX = 217
    CEFBS_None, // G_ABS = 218
    CEFBS_None, // G_LROUND = 219
    CEFBS_None, // G_LLROUND = 220
    CEFBS_None, // G_BR = 221
    CEFBS_None, // G_BRJT = 222
    CEFBS_None, // G_VSCALE = 223
    CEFBS_None, // G_INSERT_SUBVECTOR = 224
    CEFBS_None, // G_EXTRACT_SUBVECTOR = 225
    CEFBS_None, // G_INSERT_VECTOR_ELT = 226
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 227
    CEFBS_None, // G_SHUFFLE_VECTOR = 228
    CEFBS_None, // G_SPLAT_VECTOR = 229
    CEFBS_None, // G_VECTOR_COMPRESS = 230
    CEFBS_None, // G_CTTZ = 231
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 232
    CEFBS_None, // G_CTLZ = 233
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 234
    CEFBS_None, // G_CTPOP = 235
    CEFBS_None, // G_BSWAP = 236
    CEFBS_None, // G_BITREVERSE = 237
    CEFBS_None, // G_FCEIL = 238
    CEFBS_None, // G_FCOS = 239
    CEFBS_None, // G_FSIN = 240
    CEFBS_None, // G_FTAN = 241
    CEFBS_None, // G_FACOS = 242
    CEFBS_None, // G_FASIN = 243
    CEFBS_None, // G_FATAN = 244
    CEFBS_None, // G_FCOSH = 245
    CEFBS_None, // G_FSINH = 246
    CEFBS_None, // G_FTANH = 247
    CEFBS_None, // G_FSQRT = 248
    CEFBS_None, // G_FFLOOR = 249
    CEFBS_None, // G_FRINT = 250
    CEFBS_None, // G_FNEARBYINT = 251
    CEFBS_None, // G_ADDRSPACE_CAST = 252
    CEFBS_None, // G_BLOCK_ADDR = 253
    CEFBS_None, // G_JUMP_TABLE = 254
    CEFBS_None, // G_DYN_STACKALLOC = 255
    CEFBS_None, // G_STACKSAVE = 256
    CEFBS_None, // G_STACKRESTORE = 257
    CEFBS_None, // G_STRICT_FADD = 258
    CEFBS_None, // G_STRICT_FSUB = 259
    CEFBS_None, // G_STRICT_FMUL = 260
    CEFBS_None, // G_STRICT_FDIV = 261
    CEFBS_None, // G_STRICT_FREM = 262
    CEFBS_None, // G_STRICT_FMA = 263
    CEFBS_None, // G_STRICT_FSQRT = 264
    CEFBS_None, // G_STRICT_FLDEXP = 265
    CEFBS_None, // G_READ_REGISTER = 266
    CEFBS_None, // G_WRITE_REGISTER = 267
    CEFBS_None, // G_MEMCPY = 268
    CEFBS_None, // G_MEMCPY_INLINE = 269
    CEFBS_None, // G_MEMMOVE = 270
    CEFBS_None, // G_MEMSET = 271
    CEFBS_None, // G_BZERO = 272
    CEFBS_None, // G_TRAP = 273
    CEFBS_None, // G_DEBUGTRAP = 274
    CEFBS_None, // G_UBSANTRAP = 275
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 276
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 277
    CEFBS_None, // G_VECREDUCE_FADD = 278
    CEFBS_None, // G_VECREDUCE_FMUL = 279
    CEFBS_None, // G_VECREDUCE_FMAX = 280
    CEFBS_None, // G_VECREDUCE_FMIN = 281
    CEFBS_None, // G_VECREDUCE_FMAXIMUM = 282
    CEFBS_None, // G_VECREDUCE_FMINIMUM = 283
    CEFBS_None, // G_VECREDUCE_ADD = 284
    CEFBS_None, // G_VECREDUCE_MUL = 285
    CEFBS_None, // G_VECREDUCE_AND = 286
    CEFBS_None, // G_VECREDUCE_OR = 287
    CEFBS_None, // G_VECREDUCE_XOR = 288
    CEFBS_None, // G_VECREDUCE_SMAX = 289
    CEFBS_None, // G_VECREDUCE_SMIN = 290
    CEFBS_None, // G_VECREDUCE_UMAX = 291
    CEFBS_None, // G_VECREDUCE_UMIN = 292
    CEFBS_None, // G_SBFX = 293
    CEFBS_None, // G_UBFX = 294
    CEFBS_None, // PseudoLI = 295
    CEFBS_None, // PseudoRET = 296
    CEFBS_None, // ADDI = 297
    CEFBS_None, // FMUL = 298
    CEFBS_None, // JALR = 299
  };

  assert(Opcode < 300);
  return FeatureBitsets[RequiredFeaturesRefs[Opcode]];
}

} // end namespace Rymo_MC
} // end namespace llvm
#endif // GET_COMPUTE_FEATURES

#ifdef GET_AVAILABLE_OPCODE_CHECKER
#undef GET_AVAILABLE_OPCODE_CHECKER
namespace llvm {
namespace Rymo_MC {
bool isOpcodeAvailable(unsigned Opcode, const FeatureBitset &Features) {
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  FeatureBitset RequiredFeatures = computeRequiredFeatures(Opcode);
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  return !MissingFeatures.any();
}
} // end namespace Rymo_MC
} // end namespace llvm
#endif // GET_AVAILABLE_OPCODE_CHECKER

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace Rymo_MC {

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG

void verifyInstructionPredicates(
    unsigned Opcode, const FeatureBitset &Features) {
#ifndef NDEBUG
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  FeatureBitset RequiredFeatures = computeRequiredFeatures(Opcode);
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &RymoInstrNameData[RymoInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace Rymo_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

