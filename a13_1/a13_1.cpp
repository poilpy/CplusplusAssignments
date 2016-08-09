/*
a13_1
Colin Murphy
CIS 278
Dave Harden
7/31/16
    This program tests functions that reverse both arrays of characters and
    c-style strings.

*/

#include <iostream>
#include <cstring>

using namespace std;

void reverseWithinBounds(char arrayR[], int lowerBound, int upperBound);
void reverseCstring(char* arrayC);

int main()
{
    char test[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char testString[] = "abcdefghijklmnopqrstuvwxyz";

    reverseWithinBounds(test, 4, 6);
    reverseCstring(testString);

    cout << test << endl;

    cout << testString << endl;



    return 0;
}





/*
    reverseWithinBounds takes in an array of characters and the lower and upper
    bounds of the array. Reverses the array between those bounds.
*/
void reverseWithinBounds(char arrayR[], int lowerBound, int upperBound)
{
    char temp;

    if(lowerBound < upperBound)
    {
        temp = arrayR[upperBound];
        arrayR[upperBound] = arrayR[lowerBound];
        arrayR[lowerBound] = temp;

        reverseWithinBounds(arrayR, ++lowerBound, --upperBound);
    }

}





/*
    reverseCstring takes in a c-string and reverses the whole string.
*/
void reverseCstring(char* arrayC)
{
    reverseWithinBounds(arrayC, 0, strlen(arrayC) - 1);
}






/*
0123654789
zyxwvutsrqponmlkjihgfedcba
*/
