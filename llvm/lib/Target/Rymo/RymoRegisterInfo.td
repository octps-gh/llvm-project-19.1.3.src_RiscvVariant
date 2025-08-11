class RymoReg<bits<5> Enc, string n, list<string> alt = []> : Register<n> {
  let HWEncoding{4-0} = Enc;
  let Namespace = "Rymo";
  let AltNames = alt;
}

def ABIRegAltName : RegAltNameIndex;

let RegAltNameIndices = [ABIRegAltName] in {
  let isConstant = true in {
    def X0  : RymoReg<0, "x0", ["zero"]>;
  }
  def X1  : RymoReg<1,  "x1",  ["ra"]>;
  def X2  : RymoReg<2,  "x2",  ["sp"]>;
  def X3  : RymoReg<3,  "x3",  ["gp"]>;
  def X4  : RymoReg<4,  "x4",  ["tp"]>;
  def X5  : RymoReg<5,  "x5",  ["t0"]>;
  def X6  : RymoReg<6,  "x6",  ["t1"]>;
  def X7  : RymoReg<7,  "x7",  ["t2"]>;
  def X8  : RymoReg<8,  "x8",  ["s0", "fp"]>;
  def X9  : RymoReg<9,  "x9",  ["s1"]>;
  def X10 : RymoReg<10, "x10", ["a0"]>;
  def X11 : RymoReg<11, "x11", ["a1"]>;
  def X12 : RymoReg<12, "x12", ["a2"]>;
  def X13 : RymoReg<13, "x13", ["a3"]>;
  def X14 : RymoReg<14, "x14", ["a4"]>;
  def X15 : RymoReg<15, "x15", ["a5"]>;
  def X16 : RymoReg<16, "x16", ["a6"]>;
  def X17 : RymoReg<17, "x17", ["a7"]>;
  def X18 : RymoReg<18, "x18", ["s2"]>;
  def X19 : RymoReg<19, "x19", ["s3"]>;
  def X20 : RymoReg<20, "x20", ["s4"]>;
  def X21 : RymoReg<21, "x21", ["s5"]>;
  def X22 : RymoReg<22, "x22", ["s6"]>;
  def X23 : RymoReg<23, "x23", ["s7"]>;
  def X24 : RymoReg<24, "x24", ["s8"]>;
  def X25 : RymoReg<25, "x25", ["s9"]>;
  def X26 : RymoReg<26, "x26", ["s10"]>;
  def X27 : RymoReg<27, "x27", ["s11"]>;
  def X28 : RymoReg<28, "x28", ["t3"]>;
  def X29 : RymoReg<29, "x29", ["t4"]>;
  def X30 : RymoReg<30, "x30", ["t5"]>;
  def X31 : RymoReg<31, "x31", ["t6"]>;
}

def GPR : RegisterClass<"Rymo", [i32], 32, (add 
    (sequence "X%u", 0, 31)
)>;