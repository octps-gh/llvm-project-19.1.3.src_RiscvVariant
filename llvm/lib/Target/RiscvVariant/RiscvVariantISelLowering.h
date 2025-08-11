//===-- RiscvVariantISelLowering.h - RiscvVariant Lowering -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEISELLOWERING_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEISELLOWERING_H

#include "RiscvVariant.h"
#include "llvm/CodeGen/TargetLowering.h"

namespace llvm {

namespace RiscvVariantISD {
  enum NodeType {
    FIRST_NUMBER = ISD::BUILTIN_OP_END,
    CALL,
    RET
  };
}

class RiscvVariantTargetLowering : public TargetLowering {
public:
  RiscvVariantTargetLowering(const RiscvVariantTargetMachine &TM,
                          const RiscvVariantSubtarget &STI);

  const char *getTargetNodeName(unsigned Opcode) const override;
};

} // namespace llvm

#endif