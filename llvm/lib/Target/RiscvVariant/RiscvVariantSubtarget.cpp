//===-- RiscvVariantSubtarget.cpp - RiscvVariant Subtarget -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantSubtarget.h"
#include "llvm/IR/Module.h"

using namespace llvm;

#define GET_SUBTARGETINFO_CTOR
#include "RiscvVariantGenSubtargetInfo.inc"

RiscvVariantSubtarget::RiscvVariantSubtarget(const Triple &TT, StringRef CPU,
                                       StringRef FS, const TargetMachine &TM)
    : TargetSubtargetInfo(TT, CPU, FS, TM),
      FrameLowering(),
      InstrInfo(),
      RegInfo(),
      TLInfo(*static_cast<const RiscvVariantTargetMachine *>(&TM), *this) {}