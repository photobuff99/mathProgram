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
        Operation* addOp(int OpID);
        int makeSubOp(Operation* parent, Operation* child);
    protected:
    private:
       std::vector<Number*> numList;
       std::vector<Operation*> opTree;
};

#endif // EXPRESSION_H
