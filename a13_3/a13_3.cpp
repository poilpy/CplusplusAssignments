/*
a13_3
Colin Murphy
CIS 278
Dave Harden
7/31/16
    This program tests functions that sort arrays in ascending
    order through recursion.

*/

#include <iostream>

using namespace std;

void arraySort(int array[], int size);
int indexOfsmallest(int list[], int startingIndex, int size);

int main()
{
    int sort1[6] = {10, 4, 1, 4, 51, 20};

    arraySort(sort1, 6);

    for(int i = 0; i < 6; i++)
    {
        cout << sort1[i] << endl;
    }

    return 0;
}





/*
    arraySort takes in an array of ints and the size of the array.
    Sorts array in ascending order.
*/
void arraySort(int array[], int size)
{
    int maxIndex = 0, temp = 0;

    maxIndex = indexOfsmallest(array, maxIndex, size);

    temp = array[size - 1];
    array[size - 1] = array[maxIndex];
    array[maxIndex] = temp;

    if(size > 1)
    {
        arraySort(array, --size);
    }
}





/*
    indexOfsmallest takes in an array list, the startingIndex of the list
    and the size of the list. Returns the index of the smallest entry.
*/
int indexOfsmallest(int list[], int startingIndex, int size)
{
    int targetIndex = startingIndex;

    for (int i = startingIndex + 1; i < size; i++){
        if (list[i] > list[targetIndex]){
            targetIndex = i;
        }
    }

    return targetIndex;
}


/*
1
4
4
10
20
51
*/

