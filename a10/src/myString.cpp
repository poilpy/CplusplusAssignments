#include "myString.h"
#include <assert.h>

namespace cs_mystring
{
myString::myString(const char* create)
{
    array = new char[strlen(create) + 1];
    strcpy(array, create);
}







myString::~myString()
{
    delete[] array;
}







myString::myString(const myString& right)
{
    array = new char[strlen(right.array) + 1];
    strcpy(array, right.array);
}






myString& myString::operator=(const myString& right)
{
    if (this != &right)
    {
        delete [] array;
        array = new char[strlen(right.array) + 1];
        strcpy(array, right.array);
    }
    return *this;
}







ostream& operator<<(ostream& out, const myString& right)
{
    for(int i = 0; i < strlen(right.array); i++)
    {
        out << right.array[i];
    }
    return out;
}






istream& operator>>(istream& out, const myString& right)
{
    char temp;
    in >> temp;
}






myString& operator+(const myString& left, const myString& right)
{
//    int newlen = strlen(left.array) + strlen(right.array) + 1;
//    char* temp = new char[newlen];
//    strcpy(temp, left.array);
//    strcat(temp, right.array);
//    strcpy(left, temp);
//    delete[] temp;
}






myString& operator+=(myString& left, const myString& right)
{
//    if (this != &right)
//    {
//        int newlen = strlen(left.array) + strlen(right.array) + 1;
//        char* temp = new char[newlen];
//        strcpy(temp, left.array);
//        strcat(temp, right.array);
//        delete left;
//        left = new char[newlen];
//        strcpy(left, temp);
//        delete[] temp;
//    }
//    return *this;
}







char myString::operator[](int i)const
{
    assert(i >= 0 && i < strlen(array));

    return array[i];
}






char& myString::operator[](int i)
{
    assert(i >= 0 && i < strlen(array));

    return array[i];
}






bool operator<(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) < 0;
}






bool operator<=(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) < 0 || strcmp(left.array, right.array) == 0;
}






bool operator>=(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) > 0 || strcmp(left.array, right.array) == 0;
}






bool operator>(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) > 0;
}






bool operator==(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) == 0;
}






bool operator!=(const myString& left, const myString& right)
{
    return strcmp(left.array, right.array) != 0;
}





void myString::read(istream& in, char stop)
{

}






int myString::length()const
{
    return strlen(array);
}
}
