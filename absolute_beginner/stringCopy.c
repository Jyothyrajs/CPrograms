


/* Program copy one string to another using pointer */

#include "myIO.h"
#include <stdio.h>

int main()
{
    char source[10],dest[10];
    ReadStr("Enter source string: ", source);
    char* s = source;
    char* d =dest;
    while(*s)
    {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';
    printf("Destination string: %s",dest);

}
