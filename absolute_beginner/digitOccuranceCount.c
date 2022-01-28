


/* Find number of occurence of a digit in n numbers  */

#include <stdio.h>
#include <math.h>

int main()
{
    int digit, limit,seqlimit;

    printf("Enter digit and limit of sequence in 1 to n: ");
    scanf("%d %d", &digit , &seqlimit);
   int count =0;                                         
    limit = seqlimit;
    while(limit)
    {
      int number =limit;
      int i =1;
      while(number)
      {
          int p = pow(10,i);
          if(number% 10==digit)
          {
              count++;
          }
          number = number/p;
      }
      limit--;
    }
    printf("No of %d in 1 to %d: %d\n", digit,seqlimit,count );

}
