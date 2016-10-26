#include "ItemType.h"

ItemType::ItemType()
{
    value = 0;
}

RelationType ItemType::ComparedTo(ItemType item)
{
    if(value < item.value)
        return LESS;
    else if(value > item.value)
        return GREATER;
    else
        return EQUAL;
}

void ItemType::print(std::ostream& out)
{
    out << value << " ";
}

void ItemType::Initialize(int i)
{
    value = i;
}
