#include "ValidateID.h"

bool ValidateID(int id)
{
    int sumOfDigits = LuhnAlgorithm(id);
    return sumOfDigits % 10 == 0;
}

int LuhnAlgorithm(int id)
{
    int sumOfDigits = 0;
    int lastDigit;

    for (int i = 9; i >= 1; i--)
    {
        lastDigit = id % 10;
        id = id / 10;

        if (i % 2 == 0)
        {
            lastDigit = MultiplyByTwo(lastDigit);
        }

        sumOfDigits += lastDigit;
    }

    return sumOfDigits;
}

int MultiplyByTwo(int number)
{
    number = number * 2;

    return SubtractByNineIfDoubleDigits(number);
}

int SubtractByNineIfDoubleDigits(int number)
{
    if (number > 9)
    {
        number = number - 9;
    }

    return number;
}