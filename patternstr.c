#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30]="Welcome",pat[10]="com",rep[10]="abc";
	int i,j,c,m,k;
	printf("\nEnter String:");
	//gets(str);
	printf("\nEnter search String:");
//	gets(pat);
	printf("\nEnter a replace String:");
//	gets(rep);
	i=j=m=c=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;
			m++'	
		}	
		if(pat[i]!='\0')
		{
			for(k=0;rep[k]!='\0';k++,j++)
				ans[j]=rep[k];
			i=0;
			c=m;
		}
	}
return 0;	
}
