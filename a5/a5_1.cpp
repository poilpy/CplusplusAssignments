#include <iostream>
#include <cstring>

using namespace std;


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
    string testString1 = "Flower";
    char* charArray1 = &testString1[0];

    cout << lastIndexOf(charArray1, 'e') << endl;
    reverse(charArray1);
    cout << charArray1 << endl;
    cout << replace(charArray1, 'o', 'u') << endl;
    toupper(charArray1);
    cout << charArray1 << endl;

    return 0;
}





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






int findSubstring(const char* inString, const char substring[])
{

}






bool isPalindrome(const char* inString)
{

}






void toupper(char* inString)
{
    int i = 0;

    while (inString[i] != '\0')
    {
        inString[i] = toupper(inString[i]);

        i++;
    }
}






int numLetters(const char* inString)
{
    int i = 0;

    while (inString[i] != '\0')
    {
        i++;
    }
    return i;
}





void read(char*& readMe)
{

}






void concatenate(char*& left, const char* right)
{

}
