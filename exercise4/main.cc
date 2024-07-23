#include <iostream>

using namespace std;

#include "doubly_linked_list.h"

int main()
{
    DoublyLinkedList* pDLL = new DoublyLinkedList();
    pDLL->insertFirst(3);
    pDLL->insertFirst(7);
    pDLL->insertFirst(5);
    cout << pDLL->displayForward();
    pDLL->insertAfterValue(9, 7);
    cout << pDLL->displayForward();
    return 0;
}