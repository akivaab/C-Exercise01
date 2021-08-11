#include <stdio.h>
#include "FixID.h"

int main(void)
{
    int checkSum = fixID(12345678);
    printf("%d", checkSum);

    return 0;
}