
//===-- RiscvVariantCallingConv.td - RiscvVariant Calling Conv -*- tablegen -*-===//
// This file defines the calling conventions for the RiscvVariant architecture.
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

// Include necessary TableGen utilities
include "llvm/Target/TargetCallingConv.td"

// Define the default calling convention
def CC_RiscvVariant : CallingConv<[
  // Arguments in R1, R2, R3; rest on stack
  CCIfType<[i32], CCAssignToRegister<[R1, R2, R3]>>,
  CCIfType<[i32], CCAssignToStack<4, 4>>
]>;

// Define return value convention
def RetCC_RiscvVariant : CallingConv<[
  CCIfType<[i32], CCAssignToRegister<[R1]>>
]>;

// Callee-saved registers
def CSR_RiscvVariant : CalleeSavedRegs<(add R4, R5, R6, R7, R8, R9, R10, R14)>;