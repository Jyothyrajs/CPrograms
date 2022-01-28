


/* Program to add two numbers using pointer*/
#include "reader.h"
#include <stdio.h>

void add(int* num1, int* num2, int* result);

int main()
{
	int num1,num2,res;
	ReadInt("Number 1", &num1);
	ReadInt("Number 2", &num2);
	add(&num1,&num2, &res);
	printf("Sum : %d\n",res);
}


void add(int *num1, int *num2,int *res)
{
	*res = *num1 + *num2;
}

