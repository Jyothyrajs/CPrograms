// Program to generate a counting sequence in the user input series

#include<stdio.h>

int main()
{
	int lower_limit,upper_limit,step_value,value;
	printf("Input lower limit, Upper limit and step value\n");
	scanf("%d%d%d",&lower_limit,&upper_limit,&step_value);
	if(step_value>0)
	{
		value = lower_limit;
		while(value<=upper_limit)
		{
			printf("%d ",value);
			value = value + step_value;
		}
	}
	else
	{
		value = upper_limit;
		while(value>=lower_limit)
		{
			printf("%d ",value);
			value = value + step_value;
		}
	}
	printf("\n");
}
