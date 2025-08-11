#ifndef LLVM_LIB_TARGET_RYMO_ARMASMPRINTER_H
#define LLVM_LIB_TARGET_RYMO_ARMASMPRINTER_H

#include "RymoMCInstLower.h"
#include "llvm/CodeGen/AsmPrinter.h"

namespace llvm {

class LLVM_LIBRARY_VISIBILITY RymoAsmPrinter : public AsmPrinter {
  RymoMCInstLower MCInstLowering;

public:
  explicit RymoAsmPrinter(TargetMachine &TM,
                            std::unique_ptr<MCStreamer> Streamer);

  StringRef getPassName() const override { return "Rymo Assembly Printer"; }

  void emitInstruction(const MachineInstr *MI) override;

private:
  bool emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                                   const MachineInstr *MI);
};
} // end namespace llvm

#endif