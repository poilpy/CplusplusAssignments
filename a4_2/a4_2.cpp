/*
a4_2
Colin Murphy

*/


#include <iostream>

using namespace std;

void initializeArrays(string names[],
                      int scores[],
                      int size);
void sortData(string names[],
              int scores[],
              int size);
void displayData(const string names[],
                 const int scores[],
                 int size);



int main()
{
    int numScores;
    string* names;
    int* scores;

    cout << "Enter the number of scores: ";
    cin >> numScores;

    initializeArrays(names, scores, numScores);

    displayData(names, scores, numScores);


    delete[] &names;
    delete[] &scores;

    return 0;
}







void initializeArrays(string names[], int scores[], int size)
{
    names = new string[size];
    scores = new int[size];
    cout << "Enter names" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Name: ";
        cin >> names[i];
    }

    cout << "Enter scores" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Score: ";
        cin >> scores[i];
    }
}







void sortData(string names[], int scores[], int size)
{


}






void displayData(const string names[], const int scores[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << scores[i] << endl;
    }
}
