def RetCC_Rymo : CallingConv<[
  CCIfType<[i32], CCAssignToReg<[X10, X11]>>,
]>;