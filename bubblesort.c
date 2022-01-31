
#include<stdio.h>
void swap(int*, int*);
int main()
{
	int n;
	int a[20];
	printf("No of elements: ");
	scanf("%d\n", &n);
	for( int i = 0; i< n; i++)
	{
		scanf("%d",&a[i]);
	}
	for( int i = 0; i < n; i++)
	{
		for( int j = 0; j < n-i-1; j++)
		{
			if( a[j] > a[j+1])
			{
				printf("%d moving up \n", a[j]); 
				swap(&a[j],&a[j+1]);
			} 

		}
	}
	for( int i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}

}

void swap(int *a, int *b )
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
