

/*
 Calculate the revenue as per the following formula
	Revenue = Price * Quantity
Author: Jyothyraj S
*/

#include<stdio.h>
int main()
{
	float revenue = 0,price;
	int quantity;
	printf("Enter Price : ");
	scanf("%f", &price);
	printf("Enter Quantity : ");
	scanf("%d", &quantity);
	revenue = price * quantity;
	printf("Revenue = %f\n ",revenue);
	
}
