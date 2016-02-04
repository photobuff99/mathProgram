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
    first->listNumbers();
    delete first;
    return 0;
}
