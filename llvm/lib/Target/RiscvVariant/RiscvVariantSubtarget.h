//===-- RiscvVariantSubtarget.h - RiscvVariant Subtarget -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKESUBTARGET_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKESUBTARGET_H

#include "RiscvVariantFrameLowering.h"
#include "RiscvVariantISelLowering.h"
#include "RiscvVariantInstrInfo.h"
#include "RiscvVariantRegisterInfo.h"
#include "llvm/CodeGen/TargetSubtargetInfo.h"

#define GET_SUBTARGETINFO_HEADER
#include "RiscvVariantGenSubtargetInfo.inc"

namespace llvm {

class RiscvVariantSubtarget : public TargetSubtargetInfo {
  RiscvVariantFrameLowering 	FrameLowering;
  RiscvVariantInstrInfo 		InstrInfo;
  RiscvVariantRegisterInfo 		RegInfo;
  RiscvVariantTargetLowering 	TLInfo;

public:
  RiscvVariantSubtarget(const Triple &TT, StringRef CPU, StringRef FS,
                     const TargetMachine &TM);

  const TargetFrameLowering *getFrameLowering() const override {
    return &FrameLowering;
  }
  const TargetInstrInfo *getInstrInfo() const override {
    return &InstrInfo;
  }
  const TargetRegisterInfo *getRegisterInfo() const override {
    return &RegInfo;
  }
  const RISCVLikeTargetLowering *getTargetLowering() const override {
    return &TLInfo;
  }
};

} // namespace llvm

#endif