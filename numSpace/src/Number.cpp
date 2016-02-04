#include "Number.h"

Number::Number()
{
    ID = 1;
    isZero = false;
}
Number::Number(std::string _name, unsigned long _ID, bool _isZero)
{
    ID = _ID;
    name = _name;
    isZero = _isZero;
}

Number::~Number()
{
    //dtor
}
// Getters
unsigned long Number::getID()
{
    return ID;
}
std::string Number::getName()
{
    return name;
}
// Setters

int Number::setID(unsigned long _ID) // normal error
{
    ID = _ID;
    return 0;
}
int Number::setName(std::string _name) // normal error
{
    name = _name;
    return 0;
}
