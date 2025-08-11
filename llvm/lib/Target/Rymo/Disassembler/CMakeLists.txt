add_llvm_component_library(LLVMRymoDisassembler
  RymoDisassembler.cpp

  LINK_COMPONENTS
  MC
  MCDisassembler
  RymoDesc
  RymoInfo
  Support

  ADD_TO_COMPONENT
  Rymo
  )