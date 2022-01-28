
   /** Encrypt and decrypt the message **/


#include <stdio.h>

#include "myIO.h"

void decrypt(char*, int);

char* encrypt(char *message, int key)
{
    char *cipher = message;
    while(*message)
    {
         printf("O: %d\t",*message);
         *message = (*message+key)%255;
         printf("E: %d\n",*message);
         message++;

    }
    printf("\nEncrypted message : %s\n",cipher);
    return cipher;
}

void decrypt(char *message, int key)
{
    char *plainText = message;
    while(*message)
    {
        int i =  *message - key;
        if (i < 0)
        {
                i = i+256;
        }
        *message = (char)i;
         printf("D: %d\t",*message);
         message++;
    }

    printf("\nDecrypted message : %s \n", plainText);
}


int main()
{
     char msg[20];
     int key;
     ReadStr("Enter Message: ", msg);
     ReadInt("Enter Key:", &key);
     char *cipher = encrypt( msg,key);
     decrypt(cipher,key);
}

