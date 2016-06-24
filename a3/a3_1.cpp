/*
a3_1
Colin Murphy
Dave Harden
CIS 278


*/


#include <iostream>

const int HAND_SIZE = 5;

using namespace std;

void createHand(int *&hand[])
{



}






bool  containsPair(const int hand[])
{

}






bool  containsTwoPair(const int hand[])
{

}






bool  containsThreeOfaKind(const int hand[])
{

}






bool  containsStraight(const int hand[])
{

}






bool  containsFullHouse(const int hand[])
{

}






bool  containsFourOfaKind(const int hand[])
{

}






int main() {
{
    int hand[HAND_SIZE];

    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;

    for(int i = 0; i < HAND_SIZE; i++)
    {
        cin >> hand[i];
        cout << hand[i];
    }

    if (containsAPair(hand))
    {
        cout << "contains a pair" << endl;
    }
    else
    {
        cout << "High Card" << endl;
    }

    return 0;
}
