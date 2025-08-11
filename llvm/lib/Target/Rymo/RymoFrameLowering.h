#ifndef LLVM_LIB_TARGET_RYMO_RYMOFRAMELOWERING_H
#define LLVM_LIB_TARGET_RYMO_RYMOFRAMELOWERING_H

#include "llvm/CodeGen/TargetFrameLowering.h"

namespace llvm {
class RymoSubtarget;

class RymoFrameLowering : public TargetFrameLowering {
  const RymoSubtarget &STI;

public:
  explicit RymoFrameLowering(const RymoSubtarget &STI)
      : TargetFrameLowering(TargetFrameLowering::StackGrowsDown, Align(4), 0,
                            Align(4)),
        STI(STI) {}

  void emitPrologue(MachineFunction &MF, MachineBasicBlock &MBB) const override;

  void emitEpilogue(MachineFunction &MF, MachineBasicBlock &MBB) const override;

  bool hasFP(const MachineFunction &MF) const override;
};
} // namespace llvm

#endif 