#include <stdio.h>
#include "ValidateID.h"

int main(void)
{
    int idNumber;
    printf_s("enter a 9-digit ID number:\n");
    scanf_s(" %d", &idNumber);

    bool validID = ValidateID(idNumber);
    printf("ID is valid: %s", validID ? "true" : "false");

    return 0;
}
