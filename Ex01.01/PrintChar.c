#include <stdio.h>
#include "PrintChar.h"

char ReadChar(void)
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

void PrintChar(char character)
{
    printf_s("%c\n", character);
}

void PrintContinuously(void)
{
    printf_s("enter a capital or lowercase letter:\n");
    char usersChar = ReadChar();
    while (usersChar != 'q' && usersChar != 'Q')
    {
        PrintChar(usersChar);
        usersChar = ReadChar();
    }
}