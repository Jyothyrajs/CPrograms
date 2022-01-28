

/* Program to search for an element in an array using pointer */

#include "myIO.h"
#include <stdio.h>

enum bool search_arr(int *arr, int count, int key)
{
	int* p = arr;
	for(int i=0; i<count ; i++,p++)
	{
		if(*p == key)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	int arr[5], count,key;
	ReadInt("Enter no of elements : ", &count);	
	ReadIntArray("Enter elements in array:", arr, count);
	ReadInt("Key to search:", &key);	

	printf("%s\n", (search_arr(arr, count, key) ? "Found" : "Not found"));
}
