/*
a4_2
Colin Murphy
CIS 278
Dave Harden
6/29/16

    This is a simple program for asking the user to input high scores. The scores
are sorted by value and the 4 or less highest scores are outputted.
*/


#include <iostream>

using namespace std;

const int TOP_SCORES = 4;

void initializeArrays(string names[],
                      int scores[],
                      int size);
void sortData(string names[],
              int scores[],
              int size);
void displayData(const string names[],
                 const int scores[],
                 int size);
int indexOfSmallest(const int list[],
                    int startingIndex,
                    int size);


int main()
{
    int numScores;
    string* names;
    int* scores;

    cout << "Enter the number of scores: ";
    cin >> numScores;

    names = new string[numScores];
    scores = new int[numScores];

    initializeArrays(names, scores, numScores);

    sortData(names, scores, numScores);

    displayData(names, scores, numScores);


    delete[] &names;
    delete[] &scores;

    return 0;
}







//initializeArrays takes in the arrays for names and scores as well as the size of each and asks the user to input the names and corresponding scores.
void initializeArrays(string names[], int scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name for score #" << i+1 << ": ";
        cin >> names[i];
        cout << "Enter the score for score #" << i+1 << ": ";
        cin >> scores[i];
    }
}







//sortData takes in the arrays for names and scores as well as the size of each and sorts them in descending order of score.
void sortData(string names[], int scores[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        swap(names[indexOfSmallest(scores, i, size)], names[i]);
        swap(scores[indexOfSmallest(scores, i, size)], scores[i]);
    }
}







//indexOfSmallest takes in an array, an initial index in the array and the size of the array to located the index of the smallest value.
int indexOfSmallest(const int list[], int startingIndex, int size)
{
    int targetIndex = startingIndex;

    for (int i = startingIndex + 1; i < size; i++){
        if (list[i] < list[targetIndex]){
            targetIndex = i;
        }
    }

    return targetIndex;
}







//displayData takes in the arrays for names and scores as well as the size of each and outputs the top scores.
void displayData(const string names[], const int scores[], int size)
{
    cout << endl;
    cout << "Top scorers: " << endl;

    if(size >= TOP_SCORES)
        for (int i = size - 1; i >= size - TOP_SCORES; i--)
        {
            cout << names[i];
            cout << " : " << scores[i] << endl;
        }
    else
        for (int i = size - 1; i >= 0; i--)
        {
            cout << names[i];
            cout << " : " << scores[i] << endl;
        }
}

/*
Enter the number of scores: 6
Enter the name for score #1: Bill
Enter the score for score #1: 540
Enter the name for score #2: Fred
Enter the score for score #2: 340
Enter the name for score #3: Tim
Enter the score for score #3: 70
Enter the name for score #4: Phil
Enter the score for score #4: 305
Enter the name for score #5: Cindy
Enter the score for score #5: 700
Enter the name for score #6: Jessica
Enter the score for score #6: 660

Top scorers:
Cindy : 700
Jessica : 660
Bill : 540
Fred : 340
*/
