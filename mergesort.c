#include<stdio.h>

void merge(int a[],int l,int m, int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(j=0;j<n2;j++)
		R[j]=a[m+1+j];
	i=0;
	j=0;
	k=1;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)	
	{
		a[k]=L[j];
		j++;
		k++;
	}
}


void mergesort(int a[],int l, int r )
{
	if(l < r)
	{
		int m=l+(r-1)/2;
		mergesort(a,l,m);	
		mergesort(a,m+1,r);	
		merge(a,l,m,r);
	}

}
int main()
{
int array[20]={20,11,2,34,22,4,6,56,35};
int size=sizeof(array);

int l=0,r=size;

mergesort(array,l,r);
for(int i=0;i<size;i++)
	printf("%d\n",array[i]);

}
