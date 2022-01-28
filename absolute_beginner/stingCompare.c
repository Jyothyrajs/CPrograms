

#include "myIO.h"
#include <stdio.h>


int main()
{
    char str1[10],str2[10];
    char *s1= str1,*s2= str2;
    ReadStr("Enter first string :",str1);
    ReadStr("Enter second string :",str2);
    
    int r = compare(s1,s2);
}

