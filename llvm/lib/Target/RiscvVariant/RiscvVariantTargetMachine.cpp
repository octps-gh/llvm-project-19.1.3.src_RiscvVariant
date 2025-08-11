//===-- RiscvVariantTargetMachine.cpp - RiscvVariant Target Machine -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantTargetMachine.h"
#include "RiscvVariantISelLowering.h"
#include "RiscvVariantPassConfig.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/IR/Module.h"

using namespace llvm;

RiscvVariantTargetMachine::RiscvVariantTargetMachine(
    const Target &T, const Triple &TT, StringRef CPU, StringRef FS,
    const TargetOptions &Options, Reloc::Model RM, CodeModel::Model CM,
    CodeGenOpt::Level OL, bool JIT)
    : LLVMTargetMachine(T, "e-m:e-p:32:32-i32:32", TT, CPU, FS, Options, RM, CM, OL),
      Subtarget(TT, CPU, FS, *this) {
  initAsmInfo();
}

TargetLowering *RiscvVariantTargetMachine::getTargetLowering() const {
  return new RiscvVariantTargetLowering(*this, Subtarget);
}

TargetPassConfig *RiscvVariantTargetMachine::createPassConfig(PassManagerBase &PM) {
  return new RiscvVariantPassConfig(this, PM);
}

extern "C" void LLVMInitializeRiscvVariantTarget() {
  RegisterTargetMachine<RiscvVariantTargetMachine> X(getTheRiscvVariantTarget());
}