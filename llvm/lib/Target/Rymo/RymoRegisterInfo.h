#ifndef LLVM_LIB_TARGET_RYMO_RYMOREGISTERINFO_H
#define LLVM_LIB_TARGET_RYMO_RYMOREGISTERINFO_H

#define GET_REGINFO_HEADER
#include "RymoGenRegisterInfo.inc"

namespace llvm {
struct RymoRegisterInfo : public RymoGenRegisterInfo {
  RymoRegisterInfo();

  const MCPhysReg *getCalleeSavedRegs(const MachineFunction *MF) const override;

  BitVector getReservedRegs(const MachineFunction &MF) const override;

  bool eliminateFrameIndex(MachineBasicBlock::iterator II, int SPAdj,
                           unsigned FIOperandNum,
                           RegScavenger *RS = nullptr) const override;

  Register getFrameRegister(const MachineFunction &MF) const override;
};

} // namespace llvm

#endif