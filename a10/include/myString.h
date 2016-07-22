#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
using namespace std;

namespace cs_mystring
{
class myString
{
public:
    myString(const char* create = "");
    virtual ~myString();
    myString(const myString& right);
    myString& operator=(const myString& right);
    char& operator[](int i);
    char operator[](int i)const;
    friend ostream& operator<<(ostream& out,
                               const myString& right);
    friend istream& operator>>(istream& in,
                               const myString& right);
    friend myString& operator+(myString& left,
                               myString& right);
    friend myString& operator+=(myString& left,
                               myString& right);
    friend bool operator<(const myString& left,
                          const myString& right);
    friend bool operator<=(const myString& left,
                           const myString& right);
    friend bool operator>=(const myString& left,
                           const myString& right);
    friend bool operator>(const myString& left,
                          const myString& right);
    friend bool operator==(const myString& left,
                           const myString& right);
    friend bool operator!=(const myString& left,
                           const myString& right);
    void read(istream& in,
              char stop);

    int length()const;

private:
    char *array;
};
}
#endif // MYSTRING_H
