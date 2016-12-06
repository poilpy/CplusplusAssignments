#ifndef UNSORTED_H
#define UNSORTED_H
#include <cstdlib>
#include "ItemType.h"


struct NodeType
{
    ItemType i;
    NodeType *next;
};

class unsorted
{
public:

    /** Default constructor */
    unsorted();
    ~unsorted();
    void MakeEmpty();
//
//Preconditions:      None
//
//Postcondition:      List is empty
    int GetLength();
//Preconditions:      List has been initialized
//
//Postcondition:      Function value = number of elements in list
    bool IsFull();
//Preconditions:      List has been initialized
//
//Postcondition:      Function value = (list is full)
    ItemType GetItem(ItemType, bool&);
//Preconditions:      List has been initialized
//
//                                Key member of item is initialized
//
//Postcondition:      If there is an element someItem whose
//keymatches item’s key,
//then found = true and copy of  someItem is returned;
//otherwise found = false and item is returned
    void PutItem(ItemType);
//Preconditions:      List has been initialized
//
//                                List is not full
//
//                                Item is not in list
//
//Postcondition:      Item is in the list
    void DeleteItem(ItemType);
//Preconditions:      List has been initialized
//
//Postcondition:      One and only one element in list has a key matching item’s key
    void ResetList();
//Preconditions:      List has been initialized
//
//Postcondition:      Current position is prior to list
    ItemType GetNextItem();
//Preconditions:      List has been initialized
//
//                                Current position is defined
//
//                                Element at current position is not last in list
//
//Postcondition:      Current position is updated to next position
//
//                                Returns a copy of element at current position

private:
    NodeType *listData;
    NodeType *currentPos;
    int length;
};

#endif // UNSORTED_H
