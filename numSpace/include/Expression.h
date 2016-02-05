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
            int travOpTree(unsigned long _index);
        // Printers
            void listOpTree();
            void listNumbers();
            void printOp(unsigned long pos); // Will, Given the index in opTree prints opName
        // Setter
            //void printExpression();
            unsigned long addOp(std::string _opName, int _ID); // Creates a new Operation and adds it to the opTree vector, takes the ID and name gives index
            unsigned long addNumber(std::string _name, unsigned long _ID, bool _isZero); // Creates Number ID, Name, zero? gives index
            int makeSubOp(unsigned long _parent, unsigned long _child); // given op a and b in opTree, makes b a sub op of a
            int setUpOp(unsigned long _index,unsigned long _upOpIndex); // Given an index sets the upOp
    protected:
    private:
       std::vector<Number*> numList;
       std::vector<Operation*> opTree;
       //helper functions
       bool isInTree(unsigned long _index); // Both test if the index is in the vectors
       bool isInNum(unsigned long _index);
       void travOpTreeHelper(Operation* child);
};

#endif // EXPRESSION_H
