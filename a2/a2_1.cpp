/**
a2_1
Colin Murphy
CIS 278
Dave Harden
6/20/16

    This is a simple guessing game program for numbers between 1 and 100.
The user is prompted to think of a number between 1 and 100, then the program
uses binary search to locate the number with user feedback in the form of higher
or lower responses.
**/

#include <iostream>

using namespace std;


//getUserResponseToGuess takes in the guess parameter which prompts the user with
//the passed int and result which stores user input to the question.
void getUserResponseToGuess (int guess, char& result)
{
    cout << "Is it " << guess << "? (h/l/c) :";
    cin >> result;
}





//getMidpoint takes in 2 parameters low and high and returns the middle value of the two.
int getMidpoint(int low, int high)
{
    int midpoint = ( low + ( high - low ) / 2 );
    return midpoint;
}





//playOneGame uses the getMidpoint and getUserResponseToGuess functions to find a number
//between 1 and 100 through binary search.
void playOneGame()
{
    char result;
    int low = 0;
    int high = 101;
    int guess = 50;
    bool repeat = true;


    cout << "Think of a number between 1 and 100." << endl;

    do
    {
        getUserResponseToGuess(guess, result);

        if (result == 'h')
        {
            low = guess;
            guess = getMidpoint(low, high);
        }
        else if(result == 'l')
        {
            high = guess;
            guess = getMidpoint(low, high);
        }
        else if(result == 'c')
        {
            repeat = false;
        }
        else
        {
            cout << "Did not understand" << endl;
        }
    }
    while (repeat);
}

int main()
{
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;

    while (response == 'y')
    {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}

/*
Ready to play (y/n)? y
Think of a number between 1 and 100.
Is it 50? (h/l/c) :l
Is it 25? (h/l/c) :h
Is it 37? (h/l/c) :l
Is it 31? (h/l/c) :l
Is it 28? (h/l/c) :l
Is it 26? (h/l/c) :c
Great! Do you want to play again (y/n)? y
Think of a number between 1 and 100.
Is it 50? (h/l/c) :h
Is it 75? (h/l/c) :l
Is it 62? (h/l/c) :h
Is it 68? (h/l/c) :l
Is it 65? (h/l/c) :l
Is it 63? (h/l/c) :c
Great! Do you want to play again (y/n)? n
*/
