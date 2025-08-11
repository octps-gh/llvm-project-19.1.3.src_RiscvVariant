#include "RymoFrameLowering.h"

using namespace llvm;

void RymoFrameLowering::emitPrologue(MachineFunction &MF,
                                       MachineBasicBlock &MBB) const {}

void RymoFrameLowering::emitEpilogue(MachineFunction &MF,
                                       MachineBasicBlock &MBB) const {}

bool RymoFrameLowering::hasFP(const MachineFunction &MF) const {
  return false;
}