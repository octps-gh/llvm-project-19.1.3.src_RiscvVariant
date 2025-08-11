
//===-- RiscvVariantInstrInfo.h - RiscvVariant Instruction Info -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEINSTRINFO_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEINSTRINFO_H

#include "RiscvVariantRegisterInfo.h"
#include "llvm/CodeGen/TargetInstrInfo.h"

#define GET_INSTRINFO_HEADER
#include "RiscvVariantGenInstrInfo.inc"

namespace llvm {

class RiscvVariantInstrInfo : public TargetInstrInfo {
public:
  RiscvVariantInstrInfo(const RRiscvVariantSubtarget &STI);

  void copyPhysReg(MachineBasicBlock &MBB, MachineBasicBlock::iterator I,
                   const DebugLoc &DL, MCRegister DestReg, MCRegister SrcReg,
                   bool KillSrc) const override;
};

} // namespace llvm

#endif