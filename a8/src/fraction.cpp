#include "fraction.h"
#include <iostream>
#include <cassert>

using namespace std;

fraction::fraction()
{
    numValue = 0;
    denValue = 1;
}






fraction::fraction(int num, int den)
{
    numValue = num;
    denValue = den;
    this->simplify();
}






fraction fraction::addedTo(const fraction f2)const
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






bool fraction::isEqualTo(const fraction f2)const
{
    if (numValue == f2.numValue && denValue == f2.denValue)
        return true;
    else
        return false;
}






void fraction::print()const
{
    cout << numValue << "/" << denValue;
}





//simplify reduces the calling object to lowest terms
void fraction::simplify()
{
    for (int i = denValue; i > 1; i--)
    {

        if ((numValue % i == 0) && (denValue % i == 0)) {

            numValue = numValue / i;
            denValue = denValue / i;
        }
    }
}
