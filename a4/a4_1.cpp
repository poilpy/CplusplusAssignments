#include <iostream>

using namespace std;

void noNegatives(int *x);

int main()
{
    int x;
    int y;

    int *p1;

    p1 = &x;

    *p1 = 99;

    cout << x << endl;

    cout << *p1 << endl;

    p1 = &y;

    *p1 = -300;

    int temp;
    int *p2 = &x;

    temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    noNegatives(&x);
    noNegatives(&y);

    cout << "x is: " << *p2 << endl;
    p2 = &y;
    cout << "y is: " << *p2 << endl;

    int a[2];
    p2 = &a[1];

    *p2 = x;



    return 0;
}

void noNegatives(int *x)
    {
        if(*x < 0)
            *x = 0;
    }
