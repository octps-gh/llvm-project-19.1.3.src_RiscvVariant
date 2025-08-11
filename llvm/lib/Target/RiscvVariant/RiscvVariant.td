//===-- RiscvVariant.td - RISCVLike Target Description -- tablegen --===// 
// This file provides the top-level target description for the RISCVLike architecture.// 
// The LLVM Compiler Infrastructure 
// This file is distributed under the University of Illinois Open Source License. //===----------------------------------------------------------------------===//

// Include necessary TableGen utilities 
include "llvm/Target/Target.td"
// Include sub-files
include "RiscvVariantRegisterInfo.td" 
include "RiscvVariantInstrInfo.td"
include "RiscvVariantCallingConv.td"

// Define the RiscvVariant target 
def RiscvVariant : Target {
 let InstructionSet = RiscvVariantInstrInfo;
 let RegisterInfo = RiscvVariantRegisterInfo; 
 let CallingConv = RiscvVariantCallingConv;
}

