


/* Program to replace the string */

#include "my_string.h"
#include <stdio.h>

void ShiftRight(char* str, char* from, int length)
{
    int str_length = StrLength(str);
    char* shift_ptr = str+str_length;
    while(shift_ptr >= from)
    {
        printf("%c shifting ", *shift_ptr);
        *(shift_ptr + length) = *shift_ptr;
        shift_ptr--;
    }
}


void copy_str(char* dest, char* src)
{
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
}

void ShiftLeft(char* src, char* dest, int no_chars)
{
    while(no_chars)
    {
        *dest = *src;
        dest++;
        src++;
        no_chars--;
    }
}



void replace(char* str, char* sub_str, char* new_str)
{
    char* pos = FindString(str,sub_str);
    printf("%p\n", pos);
    if(pos)
    {

        int sub_str_length = StrLength(sub_str);
        int new_str_length = StrLength(new_str);
        int length_difference = new_str_length - sub_str_length ;
        if(length_difference > 0)
        {
            ShiftRight(str,pos+sub_str_length,length_difference);

        }
        else if(length_difference < 0)
        {
            ShiftLeft(pos+sub_str_length, pos+new_str_length, length_difference);
            
        }
        copy_str(pos,new_str);
        printf("String after Replacement %s\n",str);
    }

    else
    {
        printf("No matching \n");
    }

}


int main()
{
    char str[30] = "Hello dear Onavaaa", sub_str[] =" dear Onava", new_str[] = "        Dearrrr Onava";
    replace(str,sub_str,new_str);
}

