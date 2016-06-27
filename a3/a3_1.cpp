/*
a3_1
Colin Murphy
Dave Harden
CIS 278
6/24/16

    This program takes in user input for 5 numbered cards and output
whether those cards are a pair, a two pair, a three of a kind, a straight, a full house
or a four of a kind.
*/

#include <iostream>

using namespace std;

const int HAND_SIZE = 5;
const int TWO_SAME = 2;
const int THREE_SAME = 3;
const int FOUR_SAME = 4;

bool containsPair(const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
bool containsStraight(const int hand[]);
bool containsFullHouse(const int hand[]);
bool containsFourOfaKind(const int hand[]);
int sameVal(const int hand[]);
int valCount(int val,
             const int hand[]);
int secondCount(const int hand[],
                int point);

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

    return 0;
}





//containsPair takes in the 5 card hand as a parameter and returns true if any two values in the array are the same
bool  containsPair(const int hand[])
{
    if(sameVal(hand) >= TWO_SAME)
    {
        return true;
    }
    else
        return false;
}





//containsTwoPair takes in the 5 card hand as a parameter and returns true if there are 2 pairs in the hand
bool  containsTwoPair(const int hand[])
{
    if(sameVal(hand) == TWO_SAME && secondCount(hand, 1) == TWO_SAME && secondCount(hand, HAND_SIZE - 1) == TWO_SAME)
    {
        return true;
    }
    else
        return false;
}





//containsThreeOfaKind takes in the 5 card hand as a parameter and returns true if any three values in the array are the same
bool  containsThreeOfaKind(const int hand[])
{
    if(sameVal(hand) >= THREE_SAME)
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






//containsFullHouse takes in the 5 card hand as a parameter and returns true if the hand contains a pair and a three of a kind
bool  containsFullHouse(const int hand[])
{
    if(containsPair(hand) && containsThreeOfaKind(hand))
    {
        return true;
    }
    else
        return false;
}





//containsFourOfaKind takes in the 5 card hand as a parameter and returns true if any 4 values in the array are the same
bool  containsFourOfaKind(const int hand[])
{
    if(sameVal(hand) >= FOUR_SAME)
    {
        return true;
    }
    else
        return false;
}





//valCount takes in the 5 card hand and a value with which to count the frequency of
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





//sameVal takes in the 5 card hand and loops through the hand, using valCount to check each value in the hand, returning the most frequent
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





//secondCount takes in the 5 card hand and repeats sameVal at the specified point
int secondCount(const int hand[], int point)
{
    int highest = 0;

    for(int i = point; i < HAND_SIZE; i++)
    {
        if(valCount(i, hand) > highest)
        {
            highest = valCount(i, hand);
        }
    }
    return highest;
}


/*
Enter five numeric cards, no face cards. Use 2 - 9.
3
Added : 3
5
Added : 5
5
Added : 5
3
Added : 3
3
Added : 3
Full house!
*/
