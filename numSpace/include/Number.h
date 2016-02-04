#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
//Classes

class Number
{
    public:
        Number();
        virtual ~Number();
        unsigned long getID();
    protected:
    private:
        unsigned long ID;
        bool isZero;
};

#endif // NUMBER_H
