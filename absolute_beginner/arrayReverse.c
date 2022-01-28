

/* Program reverse elements in array using pointer */

#include "myIO.h"
#include <stdio.h>


void reverseArr(int* arr, int count)
{
	int* p1 = arr;
	int* p2 = arr+count-1;
	while(p1<p2)
	{
		int temp = *p1;
		*p1++ = *p2;
		*p2-- = temp;

	}

}

int main()
{
	int count;
	int arr[10];
	ReadInt("Enter no of Elements:", &count);
	ReadIntArray("Elements in Array:", arr, count);
	reverseArr(arr,count);
	WriteIntArray("Elements after reverse:",arr,count);

}
