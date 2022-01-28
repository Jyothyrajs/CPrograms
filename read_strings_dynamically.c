#include<stdio.h>
int main(int argc, char *argv[])
{
	int i =0;
	int c = (int)"3";
	printf("%d\n",c);
	while(i < c)
	{
		char *str = argv[i++];
		printf("%s\n",str);
	}	
}
