


/* Math Quiz that prompt the user for number of questions and shows the final result*/

#include<stdio.h>
int main()
{
	int qn_count,op1,op2,answer=0,right_answer=0,quest_number=1;
	printf("Number of questions ready to answer:");
	scanf("%d",&qn_count);
	srand(time(NULL));
	while(quest_number<=qn_count)
	{
		op1= rand()%20+1;
		op2 = rand()%30+1;
		printf("%d):  %d * %d :",quest_number,op1,op2);
		scanf("%d",&answer);
		if(answer==(op1*op2))
		{
			printf("\nCongrats..ur answer is right\n");
			right_answer++;
		}
		else
			printf("Sorry ..\nAnswer:%d\n",op1*op2);	
		quest_number++;
	}
	printf("Your score: %d/%d\n",right_answer,qn_count);
	
}
