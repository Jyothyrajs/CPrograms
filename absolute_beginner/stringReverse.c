/** Program to reverse a string*/


#include "my_string.h"
#include <stdio.h>

int main()
{
    char str[5];
    ReadStr("Enter string", str);
    StrReverse(str);
    printf("Reverse : %s\n",str);
}

    
