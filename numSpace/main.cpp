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
    first->addOp("Add",1);
    first->addOp("Div",4);
    first->listOpTree();
    delete first;
    return 0;
}
