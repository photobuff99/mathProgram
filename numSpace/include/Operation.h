#ifndef OPERATION_H
#define OPERATION_H

#include <iostream>
#include <vector>
#include "Number.h"

class Operation
{
    public:
        Operation();
        virtual ~Operation();
        // Getters
        int getSubSize(); // will get the size of the
        std::string getOpName();
        // Setters / Adders
        void setOpID(int opID);
        void setOpName(std::string _opName);
        int setupOp(Operation* parent);
        int addChild(Operation* child);
        int setVal(Number* _val); // will set the number value of a null operation number
        // Validators
        int isOpValid(); // will check if any of the ops children are its parents
    protected:
        Operation* upOp; // Operation above current op
        std::vector<Operation*> subOp; // Operations below the current op
        Number* val; // This is the number if the operation is a null op
        int ID;
        std::string opName;
    private:
};

#endif // OPERATION_H
