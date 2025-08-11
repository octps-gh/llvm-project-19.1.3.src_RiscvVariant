//===-- RiscvVariantPassConfig.h - RiscvVariant Pass Config -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEPASSCONFIG_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEPASSCONFIG_H

#include "llvm/CodeGen/TargetPassConfig.h"

namespace llvm {

class RiscvVariantPassConfig : public TargetPassConfig {
public:
  RiscvVariantPassConfig(TargetMachine *TM, PassManagerBase &PM)
      : TargetPassConfig(TM, PM) {}

  void addIRPasses() override;
  void addCodeGenPrepare() override;
  void addISelPrepare() override;
  void addPreRegAlloc() override;
  void addPostRegAlloc() override;
  void addPreEmitPass() override;
};

} // namespace llvm

#endif