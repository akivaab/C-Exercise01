#include <stdio.h>
#include "CreateDiamond.h"

void printCharacterNumTimes(char character, int num)
{
    for (int i = 0; i < num; i++)
    {
        putchar(character);
    }
}

void printNewline()
{
    printf("\n");
}


void createDiamondTop(int baseSize)
{
    int numSpaces = baseSize / 2;
    int numStars = 1;
    for ( ; numStars <= baseSize; numSpaces--, numStars += 2)
    {
        printCharacterNumTimes(SPACE, numSpaces);
        printCharacterNumTimes(STAR, numStars);
        printNewline();
    }
}

void createDiamondBottom(int baseSize)
{
    int numSpaces = 1;
    int numStars = baseSize - 2;
    for ( ; numStars >= 1; numSpaces++, numStars -= 2)
    {
        printCharacterNumTimes(SPACE, numSpaces);
        printCharacterNumTimes(STAR, numStars);
        printNewline();
    }
}

void createDiamond(int diamondBaseSize)
{
    if (isOdd(diamondBaseSize))
    {
        createDiamondTop(diamondBaseSize);
        createDiamondBottom(diamondBaseSize);
    }
    else
    {
        printf("Cannot create diamond with an even-sized base.");
    }
}

bool isOdd(int number)
{
    return number % 2 == 1;
}


/* All in one function :

void createDiamond(int diamondBaseSize)
{
    if (diamondBaseSize % 2 == 1)
    {
        int numSpaces = baseSize / 2;
        int numStars = 1;
        for ( ; numStars <= baseSize; numSpaces--, numStars += 2)
        {
            for (int i = 0; i < numSpaces; i++)
            {
                putchar(' ');
            }
            for (int i = 0; i < numStars; i++)
            {
                putchar('*');
            }
            printf("\n");
        }

        numSpaces = 1;
        numStars = baseSize - 2;
        for ( ; numStars >= 1; numSpaces++, numStars -= 2)
        {
            for (int i = 0; i < numSpaces; i++)
            {
                putchar(' ');
            }
            for (int i = 0; i < numStars; i++)
            {
                putchar('*');
            }
            printf("\n");
        }
    }
    else
    {
        printf("Cannot create diamond with an even-sized base.");
    }
}
*/