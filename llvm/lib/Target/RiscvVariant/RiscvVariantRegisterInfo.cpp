
//===-- RiscvVariantRegisterInfo.cpp - RiscvVariant Register Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantRegisterInfo.h"
#include "RiscvVariantSubtarget.h"
#include "llvm/CodeGen/MachineFrameInfo.h"

using namespace llvm;

#define GET_REGINFO_TARGET_DESC
#include "RiscvVariantGenRegisterInfo.inc"

RiscvVariantRegisterInfo::RiscvVariantRegisterInfo() : TargetRegisterInfo() {}

const MCPhysReg *RiscvVariantRegisterInfo::getCalleeSavedRegs(const MachineFunction *MF) const {
  static const MCPhysReg CalleeSaved[] = {
      RiscvVariant::R4, RiscvVariant::R5, RiscvVariant::R6, RiscvVariant::R7,
      RiscvVariant::R8, RiscvVariant::R9, RiscvVariant::R10, RiscvVariant::R14, 0
  };
  return CalleeSaved;
}

BitVector RiscvVariantRegisterInfo::getReservedRegs(const MachineFunction &MF) const {
  BitVector Reserved(getNumRegs());
  Reserved.set(RiscvVariant::R0); // Zero register
  Reserved.set(RiscvVariant::R14); // Frame pointer
  Reserved.set(RiscvVariant::R15); // Stack pointer
  return Reserved;
}

void RiscvVariantRegisterInfo::eliminateFrameIndex(MachineBasicBlock::iterator MI,
                                                int SPAdj, unsigned FIOperandNum,
                                                RegScavenger *RS) const {
  // Implement frame index elimination
}

Register RiscvVariantRegisterInfo::getFrameRegister(const MachineFunction &MF) const {
  return RiscvVariant::R14;
}