#ifndef BAG_H
#define BAG_H

#include <cstddef>

class bag
{
public:

    typedef int bag_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 20;

    bag();
    bool insert(bag_type);
    bool remove(bag_type);
    int numOf(bag_type);
    void removeAll();
    bool check(bag_type);
    int bagSize();



private:

    int data[CAPACITY];
    size_type count;
};

#endif // BAG_H
