// Insertion sort : insert the element in the position of sorted array


#include<stdio.h>

void swap( int *, int *);
void ins_sort(int [], int );
void show( int [], int);

int main()
{
	int a[] = {12,11,10,3, 7,23,43,33,23,8,45,87};
	int n = sizeof(a)/sizeof(int);
	ins_sort(a,n);
	printf("Sorted Array: ");
	show(a,n);
}


void swap( int* a, int* b )
{
	int t = *a;
	*a = *b;
	*b = t;
}

void ins_sort( int a[], int n)
{
	for( int i =0; i<n; i++ )
	{
		for( int j = i+1; j > 0; j--)
		{
			if( a[j] < a[j-1] )
			{
				swap(&a[j],&a[j-1]);
			}	
		}
	}
	
}

void show(int a[], int n )
{
	for( int i =0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
