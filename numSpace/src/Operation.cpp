#include "Operation.h"

Operation::Operation()
{
    ID = 1; // 1 is the null operator it does nothing
    upOp = NULL;
    //ctor
}
Operation::Operation(std::string _opName,int _ID)
{
    opName = _opName;
    ID =_ID;
    upOp = NULL;
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
unsigned long Operation::getSubSize()
{
    return subOp.size();
}
int Operation::getID()
{
    return ID;
}
Operation* Operation::getSubOp(unsigned long _index) //You get Null if index is out of range
{
    if(_index < subOp.size())
    {
        return subOp[_index];
    }
    else
    {
        return NULL;
    }
}
Operation* Operation::getUpOp()
{
    return upOp; // will return NULL values
}
//Setters
void Operation::setOpID(int _ID)
{
    ID = _ID;
}
void Operation::setOpName(std::string _opName)
{
    _opName = opName;
}
int Operation::setUpOp(Operation* _op)
{
    upOp = _op;
    return 0; // no error checking yet
}
int Operation::addChild(Operation* child)
{
    subOp.push_back(child);
    return 0; // no error checking yet
}
