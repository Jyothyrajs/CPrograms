

/* Capitalize last and first character of word in a string*/

#include <stdio.h> 
#include <string.h>

void capitalize(char* str)
{
    if(*str>='a' && *str<='z')
        *str = *str-32;
   if( *(str+strlen(str)-1) >= 'a' &&  *(str+strlen(str)-1) <= 'z')
           *(str+strlen(str)-1) = *(str+strlen(str)-1)-32;
}

int main()
{
    char str[10];
     printf("Enter String:");
     gets(str);
     capitalize(str);
     printf("Capitalized string : %s\n", str);
}


