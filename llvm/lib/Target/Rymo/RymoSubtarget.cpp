#include "RymoSubtarget.h"

using namespace llvm;

#define DEBUG_TYPE "Rymo-subtarget"

#define GET_SUBTARGETINFO_TARGET_DESC
#define GET_SUBTARGETINFO_CTOR
#include "RymoGenSubtargetInfo.inc"

void RymoSubtarget::anchor() {}

RymoSubtarget &
RymoSubtarget::initializeSubtargetDependencies(StringRef CPU, StringRef FS,
                                                 const TargetMachine &TM) {
  if (CPU.empty()) {
    CPU = "Rymo";
  }
  ParseSubtargetFeatures(CPU, /*TuneCPU*/ CPU, FS);

  return *this;
}

RymoSubtarget::RymoSubtarget(const Triple &TT, const std::string &CPU,
                                 const std::string &FS, const TargetMachine &TM)
    : RymoGenSubtargetInfo(TT, CPU, /*TuneCPU*/ CPU, FS),
      FrameLowering(initializeSubtargetDependencies(CPU, FS, TM)),
      InstrInfo(*this), TLInfo(TM, *this), RegInfo() {}