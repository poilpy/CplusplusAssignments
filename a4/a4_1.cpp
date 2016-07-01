/*
a4_1
Colin Murphy
CIS 278
Dave Harden
6/29/16

    Simple pointer tasks.
*/
#include <iostream>

using namespace std;

void noNegatives(int *x);
void swap(int *p1, int *p2);

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
    p2 = a;

    p2[0] = x;
    p2[1] = y;

    cout << "a[0] : " << &p2[0] << endl;
    cout << "a[1] : " << &p2[1] << endl;

    p1 = &a[0];
    p2 = &a[1];
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    cout << *p1 << endl;
    cout << *p2 << endl;

    swap(&x, &y);
    cout <<"x : " << x << endl;
    cout <<"y : " << y << endl;

    swap(&a[0], &a[1]);
    cout << a[0] << endl;
    cout << a[1] << endl;

    return 0;
}







void noNegatives(int *x)
    {
        if(*x < 0)
            *x = 0;
    }







void swap(int *p1, int *p2)
{
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}


/*
99
99
x is: 0
y is: 99
a[0] : 0x6afee4
a[1] : 0x6afee8
99
0
x : 99
y : 0
0
99
*/
