#include <iostream>
#include "unsorted.h"

using namespace std;

void PrintList(ofstream&, unsorted);

int main()
{
    unsorted test;
    string command;
    int value;
    ItemType item;
    ifstream f("listData");
    ofstream dataFile;
    dataFile.open("a3testColinMurphy");
    bool found;

    f >> command;

    while (command != "Quit")
    {
        if (command == "PutItem")
        {
            f >> value;
            item.Initialize(value);

            test.PutItem(item);

            f >> command;
        }
        else if(command == "GetLength")
        {
            test.GetLength();
            f >> command;
        }
        else if(command == "PrintList")
        {
            PrintList(dataFile, test);
            f >> command;
        }
        else if(command == "GetItem")
        {
            f >> value;
            item.Initialize(value);


            f >> command;
        }
        else if(command == "IsFull")
        {
            if(test.IsFull())
                dataFile << "true ";
            else
                dataFile << "false ";

            f >> command;
        }
        else if(command == "DeleteItem")
        {
            f >> value;
            item.Initialize(value);

            test.DeleteItem(item);

            f >> command;
        }
        else if(command == "MakeEmpty")
        {
            test.MakeEmpty();

            f >> command;
        }
        else
            f >> command;
    }
    dataFile.close();
    return 0;
}


void PrintList(ofstream& dataFile, unsorted list)
{
    list.ResetList();
    ItemType item;

    for(int i = 0; i < list.GetLength(); i++)
    {
        item = list.GetNextItem();
        item.print(dataFile);
    }
}
