/*Program to find the max height of block with same stack value*/
/*Input: Number of blocks in each stack
	Block values in each stack
	eg: 4 3 5
	first stack: 2 1 1 2
	second block: 2 1 1
	third block : 3 1 1 1 2
OUTPUT: HEIGHT :4 (MAX HEIGHT WIT SAME STACK VALUE)
*/


#include<stdio.h>
#include "large_sec_large.h"
int main()
{
	int block1,block2,block3,b1[10],b2[10],b3[10];
	int height = 0,b1_height=0,b2_height =0,b3_height =0;
	printf("Enter no of blocks in each stack:");
	scanf("%d%d%d",&block1,&block2,&block3);
	printf("Enter values in blocks1\n");
	int s[5] = {0};
	for(int i=0;i<block1;i++)	
	{
		scanf("%d",&b1[i]);
		s[0] = s[0]+b1[i];
	}

	printf("Enter values in block2\n");
	for(int i=0;i<block2;i++)	
	{
		scanf("%d",&b2[i]);
		s[1] = s[1]+b2[i];

	}
	printf("Enter values in block3\n");
	for(int i=0;i<block3;i++)	
	{
		scanf("%d",&b3[i]);
		s[2] = s[2]+b3[i];

	}
	int large = largest(s,3);
	while(s[0]!=s[1] && s[1]!=s[2])
	{
		if(large == s[0])
		{
			s[0] = s[0]-b1[block1];
			block1--;
		}
		if(large == s[1])
		{
			s[1] = s[1]-b2[block2];
			block2--;
		}

		if(large == s[2])
		{
			s[2] = s[2]-b3[block3];
			block3--;
		}
		large = largest(s,3);
	}
	printf("HEIGHT:%d\n",s[0]);
} 
