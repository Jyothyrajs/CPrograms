

/* Program to access two dimensional array using pointers*/


#include "myIO.h"


int main()
{
	int row,col,**pArray;
	ReadInt("No of rows: ", &row);
	ReadInt("No of columns: ", &col);
	pArray = Allocate2DArray(row,col);	
	Read2DArray("Enter array elements: ",pArray,row,col);
	Print2DArray("Array Elements:",pArray,row,col);	

}
