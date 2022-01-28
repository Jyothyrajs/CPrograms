
/* Program to copy an array elements to another Arrray*/

#include "myIO.h"
#include <stdio.h>
#include <stdlib.h>
void copy_Array(int* source, int* dest, int count);

int main()
{
	int source[10];
	int dest[10];
	int count;
	ReadInt("Number of elements:",&count);
	ReadIntArray("Enter elements",source,count);
	WriteIntArray("Array elements",source,count);
	copy_Array(source,dest,count);
	WriteIntArray("Array elements",dest,count);
}

void copy_Array(int* source, int* dest,int count)
{
	for(int i=0; i<count;i++)
	{
		*(dest+i)=*(source+i);
	}


}
