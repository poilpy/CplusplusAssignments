/*
a4_2
Colin Murphy

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









void sortData(string names[], int scores[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        swap(names[indexOfSmallest(scores, i, size)], names[i]);
        swap(scores[indexOfSmallest(scores, i, size)], scores[i]);
    }
}








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
