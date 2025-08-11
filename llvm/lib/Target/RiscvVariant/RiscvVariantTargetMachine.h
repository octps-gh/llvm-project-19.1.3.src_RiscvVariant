//===-- RiscvVariantTargetMachine.h - RiscvVariant Target Machine -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKETARGETMACHINE_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKETARGETMACHINE_H

#include "RiscvVariantSubtarget.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {

class RiscvVariantTargetMachine : public LLVMTargetMachine {
  RiscvVariantSubtarget Subtarget;

public:
  RiscvVariantTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                         StringRef FS, const TargetOptions &Options,
                         Reloc::Model RM, CodeModel::Model CM,
                         CodeGenOpt::Level OL, bool JIT);

  const RiscvVariantSubtarget *getSubtargetImpl(const Function &) const override {
    return &Subtarget;
  }

  TargetLowering *getTargetLowering() const override;
  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
};

} // namespace llvm

#endif