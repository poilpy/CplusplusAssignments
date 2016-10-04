#include <iostream>
#include "bag.h"

using namespace std;

int main()
{
    bag newBag;

    newBag.insert(4);
    for(int i = 0; i < 20; i++)
        newBag.insert(i);

    cout << "Size of bag is " << newBag.bagSize() << endl;
    cout << "There are " << newBag.numOf(4) << " fours in the bag" << endl;
    cout << "Removing a four" << endl;
    newBag.remove(4);
    cout << "Size of bag is " << newBag.bagSize() << endl;
    cout << "There are " << newBag.numOf(4) << " fours in the bag" << endl;
    cout << "There are " << newBag.numOf(5) << " fives in the bag" << endl;
    cout << "Removing a five"<< endl;
    newBag.remove(5);
    cout << "There are " << newBag.numOf(5) << " fives in the bag" << endl;

    return 0;
}


/*
Size of bag is 19
There are 2 fours in the bag
Removing a four
Size of bag is 18
There are 1 fours in the bag
There are 1 fives in the bag
Removing a five
There are 0 fives in the bag
*/
