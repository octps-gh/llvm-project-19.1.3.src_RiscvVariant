#include "RymoInstPrinter.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCRegisterInfo.h"

using namespace llvm;

#define DEBUG_TYPE "asm-printer"

#define PRINT_ALIAS_INSTR
#include "RymoGenAsmWriter.inc"

void RymoInstPrinter::printInst(const MCInst *MI, uint64_t Address,
                                  StringRef Annot, const MCSubtargetInfo &STI,
                                  raw_ostream &O) {
  if (!printAliasInstr(MI, Address, O)) {
    printInstruction(MI, Address, O);
  }
}

void RymoInstPrinter::printOperand(const MCInst *MI, unsigned OpNo,
                                     raw_ostream &O, const char *Modifier) {
  assert((Modifier == nullptr || Modifier[0] == 0) && "No modifiers supported");
  const MCOperand &Op = MI->getOperand(OpNo);
  if (Op.isReg()) {
    O << getRegisterName(Op.getReg(), Rymo::ABIRegAltName);
  } else if (Op.isImm()) {
    O << formatImm((int32_t)Op.getImm());
  } else {
    assert(Op.isExpr() && "Expected an expression");
  }
}

const char *RymoInstPrinter::getRegisterName(MCRegister Reg) {
  return getRegisterName(Reg, Rymo::NoRegAltName);
}