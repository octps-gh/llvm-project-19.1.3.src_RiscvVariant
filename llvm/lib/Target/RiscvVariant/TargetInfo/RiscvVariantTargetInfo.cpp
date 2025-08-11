//===-- RiscvVariantTargetInfo.cpp - RiscvVariant Target Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RISCVLikeMCTargetDesc.h"
#include "llvm/Support/TargetRegistry.h"

using namespace llvm;

Target &getTheRiscvVariantTarget() {
  static Target TheRiscvVariantTarget;
  return TheRiscvVariantTarget;
}

//Triple::rvVar32
extern "C" void LLVMInitializeRiscvVariantTargetInfo() {
  RegisterTarget<Triple::rvVar32, /*HasJIT=*/false> X(
      getTheRISCVLikeTarget(), "riscvlike", "RISCVLike", "RISCVLike");
}