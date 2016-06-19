/*
A1
Colin Murphy
CIS 278
Dave Harden
6/17/16

    This is a simple Blackjack program that generates 2 numbers between 1 and 10,
and adds the 2 together. The user is then prompted whether or not they want another card.
If the input is 'y' another random number between 1 and 10 is generated and a new total is
calculated and outputed. If the total equal to 21, then 'congratulations' is outputed and
the user is prompted to decide whether or not to play again. If the total is greater than 21,
then 'bust' is outputed and the user is prompted to decide whether or not to play again.
If neither is true then the user decides whether they want another card.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));

    int card1;
    int card2;
    char addCardChoice;
    int addCardValue;
    int total;
    char playChoice;
    bool repeat;

    do
    {
        card1 = (rand() % 10) + 1;
        card2 = (rand() % 10) + 1;
        total = card1 + card2;

        cout << "First cards: " << card1 << ", " << card2 << endl;
        cout << "Total: " << total << endl;
        cout << "Do you want another card? (y, n) : ";
        cin >> addCardChoice;
        cout << "You entered: " << addCardChoice << endl;



        while (total < 21 && addCardChoice == 'y')
        {
            addCardValue = (rand() % 10) + 1;
            total = total + addCardValue;

            cout << "Card: " << addCardValue << endl;
            cout << "Total: " << total << endl;

            if (total == 21)
            {
                cout << "Congratulations" << endl;
            }
            else if (total > 21)
            {
                cout << "Bust" << endl;
            }
            else
            {
                cout << "Do you want another card? (y, n) : ";
                cin >> addCardChoice;
                cout << "You entered: " << addCardChoice << endl;
            }
        }

        cout << "Do you want to play again?(y, n) : ";
        cin >> playChoice;

        if (playChoice == 'y')
        {
            repeat = true;
        }
        else
        {
            repeat = false;
        }
    }while (repeat);


    return 0;
}

/*

First cards: 4, 10
Total: 14
Do you want another card? (y, n) : y
You entered: y
Card: 10
Total: 24
Bust
Do you want to play again?(y, n) : y
First cards: 1, 3
Total: 4
Do you want another card? (y, n) : y
You entered: y
Card: 4
Total: 8
Do you want another card? (y, n) : y
You entered: y
Card: 10
Total: 18
Do you want another card? (y, n) : n
You entered: n
Do you want to play again?(y, n) : n

Process returned 0 (0x0)   execution time : 10.921 s
Press any key to continue.

*/
