

/* Program to return multiple values from function using pointer */

   /* Program find the largest and second largset from 3 numbers*/

#include "myIO.h"
#include <stdio.h>

void larg_seclarge(int n1, int n2, int n3, int* large, int* sec_large)
{
   if(n1 > n2)
   {
            if(n3 > n1)
            {
                *large = n3;
                *sec_large = n1;
            }
            else
            {
                *large = n1;
                *sec_large = n3;
            }
   }
    else
    {

        if(n2>n3)
        {

            *large=n2;
            *sec_large = n3 ;
            }
        else
        {

            *large = n3;
            *sec_large = n2 ;
        }

    }

  // (n1 > n2)?
    //        ((n3 > n1)? *large = n3,*sec_large = n1: *large = n1,*sec_large = n3)
      //      : ((n2>n3)?*large=n2, *sec_large = n3:*large = n3,*sec_large = n2)) ;
}

int main()
{
    int num1,num2,num3,l,s;
    ReadInt("Number 1: ",&num1);
    ReadInt("Number 2: ",&num2);
    ReadInt("Number 3: ",&num3);
     larg_seclarge(num1,num2,num3,&l,&s);
    printf("LArgest: %d",l);
    printf("Second largest : %d ",s);
}


