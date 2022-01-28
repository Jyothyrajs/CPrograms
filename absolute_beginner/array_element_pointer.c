

/*Program to input and print array elements using pointer*/


#include "myIO.h"
//#include "writer.h"

int main()
{
	int count,elements[20];
	ReadInt("Number of elements: ",&count);
	ReadIntArray("Enter Elements: ",elements,count);
	WriteIntArray("Array Elements:",elements,count);
}
