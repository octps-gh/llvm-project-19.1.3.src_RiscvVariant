/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MACRO
#undef GET_SUBTARGETINFO_MACRO
#endif // GET_SUBTARGETINFO_MACRO


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "RymoItinerary"
namespace RymoItineraryFU {
  const InstrStage::FuncUnits ALUZ_FU = 1ULL << 0;
  const InstrStage::FuncUnits LDST_FU = 1ULL << 1;
  const InstrStage::FuncUnits CGPU_FU = 1ULL << 2;
} // end namespace RymoItineraryFU

extern const llvm::InstrStage RymoStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned RymoOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned RymoForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary RymoItinerary[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 0, 0, 0, 0, 0 }, // 1 WriteALU
  { 0, 0, 0, 0, 0 }, // 2 WriteFALU
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, ReleaseAtCycle, AcquireAtCycle}
extern const llvm::MCWriteProcResEntry RymoWriteProcResTable[] = {
  { 0,  0,  0 }, // Invalid
  { 1,  1,   0}, // #1
  { 2,  1,   0} // #2
}; // RymoWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry RymoWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0} // #1 WriteALU_WriteFALU
}; // RymoWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry RymoReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // RymoReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc RymoSchedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("WriteALU")           1, false, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("WriteFALU")          1, false, false, false,  2, 1,  1, 1,  0, 0}, // #2
}; // RymoSchedModelSchedClasses

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  false, // EnableIntervals
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned RymoSchedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc RymoSchedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"ALU",             1, 0, 0, nullptr}, // #1
  {"FALU",            1, 0, 0, nullptr}, // #2
  {"LdSt",            1, 0, 0, nullptr}, // #3
};

static const llvm::MCSchedModel RymoSchedModel = {
  1, // IssueWidth
  0, // MicroOpBufferSize
  0, // LoopMicroOpBufferSize
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  10, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  false, // EnableIntervals
  1, // Processor ID
  RymoSchedModelProcResources,
  RymoSchedModelSchedClasses,
  4,
  3,
  RymoItinerary,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV RymoSubTypeKV[] = {
 { "rymo32", { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &RymoSchedModel },
};

namespace Rymo_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Rymo_MC

struct RymoGenMCSubtargetInfo : public MCSubtargetInfo {
  RymoGenMCSubtargetInfo(const Triple &TT,
    StringRef CPU, StringRef TuneCPU, StringRef FS,
    ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, TuneCPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, const MCInstrInfo *MCII,
      unsigned CPUID) const override {
    return Rymo_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
};

static inline MCSubtargetInfo *createRymoMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new RymoGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, std::nullopt, RymoSubTypeKV, 
                      RymoWriteProcResTable, RymoWriteLatencyTable, RymoReadAdvanceTable, 
                      RymoStages, RymoOperandCycles, RymoForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::RymoSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Rymo_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace Rymo_MC

struct RymoGenSubtargetInfo : public TargetSubtargetInfo {
  explicit RymoGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV RymoFeatureKV[];
extern const llvm::SubtargetSubTypeKV RymoSubTypeKV[];
extern const llvm::MCWriteProcResEntry RymoWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry RymoWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry RymoReadAdvanceTable[];
extern const llvm::InstrStage RymoStages[];
extern const unsigned RymoOperandCycles[];
extern const unsigned RymoForwardingPaths[];
RymoGenSubtargetInfo::RymoGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, std::nullopt, ArrayRef(RymoSubTypeKV, 1), 
                        RymoWriteProcResTable, RymoWriteLatencyTable, RymoReadAdvanceTable, 
                        RymoStages, RymoOperandCycles, RymoForwardingPaths) {}

unsigned RymoGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // RymoGenSubtargetInfo::resolveSchedClass

unsigned RymoGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return Rymo_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // RymoGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

