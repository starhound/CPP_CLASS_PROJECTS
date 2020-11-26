//Wesley Reid
//COP2222 - Chapter 18 Problems 1 & 2
//May 2nd 2020

#include <iostream>
#include "NumberList.h"
using namespace std;



int main()
{
    NumList<int> list;
    cout << "Inserting values 0-14 in linked list.\n";
    for (int i = 0; i < 15; i++) {
        list.insertNode(i);
    }

    list.displayList();
  
    cout << "Appending value 15 into linked list.\n";
    list.appendNode(15);

    cout << "Displaying Linked List.\n";

    list.displayList();

    cout << "Deleting value 13 from linked list.\n";
    list.deleteNode(13);

    cout << "Reporting linked list\n";
    list.displayList();
    return 0;
}

