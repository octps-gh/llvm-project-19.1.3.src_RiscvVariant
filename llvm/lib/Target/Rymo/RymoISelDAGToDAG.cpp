#include "RymoISelDAGToDAG.h"

using namespace llvm;

#define DEBUG_TYPE "Rymo-isel"
#define PASS_NAME "Rymo DAG->DAG Pattern Instruction Selection"

char RymoDAGToDAGISelLegacy::ID = 0;

void RymoDAGToDAGISel::Select(SDNode *Node) { SelectCode(Node); }

FunctionPass *llvm::createRymoISelDag(RymoTargetMachine &TM,
                                        CodeGenOptLevel OptLevel) {
  return new RymoDAGToDAGISelLegacy(TM, OptLevel);
}