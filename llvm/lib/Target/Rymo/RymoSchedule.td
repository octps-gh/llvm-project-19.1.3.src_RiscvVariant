//=-RymoSchedule.td - Rymo Scheduling Definitions --*- tablegen -*-=========//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

def ALUZ_FU : FuncUnit;
def LDST_FU : FuncUnit;
def CGPU_FU : FuncUnit;


def IIC_ALU  : InstrItinClass;
def IIC_LD   : InstrItinClass;
def IIC_ST   : InstrItinClass;
def IIC_LDSW : InstrItinClass;
def IIC_STSW : InstrItinClass;
def IIC_RD  : InstrItinClass;
//syntax to use:
//InstrStage<Cycles, Units, TimeInc>
def RymoItinerary : ProcessorItineraries<[ALUZ_FU, LDST_FU, CGPU_FU],[],[
  InstrItinData<IIC_LD,   [InstrStage<1, [LDST_FU]>]>,
  InstrItinData<IIC_ST,   [InstrStage<1, [LDST_FU]>]>,
  InstrItinData<IIC_LDSW, [InstrStage<2, [LDST_FU]>]>,
  InstrItinData<IIC_STSW, [InstrStage<2, [LDST_FU]>]>,
  InstrItinData<IIC_ALU,  [InstrStage<1, [ALUZ_FU]>]>,
  InstrItinData<IIC_RD,   [InstrStage<10, [CGPU_FU]>]>
]>;

def  RymoSchedModel : SchedMachineModel {
  // Cycles for loads to access the cache [default = -1]
  let LoadLatency = 2;

  // Max micro-ops that can be buffered for optimized loop dispatch/execution.
  // [default = -1]
  let LoopMicroOpBufferSize = 0;

  // Allow scheduler to assign default model to any unrecognized opcodes.
  // [default = 1]
  let CompleteModel = 0;

  // Max micro-ops that may be scheduled per cycle. [default = 1]
  let IssueWidth = 1;

  // Extra cycles for a mispredicted branch. [default = -1]
  let MispredictPenalty = 10;

  // Enable Post RegAlloc Scheduler pass. [default = 0]
  let PostRAScheduler = 0;

  // Max micro-ops that can be buffered. [default = -1]
  let MicroOpBufferSize = 0;

  // Per-cycle resources tables. [default = NoItineraries]
  let Itineraries = RymoItinerary;
}
//这行代码定义了一个处理器资源，这是在为 LLVM 目标后端描
//绘处理器的执行资源时使用的声明
def ALU : ProcResource<1> { let BufferSize = 0; }
def LdSt : ProcResource<1> { let BufferSize = 0; }
def FALU : ProcResource<1> { let BufferSize = 0; }

//def ALU0 : ProcResource<1>;  // ALU Unit 0
//def ALU1 : ProcResource<1>;  // ALU Unit 1
//def MemUnit : ProcResource<1>;  // Memory Unit
//def MultUnit : ProcResource<1>;  // Multiplier Unit
//
//def ALUWrite : SchedWriteRes<[ALU0, ALU1]> {
//  let Latency = 1;          // 1-cycle latency
//  let ResourceCycles = [1, 1];  // Uses 1 cycle of ALU0 or ALU1
//}

//为指令的每个操作数分配调度资源，确定输入输出操作数
def WriteLD   : SchedWrite;
def WriteST   : SchedWrite;
def WriteLDSW : SchedWrite;
def WriteSTSW : SchedWrite;
def WriteALU  : SchedWrite;
def WriteFALU  : SchedWrite;
//将其填充到真实的指令中, e.g
//def MUL : ALU_rr<0b0000001, 0b000, "mul">,
// Sched<[WriteIMul, ReadIMul, ReadIMul]>;
 

let SchedModel = RymoSchedModel in {
  def : WriteRes<WriteLD, [LdSt]>   { let Latency = 2; }
  def : WriteRes<WriteST, [LdSt]>   { let Latency = 2; }
  def : WriteRes<WriteLDSW, [LdSt]> { let Latency = 2; }
  def : WriteRes<WriteSTSW, [LdSt]> { let Latency = 4; }
  def : WriteRes<WriteALU, [ALU]>   { let Latency = 1; }
  def : WriteRes<WriteFALU, [FALU]>   { let Latency = 1; }
}

//===  for study copy.
//Instructions with similar scheduling properties are grouped into scheduling 
//classes using Sched predicates.
//====
//def : Sched<[WriteALU, ReadALU, ReadALU]> {
//  let Latency = 1; // 1 cycle latency
//  let NumMicroOps = 1; // 1 micro-op
//  let ResourceCycles = [1]; // Uses ALU for 1 cycle
//}
//def : Sched<[WriteFPU, ReadFPU, ReadFPU]> {
//  let Latency = 4; // 4 cycle latency
//  let NumMicroOps = 2; // Decomposes into 2 micro-ops
//  let ResourceCycles = [2, 2]; // Uses FPU for 2 cycles per micro-op
//}
