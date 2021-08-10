#include "StringLength.h"

size_t strlen(const char *stringStart)
{
    const char *stringEnd = stringStart;
    for ( ; *stringEnd != '\0'; stringEnd++)
    {
        ;
    }
    return stringEnd - stringStart;
}