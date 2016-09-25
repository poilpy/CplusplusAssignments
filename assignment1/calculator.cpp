// FILE calculator.cpp
// Name:  Colin Murphy
// GID:  G00994745
// Date:  9/06/2016
// Environment: GNU GCC Code::Blocks 16.01
#include "calculator.h"

namespace colin_murphy_L1
{
AddSubMult::AddSubMult()
{
    total = 0;
}




int AddSubMult::getTotal()
{
    return total;
}




bool AddSubMult::addNum(int n)
{
    if(n < 0)
        return false;
    total += n;
    return true;
}




bool AddSubMult::subNum(int n)
{
    if(n < 0)
        return false;
    total -= n;
    return true;

}




bool AddSubMult::multNum(int n)
{
    if(n < 0)
        return false;
    total *= n;
    return true;

}
}
