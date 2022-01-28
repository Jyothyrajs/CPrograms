

/* To find decoding sequence of digits*/

#include <stdio.h>
#include <string.h>

int decodingCount(char* digits, int n)
{
    int count[n+1];   // Array to store the results of sub problems
     count[0] =1;
     count[1] = 1;
    for(int i =2; i<=n;i++)
    {
        count[i] = 0;
        if(digits[i-1] > '0')
        {
            count[i] = count[i-1];
        }
        if(digits[i-2] =='1'   || (digits[i-2]=='2' && digits[i-1]<'7'))
        {
            count[i] += count[i-2];
        }
    }
    return count[n];

}

int main()
{
    char digits[10];
    printf("Enter digitsequence :");
    gets(digits);      
    int n = strlen(digits);
    printf("Possible count of decodings: %d\n", decodingCount(digits,n));
}

