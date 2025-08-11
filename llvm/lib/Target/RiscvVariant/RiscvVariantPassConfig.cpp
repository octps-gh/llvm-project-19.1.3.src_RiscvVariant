//===-- RiscvVariantPassConfig.cpp - RiscvVariant Pass Config -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantPassConfig.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/RegAllocRegistry.h"

using namespace llvm;

void RiscvVariantPassConfig::addIRPasses() {
  addPass(createDeadCodeEliminationPass());
}

void RiscvVariantPassConfig::addCodeGenPrepare() {
  TargetPassConfig::addCodeGenPrepare();
}

void RiscvVariantPassConfig::addISelPrepare() {
  TargetPassConfig::addISelPrepare();
}

void RiscvVariantPassConfig::addPreRegAlloc() {
  addPass(createExpandPostRAPass());
}

void RISCVLikePassConfig::addPostRegAlloc() {
  addPass(createBranchRelaxationPass());
}

void RISCVLikePassConfig::addPreEmitPass() {
  addPass(createMachineCopyPropagationPass());
}