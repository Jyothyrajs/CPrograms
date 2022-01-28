

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *);
main()
{
	char string[20];
	printf("String:\n");
	scanf("%s", string);
	reverse(string);
}

void reverse(char *str)
{
	char *ptr;	
	int strlength=strlen(str);
	int i=0;
	ptr= (char*) malloc (strlength*sizeof(char));
	if(ptr==NULL)
	{
		printf("No Memory\n");
		return NULL;
	}
	while(*str!='\0')
	{
		*ptr++=*str++;
	}
	*ptr='\0';
	ptr--;
	str=(str-strlength);	
	while(i<=strlength)
	{	
		*str++ = *(ptr-i);
		i++;
	}
	str=str-(strlength+1);
	printf("Reverse:%s\n",str);
	ptr=(ptr-(strlength-1));
	free(ptr);
	
}
