//===-- RiscvVariantRegisterInfo.td - RiscvVariant Registers -*- tablegen -*-===//
// This file defines the register set for the RISCVLike architecture.
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

// Include necessary TableGen utilities
include "llvm/Target/Target.td"

// Define the 32-bit general-purpose register class
def GR32 : RegisterClass<"RiscvVariant", [i32], 32, (sequence "R%u", 0, 15)> {
  let MethodProtos = [{
    iterator regclass_iterator();
    unsigned getNumRegs() { return 16; }
  }];
}

// Define individual registers
def R0 : Register<"R0">; // Zero register
def R1 : Register<"R1">; // Argument/Return register
def R2 : Register<"R2">; // Argument/Return register
def R3 : Register<"R3">; // Argument/Return register
def R4 : Register<"R4">; // Callee-saved
def R5 : Register<"R5">; // Callee-saved
def R6 : Register<"R6">; // Callee-saved
def R7 : Register<"R7">; // Callee-saved
def R8 : Register<"R8">; // Callee-saved
def R9 : Register<"R9">; // Callee-saved
def R10 : Register<"R10">; // Callee-saved
def R11 : Register<"R11">; // Caller-saved
def R12 : Register<"R12">; // Caller-saved
def R13 : Register<"R13">; // Caller-saved
def R14 : Register<"R14">; // Frame pointer
def R15 : Register<"R15">; // Stack pointer

// Define callee-saved registers
def CalleeSavedRegs : RegisterClass<"RiscvVariant", [i32], 32, (add R4, R5, R6, R7, R8, R9, R10, R14)>;