#include "bag.h"

bag::bag()
{
    count = 0;
}




bool bag::insert(bag_type n)
{
    if(count > CAPACITY)
    {
        return false;
    }

    data[count++] = n;

    return true;
}




bool bag::remove(bag_type n)
{
    int i = 0;
    if(numOf(n) == 0)
        return false;
    while(data[i] != n) i++;
    for(; i < count; i++)
        data[i] = data[i + 1];
    count--;
    return true;
}




int bag::numOf(bag_type n)
{
    int counter = 0;

    for(int i = 0; i < CAPACITY; i++)
    {
        if(data[i] == n)
            counter++;
    }
    return counter;
}





void bag::removeAll()
{
    count = 0;
}




bool bag::check(bag_type n)
{
    bool isTrue = false;

    for(int i = 0; i < CAPACITY; i++)
    {
        if(data[i] == n)
            isTrue = true;
    }
    return isTrue;
}




int bag::bagSize()
{
    return count;
}
