#include "ValidateID.h"

bool validateID(int id)
{
    int sumOfDigits = luhnAlgorithm(id);
    return sumOfDigits % 10 == 0;
}

int luhnAlgorithm(int id)
{
    int sumOfDigits = 0;
    int lastDigit;

    for (int i = 9; i >= 1; i--)
    {
        lastDigit = id % 10;
        id = id / 10;

        if (i % 2 == 0)
        {
            lastDigit = multiplyByTwo(lastDigit);
        }

        sumOfDigits += lastDigit;
    }

    return sumOfDigits;
}

int multiplyByTwo(int number)
{
    number = number * 2;

    return subtractByNineIfDoubleDigits(number);
}

int subtractByNineIfDoubleDigits(int number)
{
    if (number > 9)
    {
        number = number - 9;
    }

    return number;
}