#===-- RiscvVariant/MCTargetDesc/CMakeLists.txt -*- cmake -*-===#
#
# The LLVM Compiler Infrastructure
# This file is distributed under the University of Illinois Open Source License.
#===----------------------------------------------------------------------===#

add_llvm_component_library(LLVMRiscvVariantDesc
  RiscvVariantMCAsmInfo.cpp
  RiscvVariantMCTargetDesc.cpp
  RiscvVariantMCCodeEmitter.cpp
)