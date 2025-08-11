//===-- RiscvVariantMCAsmInfo.cpp - RiscvVariant Asm Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantMCAsmInfo.h"
#include "llvm/MC/MCTargetOptions.h"

using namespace llvm;

RiscvVariantMCAsmInfo::RiscvVariantMCAsmInfo(const Triple &TT) : MCAsmInfoELF(TT) {
  CodePointerSize = 4;
  CalleeSaveStackSlotSize = 4;
}