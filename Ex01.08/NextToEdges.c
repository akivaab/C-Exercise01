#include <stdio.h>
#include "NextToEdges.h"

void SetSmallest(int number)
{
    g_smallest = number;
}

void SetNextSmallest(int number)
{
    g_next_smallest = number;
}

void SetLargest(int number)
{
    g_largest = number;
}

void SetNextLargest(int number)
{
    g_next_largest = number;
}

int ReadInt(void)
{
    int usersNumber;
    scanf_s(" %d", &usersNumber);
    return usersNumber;
}

void InputContinuously(void)
{
    ReceiveTwoNumbersInput();
    int usersNumber = ReadInt();
    while (usersNumber != 0)
    {
        Compare(usersNumber);
        usersNumber = ReadInt();
    }

    printf_s("The next to smallest value is: %d\n", g_next_smallest);
    printf_s("The next to largest value is: %d\n", g_next_largest);
}

void ReceiveTwoNumbersInput(void)
{
    int usersNumber1 = ReadInt();
    int usersNumber2 = ReadInt();

    if (usersNumber1 < usersNumber2)
    {
        SetSmallest(usersNumber1);
        SetNextSmallest(usersNumber2);
        SetLargest(usersNumber2);
        SetNextLargest(usersNumber1);
    }
    else
    {
        SetSmallest(usersNumber2);
        SetNextSmallest(usersNumber1);
        SetLargest(usersNumber1);
        SetNextLargest(usersNumber2);
    }
}

void Compare(int number)
{
    if (number <= g_smallest)
    {
        SetNextSmallest(g_smallest);
        SetSmallest(number);
    }
    else if (number < g_next_smallest)
    {
        SetNextSmallest(number);
    }

    if (number >= g_largest)
    {
        SetNextLargest(g_largest);
        SetLargest(number);
    }
    else if (number > g_next_largest)
    {
        SetNextLargest(number);
    }
}