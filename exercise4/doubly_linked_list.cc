#include <iostream>

using namespace std;

#include "doubly_linked_list.h"

DoublyLinkedList::DoublyLinkedList()
    : m_pFirstNode(nullptr), m_pLastNode(nullptr), m_numOfElements(0)
{
}

DoublyLinkedList::~DoublyLinkedList()
{
}

bool DoublyLinkedList::isEmpty()
{
    return this->m_numOfElements == 0;
}

Node* DoublyLinkedList::search(int value)
{
    Node* res = this->m_pFirstNode;
    while (res)
    {
        if(res->getData() == value) { break; }
        res = res->getRight();
    }
    
    return res;
}

int DoublyLinkedList::getNumOfElements()
{
    return this->m_numOfElements;
}

int DoublyLinkedList::findMax()
{
    int res = this->m_pFirstNode->getData();
    Node* tmp = this->m_pFirstNode->getRight();
    while (tmp)
    {
        if(res < tmp->getData())
        {
            res = tmp->getData();
        }
        tmp = tmp->getRight();
    }
    return res;
}

int DoublyLinkedList::findMin()
{
    int res = this->m_pFirstNode->getData();
    Node* tmp = this->m_pFirstNode->getRight();
    while (tmp)
    {
        if(res < tmp->getData())
        {
            res = tmp->getData();
        }
        tmp = tmp->getRight();
    }
    return res;
}

void DoublyLinkedList::insertFirst(int value)
{
    Node* newNode = new Node(value, nullptr, nullptr);
    if(this->isEmpty())
    {
        this->m_pFirstNode = newNode;
        this->m_pLastNode = newNode;
    }
    else
    {
        this->m_pFirstNode->setLeft(newNode);
        newNode->setRight(this->m_pFirstNode);
        this->m_pFirstNode = newNode;
    }
    this->m_numOfElements += 1;
}

void DoublyLinkedList::insertLast(int value)
{
    Node* newNode = new Node(value, nullptr, nullptr);
    if(this->isEmpty())
    {
        this->m_pFirstNode = newNode;
        this->m_pLastNode = newNode;
    }
    else
    {
        this->m_pLastNode->setRight(newNode);
        newNode->setLeft(this->m_pLastNode);
        this->m_pLastNode = newNode;
    }
    this->m_numOfElements += 1;
}

bool DoublyLinkedList::insertAfterValue(int newValue,int value)
{
    Node* searchNode = this->search(value);
    if(searchNode)
    {
        Node* newNode = new Node(newValue, searchNode, searchNode->getRight());
        searchNode->setRight(newNode);
        searchNode->getRight()->setLeft(newNode);
        this->m_numOfElements += 1;
        return true;
    }
    return false;
}

string DoublyLinkedList::displayForward()
{
    string res = "";
    if(this->isEmpty())
    {
        res = "List is empty";
    }
    else
    {
        Node* cur = this->m_pFirstNode;
        while (cur)
        {
            res += std::to_string(cur->getData()) + " ";
            cur = cur->getRight();
        }
    }
    return res;
}