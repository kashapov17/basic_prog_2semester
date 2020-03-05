#include "linked_list.h"

//constructor
LIST::LIST(){}

//destructor
LIST::~LIST()
{first = nullptr;}


void LIST::loadTxt(std::istream &ist)
{

    first = nullptr;
    int data;
    Node *newnode;
    while(ist >> data)
    {
        newnode = new Node {data, nullptr}; // initializate Node
        first = insertNode(nullptr, newnode);
    }
    newnode = nullptr;
}

void LIST::printList(const Node *first, std::ostream &ost)
{
    Node _a = *first;
    Node *_first = &_a;
    while(_first != nullptr)
    {
        ost << _first->data;
        ost << ' ';
        _first = _first->link;
    }
}

LIST::Node *LIST::insertNode(Node *prev, Node *node)
{
    if (!prev)
    {
        node->link = first;
        first = node;
    }
    else
    {
        node->link = prev->link;
        prev->link = node;
    }

    return first;
}

LIST::Node *LIST::getFirst() {return first;}
