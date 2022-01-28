
/* To print armstrong numbers between given interval*/

#include <stdio.h>
#include <math.h>
#include "my_string.h"

int main()
{
    int min,max,digitCount=0,k=0,armstrong[10];
    bool status;
    printf("Enter interval: ");
    scanf("%d %d", &min,&max);
    int n,sum = 0,d;
    for(int j=min; j<=max; j++)
    {
        n = j;

        digitCount = 0;
        while(n >0)
        {
            digitCount++;
            n= n/10;
        }
        n = j;
        sum = 0;
        while(n > 0)
        {
            d = n%10;
            n = n/10;
            sum = sum +pow( d, digitCount) ;
        }

        if(sum == j)
        {
            armstrong[k++] = j; 
        }
    }
    printf("Armstrong numbers:");
    for(int i=0;i<k;i++)
    {
        printf("%d\t",armstrong[i]);
    }
    printf("\n");

}

