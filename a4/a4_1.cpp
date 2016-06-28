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

    cout << "x is: " << p2 << endl;
    p2 = &y;
    cout << "y is: " << p2 << endl;

    int a[2];
    p1 = &a[0];
    p2 = &a[1];

    *p2 = x;
    *&p2 = y;

    cout << p1 << endl;
    cout << p2 << endl;

    temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    cout << *p1 << endl;
    cout << *p2 << endl;

    swap(&x, &y);
    cout << x << endl;
    cout << y << endl;

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
