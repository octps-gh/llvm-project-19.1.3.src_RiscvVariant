
//===-- RiscvVariantFrameLowering.h - RiscvVariant Frame Lowering -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEFRAMELOWERING_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEFRAMELOWERING_H

#include "llvm/CodeGen/TargetFrameLowering.h"

namespace llvm {

class RiscvVariantFrameLowering : public TargetFrameLowering {
public:
  RiscvVariantFrameLowering();

  void emitPrologue(MachineFunction &MF, MachineBasicBlock &MBB) const override;
  void emitEpilogue(MachineFunction &MF, MachineBasicBlock &MBB) const override;
  bool hasFP(const MachineFunction &MF) const override;
};

} // namespace llvm

#endif