
/* Program Input and sort strings using Static and Dynamic array..
	It also search for the given string in set of strings*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void sort_names_dynamic_arr(char  **,int);
void sort_names_static_arr(char [][10],int);
void mysearch(char **,char *,int n);
int mysubstr(char *, char *);
int main()
{
	int n;
	char *names[5]={"Dhrona","Sanish","Jyothy","Abhi","Sethu"},*states[5],data[5][10];
	printf("Sorting Dynamic Array..\nEnter number of states:");
	scanf("%d",&n);
	printf("Input States:");
	for (int i=0;i<n;i++)
	{
		char *p=(char*)malloc(10);
		scanf("%s",p);
		states[i] = p;
	}
	sort_names_dynamic_arr(names,5);
	sort_names_dynamic_arr(states,n);
	int sn;
	printf("Sorting Static Array..\nEnter number of states:");
	scanf("%d",&sn);
	printf("Input States:");
	for (int i=0;i<sn;i++)
	{
		scanf("%s",data[i]);
	}
	sort_names_static_arr(data,n);
	
	printf("Input search string: ");
		char *p=(char*)malloc(10);
	scanf("%s",p);
	printf("Searching for %s...",p);
	mysearch(states,p,n);

}
void sort_names_static_arr(char names[][10],int m)
{
	char temp[10];
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(strcmp(names[i],names[j])>0)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
						
			}
		}

	}
	printf("Sorted Array:");
	 for (int i=0;i<m;i++)
	{
			
		printf("%s\t",names[i]);
	}
	printf("\n");
}


void sort_names_dynamic_arr(char* name[],int count)
{
	for (int i=0;i<count-1;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				char *temp;
				temp=name[i];
				name[i]=name[j];
				name[j]=temp;
			}
		}
	}
	printf("Sorted Array:");
	
	for (int i=0;i<count;i++)
	{
		printf("%s\t",name[i]);
	}
	printf("\n");
}
void mysearch(char *name[],char *s_str,int n)
{
	int count =0;
/*
	//using strstr function
	for(int i=0;i<n;i++)
	{
		if(strstr(s_str,name[i])==0)
			count++;
	}
	printf("Using strstr :  Found %d times\n", count);
*/
	count = 0;
	
	for(int i=0;i<n;i++)
	{
		printf("Checking in  %s:", name[i]);
		if(mysubstr(s_str,name[i]))
		{
			count++;
			
			printf("Found in %s ", name[i]);
		}
	}
	printf("Found %d times", count);
}

int mysubstr(char* str1,char *str2)
{
	char *str=str1;
	char *nstr = str2;
	while( *str2!='\0'&& *str1!='\0')
	{
		
		if(*str1!=*str2 )
		{
			str1=str;
			str2 = ++nstr;
			continue;
		}

		str1++;
		str2++;
	}
	return (*str1=='\0');
}
