#include <stdio.h>
//#define hello 10
#define PI 3.14
double i;
int main()
{
    FILE *fp = stdout;
    stderr = fp;
    fprintf(stderr, "%s\n","hello");
    printf("%g\n",i);
    int a[4][2] = {1,2, ,3,5};
    int k =0,l =0;
    for(k=0;k<4;k++)
        for(l=0;l<2;l++)
            printf("%d\n",a[k][l]);

}

