#include <stdio.h>
#include "ValidateID.h"

int main(void)
{
    bool validID = validateID(589831781);
    printf("%s", validID ? "true" : "false");

    return 0;
}
