#include <stdio.h>
#include "PrintChar.h"

char receiveInput(void)
{
    char usersChar;
    scanf_s(" %c", &usersChar, 1);
    return usersChar;
}

void printChar(char character)
{
    printf("%c\n", character);
}

void printContinuously(void)
{
    char usersChar = receiveInput();
    while (usersChar != 'q' && usersChar != 'Q')
    {
        printChar(usersChar);
        usersChar = receiveInput();
    }
}