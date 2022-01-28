/* Programto swap two numbers using pointer  */


#include "reader.h"
#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
	int num1,num2;
	ReadInt("Number1",&num1);
	ReadInt("Number2",&num2);
	swap(&num1,&num2);
	printf("Vales of Number1  : %d\n",num1);
	printf("Vales of Number2  : %d\n",num2);

}


void swap(int *num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
