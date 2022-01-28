 /* Find number of days in a given month of a given year*/
#include <stdio.h>

int main()
{
    int months[12];
    months[0] = months[2] =months[4] = months[6]= months[7] = months[9] = months[11]= 31;
      months[3] =months[5] = months[8]= months[10] =  30;
      months[1] = 28;
      int month, year;
      printf("Enter month and Year :");
      scanf("%d %d", &month,&year);
      int i =0;
      int daysCount=0;
      while(month != i+1)
      {
               i++;
      }
      if(i+1==2)
      {   
          if(year%400!=0)
          {
              daysCount= 28;
          }
          else
          {
              daysCount = 29;
          }
      }
      else
      {

         daysCount = months[i];
      }

    printf("No of days : %d\n", daysCount);


}
