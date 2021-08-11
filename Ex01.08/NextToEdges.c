#include <stdio.h>
#include "NextToEdges.h"

void setSmallest(int number)
{
    g_smallest = number;
}

void setNextSmallest(int number)
{
    g_next_smallest = number;
}

void setLargest(int number)
{
    g_largest = number;
}

void setNextLargest(int number)
{
    g_next_largest = number;
}

int receiveInput()
{
    int usersNumber;
    scanf_s(" %d", &usersNumber);
    return usersNumber;
}

void inputContinuously()
{
    receiveTwoNumbersInput();
    int usersNumber = receiveInput();
    while (usersNumber != 0)
    {
        compare(usersNumber);
        usersNumber = receiveInput();
    }

    printf("The next to smallest value is: %d\n", g_next_smallest);
    printf("The next to largest value is: %d\n", g_next_largest);
}

void receiveTwoNumbersInput()
{
    int usersNumber1 = receiveInput();
    int usersNumber2 = receiveInput();

    if (usersNumber1 < usersNumber2)
    {
        setSmallest(usersNumber1);
        setNextSmallest(usersNumber2);
        setLargest(usersNumber2);
        setNextLargest(usersNumber1);
    }
    else
    {
        setSmallest(usersNumber2);
        setNextSmallest(usersNumber1);
        setLargest(usersNumber1);
        setNextLargest(usersNumber2);
    }
}

void compare(number)
{
    if (number <= g_smallest)
    {
        setNextSmallest(g_smallest);
        setSmallest(number);
    }
    else if (number < g_next_smallest)
    {
        setNextSmallest(number);
    }

    if (number >= g_largest)
    {
        setNextLargest(g_largest);
        setLargest(number);
    }
    else if (number > g_next_largest)
    {
        setNextLargest(number);
    }
}