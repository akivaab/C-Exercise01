#include <stdio.h>
//#include "CreateDiamond.h"

int main(void)
{
    int diamondBaseSize;
    printf_s("enter a positive, odd integer:\n");
    scanf_s(" %d", &diamondBaseSize);
    CreateDiamond(diamondBaseSize);

    return 0;
}