#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This program is used to decrypt the string encrypted by the the encryptSting.c */
void main()
{
    char str[50],deciph[50]; //one for storing the ciphered string and one for the deciphered string
    int ch; //used for storing each character in the loop

    printf("Enter the encrypted string:");
    fgets(str,50,stdin); //for taking the entire string
    
    int len = strlen(str); //taking length of the string to use it below

    if (str[len-1] == '\n')//this removes the \n stored at the end when fgets is used
    {
        str[len-1] = '\0';
    }

    for(int i=0;i<strlen(str);i++) // loop for taking each ciphered character and deciphering it 
    {
        ch = str[i];
        ch = ch-3;
        deciph[i]=ch;

    }
    puts(deciph); //printing the deciphered text

}