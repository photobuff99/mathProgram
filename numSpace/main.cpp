#include <iostream>

//Classes
#include "Number.h"
#include "Expression.h"
#include "Add.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Expression *first = new Expression;
    unsigned long op1 = first->addOp("Add1",1);
    unsigned long op2 = first->addOp("Add2",1);
    unsigned long op3 =first->addOp("A",0);
    unsigned long op4 =first->addOp("B",0);
    unsigned long op5 =first->addOp("C",0);
    first->makeSubOp(op1,op3);
    first->makeSubOp(op1,op4);
    first->makeSubOp(op2,op1);
    first->makeSubOp(op2,op5);
    first->travOpTree(op2);
    delete first;
    return 0;
}
