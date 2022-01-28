

/* Convert an number/digit to words form*/

#include <stdio.h>
#include <math.h>

int countDigit(int number)
{
    int count =0;
    while(number!= 0)
    {
        number = number/10;
        count++;
    }
    return count;
}



int main()
{
    int number,digit;
    printf("Enter number:");
    scanf("%d", &number);
    int digitCount = countDigit(number);
    int d =digitCount -1;
    while(digitCount!=0)
    {
            int p = pow(10,d);
          digit = number/p;
          switch(digitCount)
          {
              case 7:   d--;
                        p = pow(10,d);
                  digit = number/p;
              case 6:
                    printf("%d  Lakhs", digit);
                    break;
                case 5:  d--;
                         p = pow(10,d);
                         digit = number/p;
                case 4:
                    printf(  "%d thousnd ",digit);
                    break;
                case 3:  printf("%d Hundred ", digit);
                         break;
                case 2:  printf("%dty ", digit);
                         break;
                case 1:  printf("%d\n",digit);
                         break;
          }
          number = number % p;
          d--;
          digitCount--;
    }
}


                         



