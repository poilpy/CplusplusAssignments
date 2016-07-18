/*
fraction();
    fraction()
    precondition:
    postcondition: constructs a fraction object with a numerator
        of zero
    fraction(int whole)
        precondition:
        postcondition:
    fraction(int num, int den)
    precondition:
    postcondition:
    friend fraction operator+(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend fraction operator-(const fraction& left,  const fraction& right)
        precondition:
        postcondition:
    friend fraction operator*(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend fraction operator/(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend ostream& operator<<(ostream& out, const fraction &f)
        precondition:
        postcondition:
    friend istream& operator>>(istream& in, fraction &f)
        precondition:
        postcondition:
    friend bool operator<(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend bool operator<=(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend bool operator>=(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend bool operator>(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend bool operator==(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    friend bool operator!=(const fraction& left, const fraction& right)
        precondition:
        postcondition:
    fraction operator+=(const fraction& right)
        precondition:
        postcondition:
    fraction operator-=(const fraction& right)
        precondition:
        postcondition:
    fraction operator*=(const fraction& right)
        precondition:
        postcondition:
    fraction operator/=(const fraction& right)
        precondition:
        postcondition:
    fraction operator++()
        postcondition:
    fraction operator++(int)
        precondition:
        postcondition:
    fraction operator--()
        postcondition:
    fraction operator--(int)
        precondition:
        postcondition:
*/



#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;
namespace cs_fraction
{
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
            friend istream& operator>>(istream& in,
                                       fraction &f);
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
            fraction operator+=(const fraction& right);
            fraction operator-=(const fraction& right);
            fraction operator*=(const fraction& right);
            fraction operator/=(const fraction& right);
            fraction operator++();
            fraction operator++(int);
            fraction operator--();
            fraction operator--(int);

        private:
            void simplify();
            int numValue;
            int denValue;
    };
}

#endif // FRACTION_H
