

/* To find maximum number of Handshakes */

#include <stdio.h>

int main()
{
    int personCount;
    printf("No of persons:");
    scanf("%d",&personCount);
    int handShakes = personCount * personCount/2;
    printf("No of handshakes : %d\n",handShakes);
}

