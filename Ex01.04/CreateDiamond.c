#include <stdio.h>
#include "CreateDiamond.h"

void PrintCharacterNumTimes(char character, int num)
{
    for (int i = 0; i < num; i++)
    {
        putchar(character);
    }
}

void PrintNewline(void)
{
    printf_s("\n");
}


void CreateDiamondTop(int baseSize)
{
    int numSpaces = baseSize / 2;
    int numStars = 1;
    for ( ; numStars <= baseSize; numSpaces--, numStars += 2)
    {
        PrintCharacterNumTimes(SPACE, numSpaces);
        PrintCharacterNumTimes(STAR, numStars);
        PrintNewline();
    }
}

void CreateDiamondBottom(int baseSize)
{
    int numSpaces = 1;
    int numStars = baseSize - 2;
    for ( ; numStars >= 1; numSpaces++, numStars -= 2)
    {
        PrintCharacterNumTimes(SPACE, numSpaces);
        PrintCharacterNumTimes(STAR, numStars);
        PrintNewline();
    }
}

void CreateDiamond(unsigned int diamondBaseSize)
{
    if (IsOdd(diamondBaseSize))
    {
        CreateDiamondTop(diamondBaseSize);
        CreateDiamondBottom(diamondBaseSize);
    }
    else
    {
        printf_s("Cannot create diamond with an even-sized base.");
    }
}

bool IsOdd(int number)
{
    return number % 2 == 1;
}