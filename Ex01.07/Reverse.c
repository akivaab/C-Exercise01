#include <stdio.h>
#include "Reverse.h"

Node createNode(int value, Node *previousNode)
{
    Node node = { .value = value, .previous = previousNode };
    return node;
}

List createList(Node *last)
{
    List list = { .last = last };
    return list;
}

int readInt(void)
{
    int usersNumber;
    scanf_s(" %d", &usersNumber);
    return usersNumber;
}

void inputContinuously(void)
{
    List list = createList(NULL);

    int usersNumber = readInt();
    while (usersNumber != 0)
    {
        Node newNode = createNode(usersNumber, list.last);
        list.last = &newNode;
        usersNumber = readInt();
    }

    printInReverse(list);
}

void printInReverse(List list)
{
    for (Node *node = list.last; node != NULL; node = node->previous)
    {
        printf_s("%d ", node->value);
    }
}