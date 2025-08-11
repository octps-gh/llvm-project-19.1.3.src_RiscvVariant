//===-- RiscvVariantFrameLowering.cpp - RiscvVariant Frame Lowering -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantFrameLowering.h"
#include "RiscvVariantSubtarget.h"
#include "llvm/CodeGen/MachineFunction.h"

using namespace llvm;

RiscvVariantFrameLowering::RiscvVariantFrameLowering()
    : TargetFrameLowering(StackGrowsDown, Align(4), 0) {}

void RiscvVariantFrameLowering::emitPrologue(MachineFunction &MF, MachineBasicBlock &MBB) const {
  // Implement prologue emission
}

void RiscvVariantFrameLowering::emitEpilogue(MachineFunction &MF, MachineBasicBlock &MBB) const {
  // Implement epilogue emission
}

bool RiscvVariantFrameLowering::hasFP(const MachineFunction &MF) const {
  return true;
}