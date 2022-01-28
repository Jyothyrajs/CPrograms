/* Permutation of string*/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include "my_string.h"

void permute(char* st,int n=0 )
{
    if( strlen(st) == n+1 )
    {
        printf("%s\n", st);
        return;
    }

    int s = strlen(st);
    for(int i=n; i < s; i++)
    {
        char a[20];
        strcpy(a, st);
        char c = a[i]; a[i]=a[n]; a[n]=c;
        permute(a, n+1);
    }

}
int main()
{
    char str[10],temp[10];
    printf("Input String to permute:");
    gets(str);
    permute(str);
}



    
