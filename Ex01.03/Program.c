#include <stdio.h>
#include "StringLength.h"

int main(void)
{
    size_t stringLength = strlen("hello there sir");
    printf("%zu", stringLength);

    return 0;
}