#ifndef _REVERSE_H_
#define _REVERSE_H_

typedef struct DoubleLinkedNode_t
{
    int value;
    Node *previous;
    Node *next;
} Node;

Node createNode(int value, Node* previousNode, Node* nextNode);

typedef struct DoubleLinkedList_t
{
    Node *head;
    Node *last;
} List;

List createList(Node* head, Node* last);

int receiveInput();

void continuousInput();

#endif // !_REVERSE_H_