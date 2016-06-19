/*
a2
Colin Murphy

*/

#include <iostream>

using namespace std;

const int INITIAL_GUESS = 50;

void getUserResponseToGuess (int guess, char& result)
{
    cout << "Is it " << guess << "? (h/l/c) :";
    cin >> result;
}

int getMidpoint(int low, int high)
{
    int midpoint = (low + high)/2;
    return midpoint;
}

void playOneGame()
{
    cout << "Think of a number between 1 and 100." << endl;
    getUserResponseToGuess(INITIAL_GUESS, );
}

int main()
{
    char response;


    cout << "Ready to play (y/n)? ";
    cin >> response;

    while (response == 'y')
    {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)?";
        cin >> response;
    }
}
