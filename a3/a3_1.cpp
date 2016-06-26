/*
a3_1
Colin Murphy
Dave Harden
CIS 278


*/


#include <iostream>

const int HAND_SIZE = 5;

using namespace std;

bool containsPair(const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
bool containsStraight(const int hand[]);
bool containsFullHouse(const int hand[]);
bool containsFourOfaKind(const int hand[]);
int sameVal(const int hand[]);
int valCount(int val, const int hand[]);
int secondCheck(int val, const int hand[]);


int main()

{
    int hand[HAND_SIZE];

    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;

    for(int i = 0; i < HAND_SIZE; i++)
    {
        cin >> hand[i];
        cout << "Added : " << hand[i] << endl;
    }

    if(containsFourOfaKind(hand))
    {
        cout << "Four of a kind!" << endl;
    }
    else if(containsFullHouse(hand))
    {
        cout << "Full house!" << endl;
    }
    else if(containsStraight(hand))
    {
        cout << "Straight!" << endl;
    }
    else if(containsThreeOfaKind(hand))
    {
        cout << "Three of a kind!" << endl;
    }
    else if(containsTwoPair(hand))
    {
        cout << "Two pair!" << endl;
    }
    else if (containsPair(hand))
    {
        cout << "Pair!" << endl;
    }
    else
    {
        cout << "High Card!" << endl;
    }

    for(int i = 0; i < HAND_SIZE; i++)
    {
        cout << hand[i] << " ";
    }

    return 0;
}





bool  containsPair(const int hand[])
{
    if(sameVal(hand) == 2)
    {
        return true;
    }
    else
        return false;
}






bool  containsTwoPair(const int hand[])
{
    if(sameVal(hand) == 2 && secondCheck())
    {
        return true;
    }
    else
        return false;
}






bool  containsThreeOfaKind(const int hand[])
{
    if(sameVal(hand) == 3)
    {
        return true;
    }
    else
        return false;
}






bool  containsStraight(const int hand[])
{
    return false;
}






bool  containsFullHouse(const int hand[])
{
    return false;
}






bool  containsFourOfaKind(const int hand[])
{
    if(sameVal(hand) == 4 || sameVal(hand) == 5)
    {
        return true;
    }
    else
        return false;
}





int valCount(int val, const int hand[])
{
    int sameCount = 0;

    for(int i = 0; i < HAND_SIZE; i++)
    {
        if(hand[i] == hand[val])
        {
            sameCount++;
        }
    }

    return sameCount;
}






int sameVal(const int hand[])
{
    int highest = 0;

    for(int i = 0; i < HAND_SIZE; i++)
    {
        if(valCount(i, hand) > highest)
        {
            highest = valCount(i, hand);
        }
    }
    return highest;
}






int secondCheck(int val, const int hand[])
{
    int highest = 0;

    for(int i = val; i < HAND_SIZE; i++)
    {
        if(valCount(i, hand) > highest)
        {
            highest = valCount(i, hand);
        }
    }

    return highest;
}
