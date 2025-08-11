//===-- RiscvVariantAsmPrinter.h - RiscvVariant Assembly Printer -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEASMPRINTER_H
#define LLVM_LIB_TARGET_RISCVLIKE_RISCVLIKEASMPRINTER_H

#include "llvm/CodeGen/AsmPrinter.h"

namespace llvm {

class RiscvVariantAsmPrinter : public AsmPrinter {
public:
  RiscvVariantAsmPrinter(TargetMachine &TM, std::unique_ptr<MCStreamer> Streamer)
      : AsmPrinter(TM, std::move(Streamer)) {}

  StringRef getPassName() const override { return "RiscvVariant Assembly Printer"; }
  void emitInstruction(const MachineInstr *MI) override;
};

} // namespace llvm

#endif