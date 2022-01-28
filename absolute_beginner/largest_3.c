

/** Find the largest from three numbers*/

#include<stdio.h>
int largest(int[],int);
int main()
{
	int numbers[3];
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);
	int max = largest(numbers,3);
	printf("Largest of three numbers %d %d and %d : %d\n",numbers[0],numbers[1],numbers[2],max);
}


int largest(int num[],int length)
{
	int max=num[0];
	if(num[1]>num[0])
	{
		if(num[2] >num[1])
		{	
			max = num[2];
		}
		else
		{
			max = num[1];
		}
	}
	else
	{
		if(num[2]>num[0])
			max = num[2];

	}
	return max;
}
