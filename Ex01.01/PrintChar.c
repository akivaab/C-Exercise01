#include <stdio.h>
#include "PrintChar.h"

char receiveInput()
{
    char ch;
    scanf_s(" %c", &ch, 1);
    return ch;
}

void printChar(char ch)
{
    printf("%c\n", ch);
}

void printContinuously()
{
    char usersChar = receiveInput();
    while (usersChar != 'q' && usersChar != 'Q')
    {
        printChar(usersChar);
        usersChar = receiveInput();
    }
}