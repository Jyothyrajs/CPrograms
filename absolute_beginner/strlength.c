/* Program to find the length of a string using pointer */

#include "myIO.h"
#include <stdio.h>

int main()
{
    char str[10];
    int count = 0;
    ReadStr("Enter string: ",str);
    char *p = str;
    while(*p)
    {
        count++;
        p++;
    }
    printf("Length of String : %d", count);
}

