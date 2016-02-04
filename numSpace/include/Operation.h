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
        void setOpID(int opID);
        int setupOp(Operation* parent);
        int addChild(Operation* child);
    protected:
        Operation* upOp; // Operation above current op
        std::vector<Operation*> subOp; // Operations below the current op
        Number* val; // This is the number if the operation is a null op
        int ID;
        std::string opName;
    private:
};

#endif // OPERATION_H
