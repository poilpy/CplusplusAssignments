/*
a13_2
Colin Murphy
CIS 278
Dave Harden
7/31/16
    This program determines whether a string is a palindrome or not
    disregarding spaces and punctuation through recursion.

*/

#include <iostream>
#include <cctype>
#include "myString.h"

using namespace std;
using namespace cs_mystring;

bool isAPalindrome(myString inString, int lower, int upper);

int main()
{
    myString inString;

    cout << "Enter a string: ";
    inString.read(cin, '\n');

    while(inString != "quit")
    {
        if(isAPalindrome(inString, 0, inString.length() - 1))
            cout << inString << " is a palindrome." << endl;
        else
            cout << inString << " is not a palindrome." << endl;

        cout << "Enter a string: ";
        inString.read(cin, '\n');
    }

    return 0;
}





/*
    isAPalindrome takes in a myString object and the lower and upper
    bounds of the string. Returns true if the string is a palindrome.
*/
bool isAPalindrome(myString inString, int lower, int upper)
{

    if(ispunct(inString[lower]) || isspace(inString[lower]))
        lower++;
    if(ispunct(inString[upper]) || isspace(inString[upper]))
        upper--;

    if(lower >= upper)
        return true;
    if(toupper(inString[lower]) != toupper(inString[upper]))
        return false;
    return isAPalindrome(inString, ++lower, --upper);
}

/*
Enter a string: Do geese see God?
Do geese see God? is a palindrome.
Enter a string: Was it Eliot's toilet I saw?
Was it Eliot's toilet I saw? is a palindrome.
Enter a string: Murder for a jar of red rum.
Murder for a jar of red rum. is a palindrome.
Enter a string: Some men interpret nine memos.
Some men interpret nine memos. is a palindrome.
Enter a string: Never odd or even.
Never odd or even. is a palindrome.
Enter a string: Never odd or ev
Never odd or ev is not a palindrome.
Enter a string: quit
*/

