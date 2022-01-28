

/* Check can a number be expressed as sum of two prime numbers */


#include <stdio.h>

bool checkPrime(int n)
{
    for(int i=2; i<=n/2;i++)
    {
        if( 0 == n%i )
        {
            return false;
        }
    
    }
    return true;

}


int main()
{
    int num;

    printf("Enter number :");
    scanf("%d", &num);
    for(int i=2;i<num/2;i++)
    {   
        if( checkPrime(i) && checkPrime(num-i)  )
            {
                printf("\n%d is sum of primes %d and %d\n",num,i, num-i);
                return 0;
            }

            
    }

    printf("%d is not  sum of primes\n", num); 

}
