#include "Expression.h"
#include <iostream>
Expression::Expression()
{
    //ctor
}

Expression::~Expression()
{
    for(unsigned long i = 0; i < numList.size();i++)//clear the numberList
    {
        //std::cout << "num" <<numList.size() << std::endl;
        delete numList[i];
    }
    for(unsigned long i = 0; i < opTree.size();i++)//clear the numberList
    {
        //std::cout << opTree.size() << std::endl;
        delete opTree[i];
    }

    //dtor
}
//Printers
void Expression::listNumbers()
{
    for(unsigned long i = 0; i< numList.size();i++)
    {
        std::cout << i << ": " << numList[i]->getName() << std::endl;
    }
}
void Expression::listOpTree()
{
    for(unsigned long i = 0; i< opTree.size();i++)
    {
        std::cout << i << ": " << opTree[i]->getOpName() << std::endl;
    }
}


// Setters
unsigned long Expression::addNumber(std::string _name, unsigned long _ID, bool _isZero)
{
    Number * newNumber = new Number (_name,_ID,_isZero);
    numList.push_back(newNumber);
    return numList.size() - 1;
}
Operation* Expression::addOp(int OpID)
{
    Operation* newOp = new Operation;
    opTree.push_back(newOp);
    newOp->setOpID(OpID);
    return newOp; // newOp is allocated and add to the opTree
}
int Expression::makeSubOp(Operation* parent, Operation* child)
{
    // Check that the Ops are in the opTree
    bool areOpsInTree = false;
    bool temp = false;
    for(unsigned long i = 0; i < opTree.size();i++)
    {
        if(opTree[i] == parent)
            temp = true;
        if(opTree[i] == child)
            areOpsInTree = true;
    }
    //NEED TO
    // Check that child is not already a sub Op of parent
    // Check that parent is not a sub Op of

    if(temp && areOpsInTree)
    {
        parent->addChild(child);
        child->setupOp(parent);
        return 0;
    }
    else
    {
        return 1;
    }
    // checking need to be add for parent child loops
}
