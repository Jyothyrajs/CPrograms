

/* Replace all 0's with 1's in given integer*/

#include<stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter Number :");
    scanf("%d", &number);
    int i =0,r;
    int n = number, rep_number= number;
    do
    {
           r = n%10;
           n = n/10;
           if(r==0)
           {
                rep_number =number+pow(10,i) ;
           }

           i++;
    }
    while(n!=0);
    printf("\nreplaced Number: %d\n ",rep_number);
}



