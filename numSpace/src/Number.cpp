#include "Number.h"

Number::Number()
{
    ID = 1;
    isZero = false;
}

Number::~Number()
{
    //dtor
}

unsigned long Number::getID()
{
    return ID;
}
