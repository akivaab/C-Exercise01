#include <stdio.h>
#include "Reverse.h"

Node CreateNode(int value, Node *previousNode)
{
    Node node = { .value = value, .previous = previousNode };
    return node;
}

List CreateList(Node *last)
{
    List list = { .last = last };
    return list;
}

int ReadInt(void)
{
    int usersNumber;
    scanf_s(" %d", &usersNumber);
    return usersNumber;
}

void InputContinuously(void)
{
    List list = CreateList(NULL);

    int usersNumber = ReadInt();
    while (usersNumber != 0)
    {
        Node newNode = CreateNode(usersNumber, list.last);
        list.last = &newNode;
        usersNumber = ReadInt();
    }

    PrintInReverse(list);
}

void PrintInReverse(List list)
{
    for (Node *node = list.last; node != NULL; node = node->previous)
    {
        printf_s("%d ", node->value);
    }
}