
#include<stdio.h>

int main()
{
      int alphabets_count[256] = {0};
      for(int i=0;i<8;i++)
          printf("alphabets_count[%c] = %d\n",i, alphabets_count[i]);
      char str[50] = "Display the number of each characters";
      char* alph_ptr = str;  
      while(*alph_ptr !='\0')
      {
          ++alphabets_count[*alph_ptr] ;
          alph_ptr++;
      }
      printf("\n\nString : %s\n",str);
      printf("\n\nCount of characters\n\n");
      for(int i =0; i<256;i++)
      {
          if(alphabets_count[i])
          {
              printf("     %c :    %d \n",i, alphabets_count[i]);
          }
      }
}





