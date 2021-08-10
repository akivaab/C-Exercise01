#include <stdio.h>
#include "NextToEdges.h"

int receiveInput()
{
    int usersNumber;
    scanf(" %d", &usersNumber);
    return usersNumber;
}

void continuousInput()
{
    int usersNumber = receiveInput();
    while (usersNumber != 0)
    {
        compare(usersNumber);
        usersNumber = receiveInput();
    }
}

void compare(number)
{
    if (number < g_smallest)
    {
        g_next_smallest = g_smallest;
        g_smallest = number;
    }
    else if (number < g_next_smallest)
    {
        g_next_smallest = number;
    }
    else if (number > g_next_largest)
    {
        g_next_largest = number;
    }
    else if (number > g_largest)
    {
        g_next_largest = g_largest;
        g_largest = number;
    }
}