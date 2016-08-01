    #include <iostream>
    #include <cstring>

    using namespace std;

void reverseWithinBounds(char array[], int lowerBound, int upperBound);
void reverseCstring(char* arrayC);

int main()
{
    char test[] = "0123456789";
    char* testC = "abcdefghijklmnopqrstuvwxyz";

    reverseWithinBounds(test, 4, 6);
    reverseCstring(testC);

    cout << test << endl;

    cout << testC << endl;



    return 0;
}






void reverseWithinBounds(char array[], int lowerBound, int upperBound)
{
    char temp;

    if(lowerBound != upperBound)
    {
        temp = array[upperBound];
    cout << array[lowerBound] << endl;
        array[upperBound] = array[lowerBound];
        array[lowerBound] = temp;

        reverseWithinBounds(array, lowerBound + 1, upperBound - 1);
    }
    cout << array << endl;

}






void reverseCstring(char* arrayC)
{
    reverseWithinBounds(arrayC, 0, strlen(arrayC) - 1);
}



