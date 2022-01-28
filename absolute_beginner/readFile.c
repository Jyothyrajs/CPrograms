
#include <stdio.h>

int main()
{
    char buf[100];
    FILE *fp;
    fp = fopen("test.c","r");
   while( fgets(buf, 100, fp)!=NULL)
        puts(buf);
    fclose(fp);
}

