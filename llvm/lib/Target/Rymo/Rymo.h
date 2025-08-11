#ifndef LLVM_LIB_TARGET_RYMO_RYMO_H
#define LLVM_LIB_TARGET_RYMO_RYMO_H

#include "llvm/Target/TargetMachine.h"

namespace llvm {

class RymoTargetMachine;
class FunctionPass;

FunctionPass *createRymoISelDag(RymoTargetMachine &TM,
                                  CodeGenOptLevel OptLevel);

} // namespace llvm

#endif
