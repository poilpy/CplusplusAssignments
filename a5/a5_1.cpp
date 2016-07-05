/*
a5_1
Colin Murphy
CIS 278
Dave Harden
7/3/16
    This program tests functions that deal with c-style strings.
*/

#include <iostream>
#include <cstring>

using namespace std;


const int MAX_LENGTH = 81;

int lastIndexOf(const char* inString,
                char target);
void reverse(char* inString);
int replace(char* inString,
            char target,
            char replacementChar);
int findSubstring(const char* inString,
                  const char substring[]);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);
void read(char*& readMe);
void concatenate(char*& left, const char* right);




int main()
{
    char testString1[] = "open";
    char* charArray1 = &testString1[0];

    cout << lastIndexOf(charArray1, 'e') << endl;
    cout << findSubstring(charArray1, "pen") << endl;
    reverse(charArray1);
    cout << charArray1 << endl;
    cout << replace(charArray1, 'o', 'u') << endl;
    toupper(charArray1);
    cout << charArray1 << endl;
    if (isPalindrome(charArray1))
        cout << charArray1 << " is a palindrome." << endl;
    read(charArray1);
    cout << charArray1 << endl;
    concatenate(charArray1, "open");
    cout << charArray1 << endl;
    cout << strlen(charArray1) << endl;




    char testString2[] = "racecar";
    char* charArray2 = &testString2[0];

    cout << lastIndexOf(charArray2, 'e') << endl;
    cout << findSubstring(charArray2, "reed") << endl;
    reverse(charArray2);
    cout << charArray2 << endl;
    cout << replace(charArray2, 'a', 'u') << endl;
    toupper(charArray2);
    cout << charArray2 << endl;
    if (isPalindrome(charArray2))
        cout << charArray2 << " is a palindrome." << endl;
    read(charArray2);
    cout << charArray2 << endl;
    concatenate(charArray2, "racer");
    cout << charArray2 << endl;
    cout << strlen(charArray2) << endl;

    return 0;
}





/*
    lastIndexOf takes in a c-string as the parameter *inString and a target character
and returns the index of the last occurrence of the target character.
*/
int lastIndexOf(const char* inString, char target)
{
    int i = 0;
    int index = -1;

    while (inString[i] != '\0')
    {
        if (inString[i] == target)
        {
            index = i;
        }

        i++;
    }

    return index;
}





/*
    reverse takes in a c-string as the parameter *inString and reverses the c-string in place.
*/
void reverse(char* inString)
{
    int length = numLetters(inString);
    int temp, start, end;
    start = 0;
    end = length - 1;

    while (start < end)
    {
        temp = inString[start];
        inString[start] = inString[end];
        inString[end] = temp;

        start++;
        end--;
    }
}





/*
    replace takes in a c-string as the parameter *inString, a target character and a
replacementChar character and replaces all occurrences of the target with the replacementChar character.
*/
int replace(char* inString, char target, char replacementChar)
{
    int i = 0;
    int numReplacements = 0;

    while (inString[i] != '\0')
    {
        if (inString[i] == target)
        {
            inString[i] = replacementChar;
            numReplacements++;
        }

        i++;
    }

    return numReplacements;
}





/*
    findSubstring takes in a c-string as the parameter *inString and an array of chars as a substring
and returns the index of the last occurrence of the substring.
*/
int findSubstring(const char* inString, const char substring[])
{
    int index = -1;
    int i = 0;
    int j = 0;

    while (inString[i] != '\0')
    {
        while (substring[j] == inString[i])
        {
            if(j == strlen(substring) - 1)
            {
                index = i - strlen(substring) + 1;
            }
            i++;
            j++;
        }
        j = 0;
        i++;
    }

    return index;
}





/*
    isPalindrome takes in a c-string as the parameter *inString and returns true if the c-string is a palindrome.
*/
bool isPalindrome(const char* inString)
{
    bool halfway = false;

    int length = numLetters(inString);
    int start, end;
    start = 0;
    end = length - 1;

    while (inString[start] == inString[end])
    {
        start++;
        end--;
        if(start == end)
            halfway = true;
    }

    return halfway;
}





/*
    toupper takes in a c-string as the parameter *inString and makes all entries in the string uppercase.
*/
void toupper(char* inString)
{
    int i = 0;

    while (inString[i] != '\0')
    {
        inString[i] = toupper(inString[i]);

        i++;
    }
}





/*
    numLetters takes in a c-string as the parameter *inString and returns the number of entries in the c-string.
*/
int numLetters(const char* inString)
{
    int i = 0;

    while (inString[i] != '\0' )
    {
        i++;
    }
    return i;
}




/*
    read takes in a reference to a pointer, readMe, and reallocates it with user input.
*/
void read(char*& readMe)
{
    char* temp = new char[MAX_LENGTH];

    cin.getline(temp, MAX_LENGTH);

    strcpy(readMe, temp);

    delete[] readMe;
}





/*
    concatenate takes in a reference to a pointer, left, and a pointer, right, and concatenates right
onto left.
*/
void concatenate(char*& left, const char* right)
{
    strcat(left, right);
}


/*
2
1
nepo
1
NEPU
open
open
openopen
8
3
-1
racecar
2
RUCECUR
RUCECUR is a palindrome.
speed
speed
speed racer
11
*/
