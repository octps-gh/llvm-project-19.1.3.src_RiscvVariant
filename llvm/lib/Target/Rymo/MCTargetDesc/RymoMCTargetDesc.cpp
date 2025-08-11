#include "RymoMCTargetDesc.h"
#include "RymoInstPrinter.h"
#include "RymoMCAsmInfo.h"
#include "TargetInfo/RymoTargetInfo.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

#define GET_INSTRINFO_MC_DESC
#include "RymoGenInstrInfo.inc"

#define GET_SUBTARGETINFO_MC_DESC
#include "RymoGenSubtargetInfo.inc"

#define GET_REGINFO_MC_DESC
#include "RymoGenRegisterInfo.inc"

static MCAsmInfo *createRymoMCAsmInfo(const MCRegisterInfo &MRI,
                                        const Triple &TT,
                                        const MCTargetOptions &Options) {
  MCAsmInfo *MAI = new RymoMCAsmInfo(TT);
  return MAI;
}

static MCInstrInfo *createRymoMCInstrInfo() {
  MCInstrInfo *X = new MCInstrInfo();
  InitRymoMCInstrInfo(X);
  return X;
}

static MCRegisterInfo *createRymoMCRegisterInfo(const Triple &TT) {
  MCRegisterInfo *X = new MCRegisterInfo();
  InitRymoMCRegisterInfo(X, Rymo::X1);
  return X;
}

static MCSubtargetInfo *
createRymoMCSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS) {
  if (CPU.empty()) {
    CPU = "Rymo";
  }
  return createRymoMCSubtargetInfoImpl(TT, CPU, /*TuneCPU*/ CPU, FS);
}

static MCInstPrinter *createRymoMCInstPrinter(const Triple &T,
                                                unsigned SyntaxVariant,
                                                const MCAsmInfo &MAI,
                                                const MCInstrInfo &MII,
                                                const MCRegisterInfo &MRI) {
  return new RymoInstPrinter(MAI, MII, MRI);
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeRymoTargetMC() {
  for (Target *T : {&getTheRymoTarget()}) {
    TargetRegistry::RegisterMCAsmInfo(*T, createRymoMCAsmInfo);
    TargetRegistry::RegisterMCInstrInfo(*T, createRymoMCInstrInfo);
    TargetRegistry::RegisterMCSubtargetInfo(*T, createRymoMCSubtargetInfo);
    TargetRegistry::RegisterMCRegInfo(*T, createRymoMCRegisterInfo);
    TargetRegistry::RegisterMCInstPrinter(*T, createRymoMCInstPrinter);
    TargetRegistry::RegisterMCAsmBackend(*T, createRymoAsmBackend);
    TargetRegistry::RegisterMCCodeEmitter(*T, createRymoMCCodeEmitter);
  }
}