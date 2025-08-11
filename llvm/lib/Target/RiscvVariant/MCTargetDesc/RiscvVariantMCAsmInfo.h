//===-- RiscvVariantMCAsmInfo.h - RiscvVariant Asm Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCASINFO_H
#define LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCASINFO_H

#include "llvm/MC/MCAsmInfoELF.h"

namespace llvm {

class RiscvVariantMCAsmInfo : public MCAsmInfoELF {
public:
  explicit RiscvVariantMCAsmInfo(const Triple &TT);
};

} // namespace llvm

#endif