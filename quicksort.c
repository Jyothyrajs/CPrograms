
// Quick sort : selects the last element as pivot, partition and sort each partiotion.

#include<stdio.h>



void swap( int *a, int *b )
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low-1;
	for( int j = low; j < high ; j++ )
	{
		if( a[j] < pivot )
		{
			i++;
			swap( &a[j], &a[i]);
			
		}	
	}
		swap( 	&a[i+1], &a[high]);
		return i+1;
	
}


void q_sort( int a[], int low, int high )
{
	int pi;
	if( low < high)
	{
		pi = partition(a,low,high);
		q_sort(a,low, pi-1);
		q_sort(a, pi+1, high);
	}
}




void show(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = {10,22,21,2,13,34,43,22,112};
	int n = sizeof(a)/sizeof(int);
	q_sort(a,0,n-1);
	printf("Sorted array :");
	show(a,n);

}
