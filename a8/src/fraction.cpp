#include "fraction.h"
#include <iostream>
#include <cassert>

using namespace std;

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
    numValue = num;
    denValue = den;
}






fraction fraction::operator+(const fraction f2)const
{
    int modNum1;
    int modNum2;
    int modDen;

    modDen = denValue * f2.denValue;
    modNum1 = numValue * f2.denValue;
    modNum2 = f2.numValue * denValue;

    fraction result = fraction(modNum1 + modNum2, modDen);
    result.simplify();
    return result;
}






fraction fraction::subtract(const fraction f2)const
{
    int modNum1;
    int modNum2;
    int modDen;

    modDen = denValue * f2.denValue;
    modNum1 = numValue * f2.denValue;
    modNum2 = f2.numValue * denValue;

    fraction result = fraction(modNum1 - modNum2, modDen);
    result.simplify();
    return result;
}






fraction fraction::multipliedBy(const fraction f2)const
{
    fraction result = fraction(numValue * f2.numValue, denValue * f2.denValue);
    result.simplify();
    return result;
}






fraction fraction::dividedBy(const fraction f2)const
{
    fraction result = fraction(numValue * f2.denValue, denValue * f2.numValue);
    result.simplify();
    return result;
}






void fraction::operator<<(fraction f)
{

}
bool fraction::operator<(fraction f2)
{
    if(numValue * f2.denValue < f2.numValue * denValue)
        return true;
    else
        return false;
}
bool fraction::operator<=(fraction f2)
{

}
bool fraction::operator>(fraction f2)
{

}
bool fraction::operator>=(fraction f2)
{

}
bool fraction::operator==(fraction f2)
{

}
bool fraction::operator!=(fraction f2)
{

}
fraction fraction::operator+=(fraction f2)
{

}
fraction fraction::operator-=(fraction f2)
{

}
fraction fraction::operator*=(fraction f2)
{

}
fraction fraction::operator/=(fraction f2)
{

}
void fraction::operator++(fraction f)
{

}
void fraction::operator--(fraction f)
{

}
