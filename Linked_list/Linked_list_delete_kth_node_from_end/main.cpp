//Idea is to delete the element from kth index position from the end

#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List myList;
    myList.addNode(3);
    myList.addNode(5);
    myList.addNode(7);
    myList.addNode(10);
    myList.addNode(12);
    myList.printList();

    //myList.delNode(3);
    myList.removeKthNodefromEnd(2);
    myList.printList();

    return 0;
}
