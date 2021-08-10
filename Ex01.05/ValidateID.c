#include "ValidateID.h"

bool validateID(int id)
{
    int sumOfDigits = 0;
    int lastDigit;

    for (int i = 9; i >= 1; i--)
    {
        lastDigit = id % 10;
        id = id / 10;

        if (i % 2 == 0)
        {
            lastDigit = lastDigit * 2;

            if (lastDigit > 9)
            {
                lastDigit = lastDigit - 9;
            }
        }

        sumOfDigits += lastDigit;
    }

    return sumOfDigits % 10 == 0;
}