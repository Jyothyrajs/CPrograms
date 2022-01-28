// Rolling dice program assign dice values through TossDice

#include<stdio.h>
void tossDice(int []);

int main()
{
	int diceValues[6];
	tossDice(diceValues);
	printf("Dice Vlues: ");
	for(int j=0;j<6;j++)
	{
		printf("%d ",diceValues[j]);

	}
	printf("\n");
}

void tossDice(int dice[])
{
	for(int i=0;i<6;i++)
	{
		srand(time(NULL));
		sleep(2);
		dice[i] = rand()%6+1;
	}
}
