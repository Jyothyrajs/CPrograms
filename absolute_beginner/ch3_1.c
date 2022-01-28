

/* Guess the number
Author: Jyothyraj S
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
	char iResponse='\0';
	int randNumber,userInput;
	printf("Enter a number : ");
	scanf("%c",&iResponse);
	if(isdigit(iResponse))
	{
		printf("Thank you\n");
	}
	else
	{
		printf("Sorry you have entered a letter\n");
	}
	do
	{
	srand(time());
	randNumber= rand()%10+1;
	printf("Guess a number between 1 & 10 : ");
	scanf("%d",&userInput);
	if(randNumber == userInput)
	{
		printf("Wow..You guessed %d",randNumber);
	}
	else
	{
		printf("Sorry..Try next time");
	}	
}
