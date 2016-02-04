#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>

//Classes

class Number
{
    public:
        Number();
        Number(std::string _name, unsigned long _ID, bool _isZero);
        virtual ~Number();
        // Getters
        unsigned long getID();
        std::string getName();
        // Setters
        int setID(unsigned long _ID);
        int setName(std::string _name);
    protected:
    private:
        unsigned long ID;
        bool isZero;
        std::string name;
};

#endif // NUMBER_H
