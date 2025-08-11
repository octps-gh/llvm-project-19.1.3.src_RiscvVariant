#ifndef LLVM_LIB_TARGET_RYMO_RYMOSubtarget_H
#define LLVM_LIB_TARGET_RYMO_RYMOSubtarget_H

#include "RymoFrameLowering.h"
#include "RymoISelLowering.h"
#include "RymoInstrInfo.h"
#include "RymoRegisterInfo.h"
#include "llvm/CodeGen/SelectionDAGTargetInfo.h"

#define GET_SUBTARGETINFO_HEADER
#include "RymoGenSubtargetInfo.inc"
//
namespace llvm {
class StringRef;

class RymoSubtarget : public RymoGenSubtargetInfo {
private:
  virtual void anchor();

  RymoFrameLowering FrameLowering;
  RymoInstrInfo InstrInfo;
  RymoTargetLowering TLInfo;
  RymoRegisterInfo RegInfo;
  SelectionDAGTargetInfo TSInfo;

public:
  RymoSubtarget(const Triple &TT, const std::string &CPU,
                  const std::string &FS, const TargetMachine &TM);

  RymoSubtarget &initializeSubtargetDependencies(StringRef CPU, StringRef FS,
                                                   const TargetMachine &TM);

  const RymoInstrInfo *getInstrInfo() const override { return &InstrInfo; }

  const RymoFrameLowering *getFrameLowering() const override {
    return &FrameLowering;
  }

  const RymoTargetLowering *getTargetLowering() const override {
    return &TLInfo;
  }

  const RymoRegisterInfo *getRegisterInfo() const override {
    return &RegInfo;
  }

  const SelectionDAGTargetInfo *getSelectionDAGInfo() const override {
    return &TSInfo;
  }

  void ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS);
};
} // namespace llvm

#endif