#include <stdio.h>
#include "ValidateID.h"

int main()
{
    bool validID = validateID(589831782);
    printf("%s", validID ? "true" : "false");

    return 0;
}
