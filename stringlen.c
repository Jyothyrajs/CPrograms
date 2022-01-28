#include<stdio.h>
void main()
{
	int len=0;
	printf("Enter string:");
	while(getchar()!='\n')
	{
		len++;
	}
	printf("Length= %d",len);
		
}
