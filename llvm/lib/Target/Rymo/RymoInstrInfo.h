#ifndef LLVM_LIB_TARGET_RYMO_RYMOINSTRINFO_H
#define LLVM_LIB_TARGET_RYMO_RYMOINSTRINFO_H

#include "llvm/CodeGen/TargetInstrInfo.h"

#define GET_INSTRINFO_HEADER
#include "RymoGenInstrInfo.inc"

namespace llvm {

class RymoSubtarget;

class RymoInstrInfo : public  RymoGenInstrInfo {
  const RymoSubtarget &STI;

public:
  explicit  RymoInstrInfo(RymoSubtarget &STI);
};

} // namespace llvm

#endif