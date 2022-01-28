#include <stdio.h>
#include <stdlib.h>	// For malloc()
#include <math.h>	// For pow()

// Struct to represent a single term Polynomial term
struct PolTerm
{
	int coEff;
	int xPow, yPow, zPow;

	struct PolTerm* next;
};

struct PolTerm* readPolynomial()
{
	int n;
	printf("Number of terms: ");
	scanf("%d", &n);

	struct PolTerm *head=NULL;

	for(int i=0; i <n; i++)
	{
		// Allocate and read the term
		struct PolTerm *pTemp = (struct PolTerm*)malloc( sizeof(struct PolTerm) );
		printf("Enter the term %d(coEff,xPow,yPow,zPow): ", i+1);
		scanf("%d,%d,%d,%d",&pTemp->coEff, &pTemp->xPow,&pTemp->yPow,&pTemp->zPow );

		// Insert the new term to polynomial at beginning, and make it the head from now
		pTemp->next = head;
		head = pTemp;
	}

	return head;
}

void printPolynomial(struct PolTerm* head)
{
	printf("Polynomial: ");
	if( NULL == head )
	{
		printf("<empty>");
	}
	else
	{
		while(NULL != head)	// printing terms one by one
		{
			if( head->coEff !=0 )
			{
				if( head->coEff >0 )
					printf("+");
				printf("%d", head->coEff);

				if( head->xPow!=0 )
				{
					printf("x%d", head->xPow);
				}
				if( head->yPow!=0 )
				{
					printf("y%d", head->yPow);
				}
				if( head->zPow!=0 )
				{
					printf("z%d", head->zPow);
				}
			}
			head = head->next;	// Move to next term
		}
	}
	printf("\n");
}

int evaluate(struct PolTerm* head, int x, int y, int z)
{
	int sum = 0;
	while(head)
	{
		if( head->coEff != 0 )
		{
			int termSum = 1;
			termSum *= pow(x, head->xPow);
			termSum *= pow(y, head->yPow);
			termSum *= pow(z, head->zPow);
			termSum *= head->coEff;
			sum += termSum;
		}
		head = head->next;
	}
	return sum;
}

struct PolTerm* add(struct PolTerm* a,struct PolTerm* b)
{
	if( a == NULL )
		return b;

	if( b == NULL )
		return a;

	struct PolTerm* sum = NULL;
	struct PolTerm* tempa = a;
	while(a)
	{
		// Create a new term in the sum Pol and copy a
		struct PolTerm* newTerm =(struct PolTerm*)malloc( sizeof(struct PolTerm) ) ;
		newTerm->coEff = a->coEff ;
		newTerm->xPow = a->xPow;
		newTerm->yPow = a->yPow;
		newTerm->zPow = a->zPow;
		newTerm->next = sum;
		sum = newTerm;

		struct PolTerm* tempb = b;
		while(tempb)
		{
			if( (a->xPow == tempb->xPow) && (a->yPow == tempb->yPow) && (a->zPow == tempb->zPow) ) // Add coEff IIF all powers are same
			{
				sum->coEff += tempb->coEff;
			}
			tempb = tempb->next;
		}

		a = a->next;
	}

	// Find and copy the terms present in only b
	a = tempa;	// reset a to first term again
	while(b)
	{
		int found = 0;
		struct PolTerm* tempa = a;
		while(tempa)
		{
			if( (b->xPow == tempa->xPow) && (b->yPow == tempa->yPow) && (b->zPow == tempa->zPow) )
			{
				found = 1;
				break;
			}
			tempa = tempa->next;
		}

		if( found == 0 )
		{
			struct PolTerm* newTerm =(struct PolTerm*)malloc( sizeof(struct PolTerm) ) ;
			newTerm->coEff = b->coEff ;
			newTerm->xPow = b->xPow;
			newTerm->yPow = b->yPow;
			newTerm->zPow = b->zPow;
			newTerm->next = sum;
			sum = newTerm;
		}
		b=b->next;
	}

	return sum;
}

int main()
{
	struct PolTerm *a, *b,*sum;
	a = readPolynomial();
	b = readPolynomial();
	sum=add(a,b);
	printPolynomial(a);
	printPolynomial(b);
	printPolynomial(sum);
	printf("Value: %d\n ", evaluate(sum, 2, 2, 2) );
	//printPolynomial(b);
	return 0;

}
