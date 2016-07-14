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
