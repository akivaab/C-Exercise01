#include <stdio.h>
#include "Reverse.h"

Node createNode(int value, Node* previousNode, Node* nextNode)
{
    Node node = { .value = value, .previous = previousNode, .next = nextNode };
    return node;
}

List createList(Node* head, Node* last)
{
    List list = { .head = head, .last = last };
    return list;
}

int receiveInput()
{
    int usersNumber;
    scanf_s(" %d", &usersNumber);
    return usersNumber;
}

void continuousInput()
{
    int usersNumber = receiveInput();
    Node node = createNode(usersNumber, NULL, NULL);
    List list = createList(&node, &node);

    usersNumber = receiveInput();
    while (usersNumber != 0)
    {
        Node newNode = createNode(usersNumber, list.last, NULL);
        node.next = &newNode;
        list.last = &newNode;
        node = newNode;
    }


}