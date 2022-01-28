

/** Find the largest from three numbers*/

#include<stdio.h>
int largest(int[],int);
int sec_largest(int[],int);
int main()
{
	int numbers[10],length=0;
	printf("Enter length of sequence:");
	scanf("%d",&length);
	printf("Input numbers: ");
	for(int i=0;i<length;i++)
	{
		scanf("%d",&numbers[i]);
	}
	int max = largest(numbers,length);
	int sec_max = sec_largest(numbers,length);
	printf(" Largest of sequence : %d\n",max);
	printf("Second Largest of sequence : %d\n",sec_max);
}


int largest(int num[],int length)
{
	int max = num[0],i;
	for(i=1;i<length;i++)
	{
		if(num[i]>max)
			max=num[i];
	}
	printf("%d\n",max);
	return max;
}

int sec_largest(int a[],int length)
{
	int large= a[0];
	int sec_large =a[0];
	int i;
	for(i=1;i<length;i++)
	{
		if(large!=sec_large)
		{
			if((a[i]<large) && (a[i]>sec_large))
			{
				sec_large = a[i];
			
			}
			else if(a[i]>large)
			{
				sec_large = large;
				large = a[i];
				
			}
		
		}	
		else
		{
			if(a[i]>large)
				large=a[i];
			else
				sec_large = a[i];
		}
	}
	return sec_large;	
}
