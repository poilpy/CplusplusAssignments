#include "fraction.h"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;
namespace cs_fraction
{
    fraction::fraction()
    {
        numValue = 0;
        denValue = 1;
    }





    fraction::fraction(int whole)
    {
        numValue = whole;
        denValue = 1;
    }






    fraction::fraction(int num, int den)
    {
        assert(den != 0);
        numValue = num;
        denValue = den;
        this->simplify();
    }






    fraction operator+(const fraction& left, const fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denValue * right.denValue;
        modNum1 = left.numValue * right.denValue;
        modNum2 = right.numValue * left.denValue;

        fraction result = fraction(modNum1 + modNum2, modDen);
        result.simplify();
        return result;
    }






    fraction operator-(const fraction& left, const fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denValue * right.denValue;
        modNum1 = left.numValue * right.denValue;
        modNum2 = right.numValue * left.denValue;

        fraction result = fraction(modNum1 - modNum2, modDen);
        result.simplify();
        return result;
    }






    fraction operator*(const fraction& left, const fraction& right)
    {
        fraction result = fraction(left.numValue * right.numValue, left.denValue * right.denValue);
        result.simplify();
        return result;
    }






    fraction operator/(const fraction& left, const fraction& right)
    {
        fraction result = fraction(left.numValue * right.denValue, left.denValue * right.numValue);
        result.simplify();
        return result;
    }






    ostream& operator<<(ostream& out, const fraction &f)
    {

        if(abs(f.numValue) > f.denValue)
        {
            out << ((f.numValue - f.numValue % f.denValue) / f.denValue);

            if(f.numValue % f.denValue != 0)
            {
                out << "+" << abs(f.numValue % f.denValue) << "/" << f.denValue;
            }
        }
        else if(f.numValue == f.denValue)
        {
            out << f.numValue;
        }
        else if(f.numValue == 0)
        {
            out << 0;
        }
        else
        {
            out << f.numValue << "/" << f.denValue;
        }

        return out;
    }





    istream& operator>>(istream& in, fraction &f)
    {
        int temp;
        in >> temp;
            cout << " *1 " << endl;
        if (in.peek() == '+')
        {
            cout << " *2 " << endl;
        }
        else if (in.peek() == '/')
        {

            cout << " *3 " << endl;
        }
        else
        {
            f = fraction(temp);
            cout << " *4 " << endl;
        }
    }






    bool operator<(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue < right.numValue * left.denValue)
            return true;
        else
            return false;
    }






    bool operator<=(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue <= right.numValue * left.denValue)
            return true;
        else
            return false;
    }






    bool operator>(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue > right.numValue * left.denValue)
            return true;
        else
            return false;
    }






    bool operator>=(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue >= right.numValue * left.denValue)
            return true;
        else
            return false;
    }





    bool operator==(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue == right.numValue * left.denValue)
            return true;
        else
            return false;
    }






    bool operator!=(const fraction& left, const fraction& right)
    {
        if(left.numValue * right.denValue != right.numValue * left.denValue)
            return true;
        else
            return false;
    }






    fraction fraction::operator+=(const fraction& right)
    {
        *this = *this + right;

        return *this;
    }






    fraction fraction::operator-=(const fraction& right)
    {
        *this = *this - right;

        return *this;
    }






    fraction fraction::operator*=(const fraction& right)
    {
        *this = *this * right;

        return *this;
    }






    fraction fraction::operator/=(const fraction& right)
    {
        *this = *this / right;

        return *this;
    }






    fraction fraction::operator++()
    {
        numValue += denValue;
        return *this;
    }






    fraction fraction::operator++(int)
    {
        fraction temp(numValue, denValue);
        numValue += denValue;
        return temp;
    }






    fraction fraction::operator--()
    {
        numValue -= denValue;
        return *this;
    }






    fraction fraction::operator--(int)
    {
        fraction temp(numValue, denValue);
        numValue -= denValue;
        return temp;
    }






    void fraction::simplify()
    {
        for (int i = denValue; i > 1; i--)
        {

            if ((numValue % i == 0) && (denValue % i == 0)) {

                numValue = numValue / i;
                denValue = denValue / i;
            }
        }
        if(denValue < 0)
        {
            denValue *= -1;
            numValue *= -1;
        }
    }
}
