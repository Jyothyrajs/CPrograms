

/* Program to convert Octal to Binary*/


#include <stdio.h>
#include <math.h>
#include<string.h>
#include "my_string.h"

//Decimal to Binary
void decBin(int n)
{
     int binary[10];
   int i =0,j;
    binary[0] = n%2;
   while( n>1 )
   {                                
            j = i;
            int k =j+1;
            while(k>0)
            {
                binary[k] = binary[j];
                j--;
                k--;
            }
            n = n/2;
            binary[0] = n%2;
            i++;
   }  
   

   for(j= 0; j<=i;j++)
   {

        printf("%d ", binary[j]);
   }
    printf("\n");
}


int main()
{
   char str[20];
   int decValue;
   printf("Enter Octal string :");
   scanf("%s",str);
    int length = strlen(str);
    printf("Length of string:%d\n", length);
    // Octal to Decimal
   for(int i= 0; i<length;i++)
   {
        decValue = decValue + (str[i]-48) * pow(8,length-1-i);
   }  
   printf(" Decimal value : %d \n", decValue);
   decBin(decValue);

}

