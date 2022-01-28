
/* Program to Convert  Decimal to  Binary*/

#include <stdio.h>


int main()
{
   int binary[20];
   int decValue;
   printf("Enter Decimal :");
   scanf("%d", &decValue);
   int n = decValue;
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

        printf("%d\t ", binary[j]);
   }
    printf("\n");
}
