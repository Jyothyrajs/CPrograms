
#ifndef __READER_H__
#define __READER_H__

enum bool
{
	false = 0,
	true = 1
};

void ReadInt(char* msg, int* i);
void swap(int* p, int* q);//Swap two integers
void ReadFloat(char* msg, float* f);
void ReadStr(char* msg, char* i);
void ReadIntArray(char* msg, int* pArray, int count);
void WriteIntArray(char* msg,int* pArray,int count);
int** Allocate2DArray(int,int);
void Read2DArray(char* msg, int** pArray,int row, int col);
void Print2DArray(char* msg, int** pArray,int row, int col);
#endif

