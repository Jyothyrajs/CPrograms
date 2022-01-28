


/** program to conduct a quiz in different categories*/

#include<stdio.h>
int correct=0;
void operat_system();
void data_struct();
void linux_quiz()
{
	int an;
	printf("Qn 1) Command which is not used to check the memory being used:\n");
	printf("1:fLree -m\n2:top\n3:memory\n4:vmstat\n");
	scanf("%d",&an);
	if(an == 3)
	{
		correct++;
	}
}

int main()
{
	int sub_choice;
	do{
	printf("Selct your Subject\n\t\tMENU\n\t1:LINUX\n\t2:Operating System\n\t3:Data Structures\n4:Quit\n");
	scanf("%d",&sub_choice);
	switch(sub_choice)
	{
		case 1: linux_quiz();
			break;
		case 2: operat_system();
			break;
		case 3: data_struct();
			break;
		case 4: printf("Thank u..\n");
			break;
		defult: printf("Enter a valid option");
			break;
	}
	}while(sub_choice<4);
	printf("Your Score : %d/3 ",correct);
}
void operat_system()
{
}

void data_struct()
{
}
