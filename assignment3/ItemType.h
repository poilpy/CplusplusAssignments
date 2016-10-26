#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <fstream>

const int MAX_ITEMS = 5;

enum RelationType
{
    LESS,
    GREATER,
    EQUAL
};

class ItemType
{
public:
    /** Default constructor */
    ItemType();
    RelationType ComparedTo(ItemType);
//Precondition:        Self and item have their key members initialized
//
//Postcondition:
//
//   Function value  = LESS if the key of self is less than the key of item
//
//                                = GREATER if the key of self is greater than the key of item
//
//                                = EQUAL if the keys are equal
    void print(std::ostream&);
    void Initialize(int);

private:
    int value;

};

#endif // ITEMTYPE_H
