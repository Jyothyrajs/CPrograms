


/* Program to add two matrices using pointer */

#include "myIO.h"

int** addMatrix(int** m1Array, int** m2Array,int** rArray, int row, int col)
{
for(int i=0; i<row; i++)
{
int* m1 = *(m1Array+i);
int* m2 = *(m2Array+i);
int* r = *(rArray+i);
for(int j=0; j<col; j++)
{
  *r= *m1 + *m2;
  r++;
  m1++;
  m2++;
 }
}
return rArray;
}


int main()
{
int row,col;
int** m1Array;
int** m2Array;
int** rArray;
ReadInt("No of rows: ",&row);
ReadInt("No of Columns: ", &col);
m1Array = Allocate2DArray(row,col);
m2Array = Allocate2DArray(row,col);
rArray = Allocate2DArray(row,col);
Read2DArray("Enter the first matrix: ",m1Array,row,col);
Read2DArray("Enter the second matrix: ",m2Array,row,col);
rArray = addMatrix(m1Array, m2Array,rArray,row, col);
Print2DArray("Resultant matrix: ",rArray,row,col);
}
