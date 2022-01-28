#include<stdio.h>
#include<sys/types.h>
 main()
{
	fork();
	fork();
	fork();
	fork();
	printf("Hello\n");
/*	int i;
	for (i = 0; i < 2; i++)
	{
		fork();
		printf("%d %d\n",i, getpid());
	}
*/}
