

/* Swap two array elements using pointer */

#include "myIO.h"
#include <stdio.h>

void swapArray(int *arr1, int *arr2, int count)
{
	int temp;
	for(int i=0; i<count; i++)
	{
		temp = *(arr1+i);
		*(arr1+i) = *(arr2+i);
		*(arr2+i) = temp;
	}

}

int main()
{
	int count;
	int arr1[10],arr2[10];
	
	ReadInt("Enter no of Elements: ", &count);
	ReadIntArray("Enter array elements in first array: ",arr1,count);
	ReadIntArray("Enter array elements in first array: ",arr2,count);
	swapArray(arr1, arr2, count);
	WriteIntArray("Arra1:", arr1,count);
	WriteIntArray("Arra2:", arr2,count);
	

}
