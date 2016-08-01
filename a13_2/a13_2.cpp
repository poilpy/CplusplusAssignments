#include <iostream>
#include <cctype>
#include "myString.h"

using namespace std;
using namespace cs_mystring;

bool isAPalindrome(myString read, int lower, int upper);

int main()
{
    myString read;

    cout << "Enter a string: ";
    cin >> read;

    while(read != "quit")
    {
        if(isAPalindrome(read, 0, read.length() - 1))
            cout << read << " is a palindrome." << endl;
        else
            cout << read << " is not a palindrome." << endl;

        cout << "Enter a string: ";
        cin >> read;
    }

    return 0;
}






bool isAPalindrome(myString read, int lower, int upper)
{

}


