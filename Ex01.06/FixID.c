#include "FixID.h"

int FixID(int id)
{
    int sumOfDigits = LuhnAlgorithm(id);
    return GetCheckSum(sumOfDigits);
}

int LuhnAlgorithm(int id)
{
    int sumOfDigits = 0;
    int lastDigit;

    for (int i = 8; i >= 1; i--)
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
    //number = number * 2;

    return SubtractByNineIfDoubleDigits(number * 2);
}

int SubtractByNineIfDoubleDigits(int number)
{
    /*
    if (number > 9)
    {
        number = number - 9;
    }

    return number;
    */

    return (number > 9 ? number - 9 : number);

}

int GetCheckSum(int sum)
{
    int sumOnesValue = sum % 10;
    return 10 - sumOnesValue;
}