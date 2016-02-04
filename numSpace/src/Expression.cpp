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
int Expression::pushNumber(Number* a)
{
    if (a != NULL)
    {
        numList.push_back(a);
        return 0;
    }
    else
    {
        return 1;
    }
}
Operation* Expression::addOp(int OpID)
{
    Operation* newOp = new Operation;
    opTree.push_back(newOp);
    newOp->setOpID(OpID);
    return newOp; // newOp is allocated  and add to the opTree
}
int Expression::makeSubOp(Operation* parent, Operation* child)
{
    // checking need to be add for parent child loops
    parent->addChild(child);
    child->setupOp(parent);
    return 0;
}
