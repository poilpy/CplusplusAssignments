#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));

    int card1 = (rand() % 10) + 1;
    int card2 = (rand() % 10) + 1;
    char addCardChoice;
    int addCardValue;
    int total = card1 + card2;
    char playChoice;
    bool play = true;

    cout << "First cards: " << card1 << ", " << card2 << endl;
    cout << "Total: " << total << endl;
    cout << "Do you want another card? (y, n) : ";
    cin >> addCardChoice;

    while (play)
    {
        while (total < 21)
        {
            if (addCardChoice == 'y')
            {
                addCardValue = (rand() % 10) + 1;
                total = total + addCardValue;

                cout << "Card: " << addCardValue << endl;
                cout << "Total: " << total << endl;

                if (total >= 21)
                {
                    cout << "Busted!" << endl;
                }
                else
                {
                    cout << "Do you want another card? (y, n) : ";
                    cin >> addCardChoice;
                }
            }
        }

        cout << "Do you want to play again?(y, n) : ";
        cin >> playChoice;
        if (playChoice =! 'y')
        {
            play = false;
        }
    }


    return 0;
}
