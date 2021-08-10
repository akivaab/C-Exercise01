#include <stdio.h>
#include "PrintUppercaseChar.h"

char receiveInput()
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

char convertToUppercase(char character)
{
    return toupper(character);
}

void printChar(char character)
{
    printf("%c\n", character);
}

void printContinuously()
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