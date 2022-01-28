#include "myIO.h"
#include<stdio.h>
#include <stdlib.h>

void ReadInt(char* msg, int* i)
{
	printf("%s : ",msg);
	scanf("%d",i);
}

void swap(int* p ,int* q)
{
    int c = *p;
    *p = *q;
    *q = c;
}

void ReadFloat(char* msg, float* f)
{
	printf("%s : ",msg);
	scanf("%f",f);
}
void ReadStr(char* msg, char* i)
{
	printf("%s: ",msg);
	scanf("%s",i);

}
void ReadIntArray(char* msg, int* pArray, int n)
{
	int i=0;
	printf(" %s\n",msg);
	for(i=0; i<n; i++)
	{
		
		scanf("%d",(pArray+i));
	}
}

void WriteIntArray(char *msg, int* pArray, int count)
{
	int i=0;
	printf("%s\n",msg);
	for(i=0; i<count;i++)
	{
		printf("%d\t",*(pArray+i));
	}
	printf("\n");
}

int** Allocate2DArray(int row, int col)
{
	int **p = (int**) malloc(row* sizeof(int*));
	for(int i = 0; i < row; i++)
		p[i] = (int*)(malloc(col*sizeof(int)));
	return p;
}

void Read2DArray(char* msg, int** pArray,int row, int col)
{
	printf("%s\n",msg);
	for(int i=0; i<row; i++)
	{
		int *p = *(pArray + i);
		for(int j=0;j<col;j++)
		{
			scanf("%d",(p++));
		}
	}


}


void Print2DArray(char* msg, int** pArray,int row, int col)
{
	printf("%s\n",msg);
	for(int i=0; i<row; i++)
	{
		int* p = *(pArray+i);
		for(int j=0; j<col; j++)
		{
			printf("%d\t",*p);
			p++;
		}	
		printf("\n");

	}


}

