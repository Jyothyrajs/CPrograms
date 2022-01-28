
#include<stdio.h>
#include<string.h>
void sort_names(char  **);
int main()
{
	char *states[5][10];
	printf("input states:\n");
	for (int i=0;i<5;i++)
	{
		scanf("%s",states[i]);
	}
	for (int i=0;i<5;i++)
	{
		printf("%s\n",states[i]);
	}
	sort_names(states);
	

}

void sort_names(char *name[5])
{
	printf("Sorting...\n");
	for (int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				char *temp[10];
				*temp=name[i];
				name[i]=name[j];
				name[j]=*temp;
			}
		}


	
	for (int i=0;i<5;i++)
	{
		printf("%s\n",name[i]);
	}
}
