


/* Program to concatenate two strings*/

#include "myIO.h"
#include <stdio.h>

    char* move(char* des, char* src)
    {
        while(*src!='\0')
        {
            *des = *src;
            des++;src++;
        }
         return des;
    }

int main()
{
    char begStr[10], endStr[10],dest[20];
    char *beg = begStr, *end = endStr , *d = dest;
    ReadStr("Enter First string: ",begStr);
    ReadStr("Enter Second String : ",endStr);
    
    char *c = move(d,beg);
    char *l = move(c,end);

    *l = '\0';
    printf("Concatenated string : %s\n",dest);
    
}
