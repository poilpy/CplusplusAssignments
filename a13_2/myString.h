/*
    The myString class contains functions for constructing and
handling operator interactions between strings.

    myString(const char* create = "")
        precondition: A constant character pointer to construct
        a myString.
        postcondition: Constructs a myString with an array value
        of create.
    virtual ~myString()
        postcondition: Deconstructs myString.
    myString(const myString& right)
        precondition: A constant myString to copy.
        postcondition: Copies right into the calling object.
    myString& operator=(const myString& right)
        precondition: A constant myString to assign.
        postcondition: Assigns the calling object to right.
    char& operator[](int i)
        precondition: The index of the character.
        postcondition: Returns the character at index i.
    char operator[](int i)const
        precondition: The index of the character.
        postcondition: Returns the character at index i.
    friend ostream& operator<<(ostream& out, const myString& right)
        precondition: A myString right to be outputted through ostream.
        postcondition: Outputs the array in right.
    friend istream& operator>>(istream& in, myString& right)
        precondition: A myString right to be inputted through istream.
        postcondition: Takes user input for the value of right's array.
    friend myString operator+(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Concatenates right onto left.
    myString operator+=(const myString& right)
        precondition: A myString on the right of the operator.
        postcondition: Concatenates right onto the calling object.
    friend bool operator<(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is less than
        or equal to the right.
    friend bool operator<=(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is less than
        or equal to the right.
    friend bool operator>=(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is greater than
        or equal to the right.
    friend bool operator>(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is greater than
        the right.
    friend bool operator==(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is equal to
        the right.
    friend bool operator!=(const myString& left, const myString& right)
        precondition: A myString on the left and right of the operator.
        postcondition: Returns true if the left myString is not equal
        to the right.
    void read(istream& in, char stop)
        precondition: A stream and a character to stop reading at.
        postcondition: Reads user input into the calling object.
    int length()const
        postcondition: Returns the length of the calling object.
*/


#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
using namespace std;

namespace cs_mystring
{
class myString
{
public:
    myString(const char* create = "");
    virtual ~myString();
    myString(const myString& right);
    myString& operator=(const myString& right);
    char& operator[](int i);
    char operator[](int i)const;
    friend ostream& operator<<(ostream& out,
                               const myString& right);
    friend istream& operator>>(istream& in,
                               myString& right);
    friend myString operator+(const myString& left,
                               const myString& right);
    myString operator+=(const myString& right);
    friend bool operator<(const myString& left,
                          const myString& right);
    friend bool operator<=(const myString& left,
                           const myString& right);
    friend bool operator>=(const myString& left,
                           const myString& right);
    friend bool operator>(const myString& left,
                          const myString& right);
    friend bool operator==(const myString& left,
                           const myString& right);
    friend bool operator!=(const myString& left,
                           const myString& right);
    void read(istream& in,
              char stop);

    int length()const;

private:
    char *array;
};
}
#endif // MYSTRING_H

/*
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] =
string [3] = a-z

----- Now reading myStrings from file

----- first, word by word
Read string = The
Read string = first
Read string = time
Read string = we
Read string = will
Read string = read
Read string = individual
Read string = words,
Read string = next
Read string = we
Read string = read
Read string = whole
Read string = lines

----- now, line by line
Read string = The  first  time  we  will
Read string =     read individual words, next
Read string = we read whole lines

----- Testing access to characters (using const)
Whole string is abcdefghijklmnopqsrtuvwxyz
now char by char: abcdefghijklmnopqsrtuvwxyz
----- Testing access to characters (using non-const)
Start with abcdefghijklmnopqsrtuvwxyz and convert to ABCDEFGHIJKLMNOPQSRTUVWXYZ

----- Testing relational operators between myStrings
Comparing app to apple
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing apple to
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true
Comparing  to Banana
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing Banana to Banana
        Is left < right? false
        Is left <= right? true
        Is left > right? false
        Is left >= right? true
        Does left == right? true
        Does left != right ? false

----- Testing relations between myStrings and char *
Comparing he to hello
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing why to wackity
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true

----- Testing concatentation on myStrings
outrageous + milk = outrageousmilk
milk +  = milk
 + cow = cow
cow + bell = cowbell

----- Testing concatentation between myString and char *
abcde + XYZ = abcdeXYZ
XYZ + abcde = XYZabcde

----- Testing shorthand concat/assign on myStrings
who += what = whowhatandwhowhat
what += WHEN = whatWHENandwhatWHEN
WHEN += Where = WHENWhereandWHENWhere
Where += why = WherewhyandWherewhy

----- Testing shorthand concat/assign using char *
I love  += programming = I love programming

----- Testing copy constructor and operator= on myStrings
original is cake, copy is fake
original is cake, copy is fake
after self assignment, copy is Copy Cat
Testing pass & return myStrings by value and ref
after calling Append, sum is BinkyBoo
val is winky
after assign,  val is BinkyBoo
*/
