#include "unsorted.h"

unsorted::unsorted()
{
    length = 0;
}

void unsorted::MakeEmpty()
{
    listData = NULL;
    length = 0;
    currentPos = NULL;
}

int unsorted::GetLength()
{
    return length;
}

bool unsorted::IsFull()
{
    return (length == MAX_ITEMS);
}

ItemType unsorted::GetItem(ItemType item, bool& found)
{

    NodeType* location = new NodeType();
    location = listData;

    while(location != NULL && !found)
    {
        if(EQUAL == location->next->i.ComparedTo(item))
        {
            found = true;
            return location->next->i;
        }
        else
            location = location->next;
    }
}

void unsorted::PutItem(ItemType item)
{
    if(!IsFull())
    {
        NodeType* location = new NodeType();
        location->i = item;
        location->next = listData;
        listData = location;
        length++;
    }
}

void unsorted::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempPtr;

    if(EQUAL == location->next->i.ComparedTo(item))
    {
        tempPtr = location;
        listData = listData->next;
    }

    delete tempPtr;
    length--;
}

void unsorted::ResetList()
{
    currentPos = NULL;
}

ItemType unsorted::GetNextItem()
{
    if(currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    return currentPos->i;
}





