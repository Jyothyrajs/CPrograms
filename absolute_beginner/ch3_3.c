

/* Dice game*/

#include<stdio.h>
int main()
{
	int die1,die2,sum =0;
	srand(time(NULL));
	die1= rand()%6+1;	
	die2 = rand()%6+1;
	sum = die1 +die2;
	if(sum ==7 || sum ==11)
	{
		printf("Congrats!!! you  Win\n");

	}
	else
	{
		printf("Thank u for playing ..Your sum = %d\n", sum);
	}
}
