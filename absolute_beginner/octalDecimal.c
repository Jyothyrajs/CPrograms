
/* Program to Convert Octal to Decimal */

#include <stdio.h>
#include <math.h>
#include<string.h>
#include "my_string.h"


int main()
{
   char str[20];
   int decValue;
   printf("Enter Octal string :");
   scanf("%s",str);
    int length = strlen(str);
    printf("Length of string:%d\n", length);
   for(int i= 0; i<length;i++)
   {
        decValue = decValue + (str[i]-48) * pow(8,length-1-i);
   }  
   printf(" Decimal value : %d \n", decValue);

}
