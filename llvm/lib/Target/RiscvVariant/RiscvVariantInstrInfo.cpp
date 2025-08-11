//===-- RiscvVariantInstrInfo.cpp - RiscvVariant Instruction Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantInstrInfo.h"
#include "RiscvVariantTargetMachine.h"
#include "llvm/CodeGen/MachineInstrBuilder.h"

using namespace llvm;

#define GET_INSTRINFO_CTOR_DTOR
#include "RiscvVariantGenInstrInfo.inc"

RiscvVariantInstrInfo::RiscvVariantInstrInfo(const RISCVLikeSubtarget &STI)
    : TargetInstrInfo() {}

void RiscvVariantInstrInfo::copyPhysReg(MachineBasicBlock &MBB,
                                     MachineBasicBlock::iterator I,
                                     const DebugLoc &DL, MCRegister DestReg,
                                     MCRegister SrcReg, bool KillSrc) const {
  BuildMI(MBB, I, DL, get(RiscvVariant::ADD))
      .addReg(DestReg, RegState::Define)
      .addReg(SrcReg, KillSrc ? RegState::Kill : 0)
      .addReg(RiscvVariant::R0); // R0 is zero
}