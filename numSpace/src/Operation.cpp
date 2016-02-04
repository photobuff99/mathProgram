#include "Operation.h"

Operation::Operation()
{
    ID = 1; // 1 is the null operator it does nothing
    upOp = NULL;
    //ctor
}

Operation::~Operation()
{
    //dtor
}
// Getters
std::string Operation::getOpName()
{
    return opName;
}
//Setters
void Operation::setOpID(int OpID)
{
    ID = OpID;
}
void Operation::setOpName(std::string _opName)
{
    _opName = opName;
}
int Operation::setupOp(Operation* parent)
{
    upOp = parent;
    return 0; // no error checking yet
}
int Operation::addChild(Operation* child)
{
    subOp.push_back(child);
    return 0; // no error checking yet
}
