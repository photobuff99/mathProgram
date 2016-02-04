#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <iostream>
#include <vector>

// Classes
#include "Number.h"
#include "Operation.h"


class Expression
{
    public:
        Expression();
        virtual ~Expression();
        // Getters

        // Printers
            void listOpTree();
            void listNumbers();
            void printOp(unsigned long pos); // Will, Given the index in opTree prints opName
        // Setter
            //void printExpression();
            Operation* addOp(int OpID); // Creates a new Operation and adds it to the opTree vector, takes the OpID of the new operation
            int makeSubOp(Operation* parent, Operation* child); // given op a and b in opTree, makes b a sub op of a
            unsigned long addNumber(std::string _name, unsigned long _ID, bool _isZero);


    protected:
    private:
       std::vector<Number*> numList;
       std::vector<Operation*> opTree;
};

#endif // EXPRESSION_H
