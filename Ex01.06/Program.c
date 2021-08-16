#include <stdio.h>
#include "FixID.h"

int main(void)
{
    int idNumber;
    printf_s("enter the first 8 digits of an ID number:\n");
    scanf_s(" %d", &idNumber);

    int checkSum = FixID(idNumber);
    printf_s("%d", checkSum);

    return 0;
}