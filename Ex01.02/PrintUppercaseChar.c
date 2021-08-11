#include <stdio.h>
#include <ctype.h>
#include "PrintUppercaseChar.h"

char receiveInput(void)
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
    printf("%c\n", character);
}

void printContinuously(void)
{
    char usersChar = receiveInput();
    char capitalizedChar = convertToUppercase(usersChar);
    while (capitalizedChar != 'Q')
    {
        printChar(capitalizedChar);
        usersChar = receiveInput();
        capitalizedChar = convertToUppercase(usersChar);
    }
}