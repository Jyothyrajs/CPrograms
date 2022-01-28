

/*Program to sort an integer array using pointer*/

#include <stdio.h>
#include "myIO.h"

void sort(int* a, int c)
{
    int* p;
    int* q ;
    for(p=a;p < a+c; p++ )
    {
        for(q = p+1; q < a + c; q++)
        {
            if( *q < *p)
            {
                swap(p,q);
            }
        }
    }
}

int main()
{
    int count;
    int ele[10];
    ReadInt("Enter no of elements in array :", &count);
    ReadIntArray("Enter elements: ",ele, count); 
    sort(ele,count);
    WriteIntArray("Sorted array: ",ele,count);
}
