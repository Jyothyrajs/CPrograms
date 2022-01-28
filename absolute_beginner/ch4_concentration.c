


/* Concentration game to test the user concentration*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char ready='\0';
	int num1,num2,num3,num4,num5,user_ip1,user_ip2,user_ip3,user_ip4,user_ip5,level;
	int curr_time=0,elapsed_time=0;
	printf("Ready for concentration game:  Y or N : ");
//	scanf("%c",&ready);
	ready = getchar();
	while(ready== 'Y' || ready == 'y')
	
	{
		printf("Choose your level\n1:Easy\n2:Intermediate\n3:Difficult\n4:Quit\n");
		scanf("%d",&level);
		srand(time(NULL));
		num1 = rand()%50+1;
		num2 = rand()%50+1;
		num3 = rand()%50+1;
		num4 = rand()%50+1;
		num5 = rand()%50+1;
		switch(level)
		{
		
		case 1:
			printf("Note the numbers\n%d  %d  %d\n",num1,num2,num3);
			sleep(4);
			system("clear");
			printf("Enter the numbers shownseperating in single space in sequence\n");
			scanf("%d%d%d",&user_ip1,&user_ip2,&user_ip3);
			if(num1==user_ip1 && num2 == user_ip2 && num3 == user_ip3)
				printf("Congratulations .. You r right\n");
			else
			{
				printf("Numbers were : %d %d %d\n",num1,num2,num3);
				printf("Sorry Practice ur memory\n");
			}
			break;
		case 2:
			printf("Note the numbers\n%d  %d  %d  %d %d\n",num1,num2,num3,num4,num5);
			sleep(3);
			system("clear");
			printf("Enter the numbers shownseperating in single space in sequence\n");
			scanf("%d%d%d%d%d",&user_ip1,&user_ip2,&user_ip3,&user_ip4,&user_ip5);
			if(num1==user_ip1 && num2 == user_ip2 && num3 == user_ip3 && num4==user_ip4 && num5==user_ip5)
				printf("Congratulations .. You r right\n");
			else
			{
				printf("Numbers were : %d %d %d %d %d\n",num1,num2,num3,num4,num5);
				printf("Sorry Practice ur memory\n");
			}
		
			break;
		case 3:
			printf("Note the numbers\n%d  %d  %d  %d %d\n",num1,num2,num3,num4,num5);
			sleep(3);
			system("clear");
			scanf("%d%d%d%d%d",&user_ip1,&user_ip2,&user_ip3,&user_ip4,&user_ip5);
			if(num1==user_ip1 && num2 == user_ip2 && num3 == user_ip3 && num4==user_ip4 && num5==user_ip5)
				printf("Congratulations .. You r right\n");
			else
			{
				printf("Numbers were : %d %d %d %d %d\n",num1,num2,num3,num4,num5);
				printf("Sorry Practice ur memory\n");
			}
			break;
		case 4:
			ready='N';
			break;			
		
		}
	}


}
