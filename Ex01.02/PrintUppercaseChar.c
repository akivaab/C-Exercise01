#include <stdio.h>
#include <ctype.h>
#include "PrintUppercaseChar.h"

char readChar(void)
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

char convertToUppercase(char character)
{
    return (char) toupper(character);
}

void printChar(char character)
{
    printf_s("%c\n", character);
}

void printContinuously(void)
{
    char usersChar = readChar();
    char capitalizedChar = convertToUppercase(usersChar);
    while (capitalizedChar != 'Q')
    {
        printChar(capitalizedChar);
        usersChar = readChar();
        capitalizedChar = convertToUppercase(usersChar);
    }
}