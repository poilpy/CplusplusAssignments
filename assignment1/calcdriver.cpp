// FILE calcdriver.cpp
// Name:  Colin Murphy
// GID:  G00994745
// Date:  9/06/2016
// Environment: GNU GCC Code::Blocks 16.01
#include <iostream>
#include "calculator.h"

using namespace std;
using namespace colin_murphy_L1;

int main()
{
    AddSubMult testDemo;

    testDemo.addNum(10);

    cout << "Operation: Add, Input 10, Total " << testDemo.getTotal() << endl;

    testDemo.addNum(20);

    cout << "Operation: Add, Input 20, Total " << testDemo.getTotal() << endl;

    testDemo.subNum(5);

    cout << "Operation: Sub, Input 5, Total " << testDemo.getTotal() << endl;

    testDemo.multNum(2);

    cout << "Operation: Mult, Input 2, Total " << testDemo.getTotal() << endl;

    testDemo.addNum(30);

    cout << "Operation: Add, Input 30, Total " << testDemo.getTotal() << endl;
    return 0;
}

/*---------------Output--------------
Operation: Add, Input 10, Total 10
Operation: Add, Input 20, Total 30
Operation: Sub, Input 5, Total 25
Operation: Mult, Input 2, Total 50
Operation: Add, Input 30, Total 80
------------------------------------*/
