

/* Evaluation of formula using single printf
	Author: Jyothyraj S*/

#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("Enter the values of a,b, x & y\n");
	scanf("%d\n%d\n%d\n%d",&a,&b,&x,&y);
	printf("f = %d\n",(a-b)*(x-y));
}
