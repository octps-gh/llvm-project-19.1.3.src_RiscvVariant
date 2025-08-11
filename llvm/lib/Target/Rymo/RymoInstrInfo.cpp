#include "RymoInstrInfo.h"
#include "MCTargetDesc/RymoMCTargetDesc.h"

using namespace llvm;

#define GET_INSTRINFO_CTOR_DTOR
#include "RymoGenInstrInfo.inc"

RymoInstrInfo::RymoInstrInfo(RymoSubtarget &STI)
    : RymoGenInstrInfo(), STI(STI) {}