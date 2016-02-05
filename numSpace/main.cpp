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
    unsigned long op1 = first->addOp("Add",1);
    unsigned long op2 =first->addOp("NULL",0);
    unsigned long op3 =first->addOp("NULL",0);
    unsigned long op4 =first->addOp("NULL",0);
    first->makeSubOp(op1,op2);
    first->makeSubOp(op1,op3);
    first->setUpOp(op1,op4);
    first->travOpTree(op1);
    delete first;
    return 0;
}
