     


/* program to compare two strings*/

#include "my_string.h"
#include <stdio.h>



int main()
{
    char str1[10],str2[10];
    ReadStr("Enter first string:", str1);
    ReadStr("Read Second string :", str2);
    printf("Result : %d \n",StrCompareResult(StrCompare(str1,str2)));


}
