

/* Program to Convert Binary to Octal */

#include <stdio.h>
#include <math.h>
#include<string.h>
#include "my_string.h"
int binDeci(char* str, int length)
{
    int deci = 0;
    int j =length;
    if(length<1)
    {
        j=0;
    }


    else if(length<2)
    {
          j=1;
    }
        int k =j;
   for(int i= 0; i<3 && i<=j ;i++,k--)
   {
       
            deci = deci + (str[k]-48) * pow(2,i);
     }

    return deci;
}


int main()
{
   char bin[20],oct[5];
   printf("Enter Binary string :");
   scanf("%s",bin);
    int length = strlen(bin);
   int j ;
   if(length%3==0)
   {
       j = length/3;
   }
   else
   {

      j = length/3+1;
   }
    j--;
   int i,k=j;
    for(int i =  length-1; i>=0;)
   {   
       oct[k] = binDeci(bin,i); 
       i = i-3;
       k--;
   }
    printf("Octal:");
    for(i=0;i<=j;i++)
    {
        printf("%d ", oct[i]);
    }

    printf("\n");
}
