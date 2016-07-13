#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class fraction
{
    public:
        fraction();
        fraction(int whole);
        fraction(int num,
                 int den);
        friend fraction operator+(const fraction& left,
                                  const fraction& right);
        friend fraction operator-(const fraction& left,
                                  const fraction& right);
        friend fraction operator*(const fraction& left,
                                  const fraction& right);
        friend fraction operator/(const fraction& left,
                                  const fraction& right);
        friend ostream& operator<<(ostream& out,
                                   const fraction &f);
        friend bool operator<(const fraction& left,
                              const fraction& right);
        friend bool operator<=(const fraction& left,
                               const fraction& right);
        friend bool operator>=(const fraction& left,
                               const fraction& right);
        friend bool operator>(const fraction& left,
                              const fraction& right);
        friend bool operator==(const fraction& left,
                               const fraction& right);
        friend bool operator!=(const fraction& left,
                               const fraction& right);
        fraction operator+=(fraction f2);
        fraction operator-=(fraction f2);
        fraction operator*=(fraction f2);
        fraction operator/=(fraction f2);
        fraction operator++();
        fraction operator++(int);
        fraction operator--();
        fraction operator--(int);

    private:
        int numValue;
        int denValue;
};

#endif // FRACTION_H
