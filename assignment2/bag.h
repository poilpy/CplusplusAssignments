#ifndef BAG_H
#define BAG_H


class bag
{
public:

    bag();
    bag(int size);
    void insert(int n);
    bool remove(int n);


private:

    int CAPACITY;
    int bag_type;
};

#endif // BAG_H
