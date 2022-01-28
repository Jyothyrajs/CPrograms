/* Program to replace a pattern string from the string */

#include "my_string.h"
#include <stdio.h>


void makeSize(char* str, char* pos, int size)
{
    int length = StrLength(str);
    char* p= str+length;
    char* c = pos -1;
    while(p > c)
    {  
        printf("Moving %c\n",*p);
        *(p) = *(p-1);
        p--;
    }

}
void copy_str(char* pos, char* p)
{
    while(*p!='\0')
    {
        *pos = *p;
        printf("Copying %c\n",*p);

        pos++;
        p++;
    }

}
void rep_str(char* str,char* match_str, char* replace_str)
{
    int match_len =   StrLength(match_str);
    int replace_len = StrLength(replace_str);
    int add_size =  replace_len - match_len;
    char* pos = FindString(str, match_str);
    if(*pos)
    { 
        char *r = replace_str;
        char* q = pos+replace_len;
        if(*replace_str!=' '  )
        {
            if(add_size>0)
            {
                makeSize(str, pos+match_len, add_size);
                copy_str(pos,r);
            }
            else
            {  
                char *rem = pos + match_len;
                while(*r)
                {
                    printf("Copying %c\n",*r);
                    *pos = *r;
                    pos++;
                    r++;
                }
                while(*rem!='\0')
                {
                    *pos = *rem;
                    printf("Copying %c\n",*rem);

                    pos++;
                    rem++;
                }
                // copy_str(pos, rem);
                *pos = '\0';
            }
        }
        else
        {
            *pos = ' ';
            char* p = pos+match_len;
            while(*p)
            {
                pos++;
                *pos = *p++;
            }
        }
        printf("String after replacement: %s \n", str);
    }
    else
    {
        printf("No matching string\n");
    }

}


int main()
{
    char str[20], match_str[10], replace_str[10],rep_blank[2] = " ";
    ReadStr("Enter the string : ", str);
    ReadStr(" Enter the match string to replace :",match_str);
    ReadStr(" Enter the replace string :",replace_str);
    rep_str(str,match_str,replace_str);
    printf("Replace with Blank\n");
    rep_str(str,replace_str,rep_blank);

}

repl_str("abcd     abcd            ", "     ", "xxxxxxx" );
