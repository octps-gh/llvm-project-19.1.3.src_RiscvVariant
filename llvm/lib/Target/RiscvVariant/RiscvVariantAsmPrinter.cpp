//===-- RiscvVariantAsmPrinter.cpp - RiscvVariant Assembly Printer -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantAsmPrinter.h"
#include "RiscvVariant.h"
#include "llvm/CodeGen/MachineInstr.h"

using namespace llvm;

#define GET_INSTRMAP_INFO
#include "RiscvVariantGenInstrInfo.inc"

void RiscvVariantAsmPrinter::emitInstruction(const MachineInstr *MI) {
  RiscvVariantMCInstLower Lower(MF, *this);
  MCInst MCI;
  Lower.lower(MI, MCI);
  EmitToStreamer(*OutStreamer, MCI);
}