/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Pseudo-instruction MC lowering Source Fragment                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool RymoAsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
  default: return false;
  case Rymo::PseudoRET: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(Rymo::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(Rymo::X0));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(Rymo::X1));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  }
  return true;
}

