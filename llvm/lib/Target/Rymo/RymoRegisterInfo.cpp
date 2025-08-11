#include "RymoRegisterInfo.h"
#include "MCTargetDesc/RymoMCTargetDesc.h"
#include "RymoSubtarget.h"

using namespace llvm;

#define GET_REGINFO_TARGET_DESC
#include "RymoGenRegisterInfo.inc"

using namespace Rymo;

RymoRegisterInfo::RymoRegisterInfo() : RymoGenRegisterInfo(Rymo::X1) {}

const MCPhysReg *
RymoRegisterInfo::getCalleeSavedRegs(const MachineFunction *MF) const {
  static const MCPhysReg CalleeSavedRegs[] = {Rymo::X2, 0};
  return CalleeSavedRegs;
}

BitVector RymoRegisterInfo::getReservedRegs(const MachineFunction &MF) const {
  BitVector Reserved(getNumRegs());
  Reserved.set(Rymo::X0);
  return Reserved;
}

bool RymoRegisterInfo::eliminateFrameIndex(MachineBasicBlock::iterator II,
                                             int SPAdj, unsigned FIOperandNum,
                                             RegScavenger *RS) const {
  return false;
}

Register RymoRegisterInfo::getFrameRegister(const MachineFunction &MF) const {
  return Rymo::X2;
}