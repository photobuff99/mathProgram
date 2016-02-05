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
            void travOptree(Operation* child);
        // Printers
            void listOpTree();
            void listNumbers();
            void printOp(unsigned long pos); // Will, Given the index in opTree prints opName
        // Setter
            //void printExpression();
            unsigned long addOp(std::string _opName, int _ID); // Creates a new Operation and adds it to the opTree vector, takes the ID and name gives index
            unsigned long addNumber(std::string _name, unsigned long _ID, bool _isZero); // Creates Number ID, Name, zero? gives index
            int makeSubOp(Operation* parent, Operation* child); // given op a and b in opTree, makes b a sub op of a
    protected:
    private:
       std::vector<Number*> numList;
       std::vector<Operation*> opTree;
};

#endif // EXPRESSION_H
