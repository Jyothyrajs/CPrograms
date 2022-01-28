

/*
 Calculate the revenue as per the following formula
	Commission = Rate * (Sales Price - Cost)
Author: Jyothyraj S
*/

#include<stdio.h>
int main()
{
	float commission = 0,rate = 0, salesPrice,cost;
	printf("Enter sales price :");
	scanf("%f", &salesPrice);
	printf("Enter Cost : ");
	scanf("%f", &cost);
	printf("Enter rate :");
	scanf("%f", &rate);
	commission = rate * (salesPrice - cost);
	printf("Commission = %f\n ",commission);
	
}
