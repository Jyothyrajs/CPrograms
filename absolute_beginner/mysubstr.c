


#include <stdio.h>
#include "myIO.h"
int main()
{
  char mStr1[10], mSubStr1[10];
  ReadStr("Enter String: ",mStr1);
  ReadStr("Enter sub String: ",mSubStr1);
  char *mStr= mStr1;
  char *mSubStr = mSubStr1;
  int found = 0;
  char *strpos=mStr, *substrpos=mSubStr;
  while(*mStr)
  {
      if(*mStr!=*mSubStr  && *mSubStr!='\0')
      {
        mStr= ++strpos;
         mSubStr= substrpos ;
         found =0;

      }
      else if(*mSubStr =='\0')
      {
          printf("Found at position %d\n",++found);
          break;
      }
       found++;
       mStr++;
       mSubStr++;
                                            
  }

  printf("Sorry...Not present in the string\n");
}


