#include <stdio.h>
#include "PrintChar.h"

char readChar(void)
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

void printChar(char character)
{
    printf_s("%c\n", character);
}

void printContinuously(void)
{
    char usersChar = readChar();
    while (usersChar != 'q' && usersChar != 'Q')
    {
        printChar(usersChar);
        usersChar = readChar();
    }
}