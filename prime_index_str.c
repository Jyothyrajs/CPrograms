#include<stdio.h>
int indexSum(char *);
int difference(int, int);
int primeDiv(int,int[],int);
int main(int argc, char *argv[])
{
	char *str1 = argv[1];
	//char *str2 = argv[2];
	//printf("Strings are: %s , %s \n",str1,str2);
	int index_sum1 = 0;
//int index_sum2 = 0;
	int diff = indexSum(str1);
//	index_sum2 = indexSum(str2);
//	int abs_diff = 0;
//	abs_diff = difference(index_sum1, index_sum2);
	int prime_div = 0;
	int prime_nums[3] = {3,5,7};
	prime_div = primeDiv(diff,prime_nums,3);
	if(prime_div == 0)
		printf("Divisible");
	else
		printf("Not Divisible");
}

int indexSum(char *str)
{
	int even_sum = 0;
	int odd_sum = 0;
	int i = 0;
	while(*str != '\0')
	{
		if(i %2 ==0)
			even_sum += *str++;
		else
			odd_sum += *str++;
		i++;
	}
	int diff = difference(even_sum,odd_sum);
	return diff;
}


int difference(int a, int b)
{
	if( a > b)
		return a-b;
	else
		return b-a;
}

int primeDiv(int num, int a[],int limit)
{
	int v = 1;
	for( int i=0; i < limit; i++)
	{
		if( num%a[i] == 0)
			return 0;
	}
	return v;
}
	
