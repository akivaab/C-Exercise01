#include <stdio.h>
#include <ctype.h>
#include "PrintUppercaseChar.h"

char ReadChar(void)
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

char ConvertToUppercase(char character)
{
    return (char) toupper(character);
}

void PrintChar(char character)
{
    printf_s("%c\n", character);
}

void PrintContinuously(void)
{
    printf_s("enter a capital or lowercase letter:\n");
    char usersChar = ReadChar();
    char capitalizedChar = ConvertToUppercase(usersChar);
    while (capitalizedChar != 'Q')
    {
        PrintChar(capitalizedChar);
        usersChar = ReadChar();
        capitalizedChar = ConvertToUppercase(usersChar);
    }
}