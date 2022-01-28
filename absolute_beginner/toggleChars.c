

/* Toggle each characters in a string*/

#include <stdio.h>
#include <string.h>
 void toggleCase(char* str)
{
    while(*str!='\0')
    {
          if(*str>='a' && *str<='z')
          {
              *str = *str-32;
          }
          else if( *str>='A' && *str<='Z')
          {
              *str = *str +32;
          }
        str++;
    }  
}




int main()
{
        char str[10];
      printf("Enter String:");
      gets(str);
      toggleCase(str);
      printf("Toggled string : %s\n", str);
}
