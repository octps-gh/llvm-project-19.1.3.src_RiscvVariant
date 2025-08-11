
//===-- RiscvVariantISelLowering.cpp - RiscvVariant Lowering -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantISelLowering.h"
#include "RiscvVariantMachineFunction.h"
#include "RiscvVariantSubtarget.h"
#include "RiscvVariantTargetMachine.h"
#include "llvm/CodeGen/CallingConvLower.h"
#include "llvm/CodeGen/MachineFunction.h"
#include "llvm/CodeGen/SelectionDAG.h"

#include "RiscvVariantGenCallingConv.inc"
using namespace llvm;

#define DEBUG_TYPE "riscvvariant-lower"

RiscvVariantTargetLowering::RiscvVariantTargetLowering(const RiscvVariantTargetMachine &TM,
                                                 const RiscvVariantSubtarget &STI)
    : TargetLowering(TM) {
  // Set up the register classes
  addRegisterClass(MVT::i32, &RiscvVariant::GR32RegClass);

  // Set operation actions
  setOperationAction(ISD::ADD, MVT::i32, Legal);
  setOperationAction(ISD::MUL, MVT::i32, Legal);
  setOperationAction(ISD::BR_CC, MVT::i32, Legal);
  setOperationAction(ISD::CALL, MVT::Other, Custom);
  setOperationAction(ISD::RET, MVT::Other, Custom);

  computeRegisterProperties(STI.getRegisterInfo());
}

const char *RiscvVariantTargetLowering::getTargetNodeName(unsigned Opcode) const {
  switch (static_cast<RiscvVariantISD::NodeType>(Opcode)) {
  case RiscvVariantISD::CALL:
    return "RiscvVariantISD::CALL";
  case RiscvVariantISD::RET:
    return "RiscvVariantISD::RET";
  default:
    return nullptr;
  }
}

