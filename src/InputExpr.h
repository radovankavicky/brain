/* This is the source code of Brain Programming Language.
 * It is licensed under GNU GPL v. 3 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Luiz Peres, 2016.
 */

#ifndef INPUT_EXPR_H
#define INPUT_EXPR_H

#include <iostream>

#include "llvm/Transforms/Utils/BuildLibCalls.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"

#include "Expr.h"

class InputExpr : public Expr
{
  public:
    InputExpr() { }
    void CodeGen(llvm::Module *M, llvm::IRBuilder<> &B, llvm::BasicBlock *EndBlock, llvm::GlobalVariable *index, llvm::GlobalVariable *cells);
    void DebugDescription(int level);
    bool UpdateExpr(char update);
    ~InputExpr() {};
};

#endif
