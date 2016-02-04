#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <vector>

// Classes
#include "Number.h"
#include "Operation.h"


class Expression
{
    public:
        Expression();
        virtual ~Expression();
        //void printExpression();
        int pushNumber(Number*);
        Operation* addOp(int OpID); // Creates a new Operation and adds it to the opTree vector, takes the OpID of the new operation
        int makeSubOp(Operation* parent, Operation* child); // given op a and b in opTree, makes b a sub op of b
    protected:
    private:
       std::vector<Number*> numList;
       std::vector<Operation*> opTree;
};

#endif // EXPRESSION_H
