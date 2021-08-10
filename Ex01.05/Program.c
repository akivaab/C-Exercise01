#include <stdio.h>
#include "ValidateID.h"

int main()
{
    bool validID = validateID(876543210);
    printf("%s", validID ? "true" : "false");

    return 0;
}
