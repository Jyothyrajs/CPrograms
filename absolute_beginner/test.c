
#include<stdio.h>
#define CUBE(X) (X*X*X) 
int main()
{
    
    int ar[3][2]={
               
                         1,2,3 ,4,5,6
                  };
   // printf("\n%u\t%u\t%u\n",(ar+0),(ar[0]+1),*(*(ar+0)+1));

   // printf("\n%u\t %u\t %u\n", ar,*ar,**(ar+1));
    printf("Address of each element and its size: %p\n%p", ar,&ar[0]);
    for(int k=0;k<3;k++)
    for(int j=0;j<2;j++)
    {
        printf("%p\t%d\n",&ar[k][j],sizeof(ar[k][j]));
    }

    int* pv = ar[0];
    int value = 3;
    for(int i=0; i<5;i++)
    {
        //*pv++ *= value;
        printf("%d\t",*(pv+i));
    }


}


