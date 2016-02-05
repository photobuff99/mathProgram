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
// Getters
void Expression::travOptree(Operation* child)
{
    for(unsigned long i = 0; i < child->getSubSize();i++)
    {
        if(child->getSubOp(i)->getID() != 0)
        {
            travOptree(child->getSubOp(i));
        }
        else
        {
            std::cout << "number!: ";
            if(child->getUpOp()!= NULL)
            {
                std::cout << "p: " << child->getUpOp()->getOpName();
            }
            else
            {
                std::cout << "P: TOP";
            }
            std::cout <<" C: ";
            for(unsigned long j = 0; j < child->getSubSize(); i++)
            {
                std::cout<< child->getSubOp(j)->getOpName()<< " ";
            }
            std::cout << std::endl;
        }
    }
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
unsigned long Expression::addOp(std::string _opName, int _ID)
{
    Operation* newOp = new Operation(_opName,_ID);
    opTree.push_back(newOp);
    return opTree.size()-1; // newOp is allocated and add to the opTree
}
int Expression::makeSubOp(Operation* parent, Operation* child)
{
    bool proceed = true;
    if(parent == child)
    {
        proceed = false;
        std::cout << "Parent and child are the same pointer" << std::endl;
    }
    //NEED TO
    // Check that child is not already a sub Op of parent
    // Check that parent is not a sub Op of

    if(proceed)
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
