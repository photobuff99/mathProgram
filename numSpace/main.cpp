#include <iostream>

//Classes
#include "Number.h"
#include "Expression.h"
#include "Add.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Expression * first = new Expression;
    Operation* a = first->addOp(0);
    Operation* b = first->addOp(1);
    first->makeSubOp(a,b);
    cout << "go buffs" << endl;
    delete first;

    return 0;
}
