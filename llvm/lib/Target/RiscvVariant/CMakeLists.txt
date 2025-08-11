#===-- RiscvVariant/CMakeLists.txt - iscvVariant Backend -*- cmake -*-===#
#
# The LLVM Compiler Infrastructure
# This file is distributed under the University of Illinois Open Source License.
#===----------------------------------------------------------------------===#

add_llvm_component_group(RiscvVariant)

set(LLVM_TARGET_DEFINITIONS RiscvVariant.td)

tablegen(LLVM RiscvVariantGenAsmMatcher.inc -gen-asm-matcher)
tablegen(LLVM RiscvVariantGenAsmWriter.inc -gen-asm-writer)
tablegen(LLVM RiscvVariantGenCallingConv.inc -gen-callingconv)
tablegen(LLVM RiscvVariantGenDAGISel.inc -gen-dag-isel)
tablegen(LLVM RiscvVariantGenInstrInfo.inc -gen-instr-info)
tablegen(LLVM RiscvVariantGenMCCodeEmitter.inc -gen-emitter)
tablegen(LLVM RiscvVariantGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM RiscvVariantGenSubtargetInfo.inc -gen-subtarget)
tablegen(LLVM RiscvVariantGenMCPseudoLowering.inc -gen-pseudo-lowering)
tablegen(LLVM RiscvVariantGenDisassemblerTables.inc -gen-disassembler)

add_public_tablegen_target(RiscvVariantCommonTableGen)


add_llvm_target(RiscvVariantCodeGen
  RiscvVariantTargetMachine.cpp
  RiscvVariantISelLowering.cpp
  RiscvVariantInstrInfo.cpp
  RiscvVariantRegisterInfo.cpp
  RiscvVariantFrameLowering.cpp
  RiscvVariantSubtarget.cpp
  RiscvVariantAsmPrinter.cpp
  RiscvVariantPassConfig.cpp
)

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)