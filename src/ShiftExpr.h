/* This is the source code of Brain Programming Language.
 * It is licensed under GNU GPL v. 3 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Luiz Peres, 2016.
 */

#ifndef SHIFT_EXPR_H
#define SHIFT_EXPR_H

#include <iostream>

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"

#include "Expr.h"

class ShiftExpr : public Expr
{
  protected:
    int _step;
  public:
    ShiftExpr(int step) : _step(step) { }
    void CodeGen(llvm::Module *M, llvm::IRBuilder<> &B, llvm::BasicBlock *EndBlock, llvm::GlobalVariable *index, llvm::GlobalVariable *cells);
    void DebugDescription(int level);
    bool UpdateExpr(char update);
    ~ShiftExpr() {};
};

#endif
