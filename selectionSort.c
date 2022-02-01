

//Find the minimum element from the list and replace it with the first
#include<stdio.h>
void swap(int *, int *);
void selection_sort(int a[],int);
void show(int a[], int n);

int main()
{
	int a[] = {20,12,2,23,13,24,34,33,22};
	int n = sizeof(a)/sizeof(int);
	selection_sort(a,n);	
	printf("Sorted array :");
	show(a,n);
}


void swap( int *a, int *b )
{
	int t = *a;
	 *a = *b;
	 *b = t;
}

void selection_sort(int a[], int n)
{
	for( int i =0; i < n; i++ )
	{ 
		int min_indx = i;
		for( int j = i+1; j < n; j++ )
		{
			if( a[j] < a[min_indx] )
			{
				min_indx = j;
			}
		}
		
		swap(&a[i],&a[min_indx]);
	} 
}

void show(int a[], int n)
{
	for( int i = 0; i<n; i++ )
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
