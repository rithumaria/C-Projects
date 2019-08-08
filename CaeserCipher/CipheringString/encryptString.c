#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This program is used to encrypt a given string and return the cipher text to the user */
void main()
{
    char str[50],ciph[50]; //str for input and ciph for ciphered text
    int ch; //to store each character

    printf("Enter the string:"); //taking input
    fgets(str,50,stdin); //fgets to take in the whole string 
    
    int len = strlen(str); //taking length of the string to use it below
    
    if (str[len-1] == '\n') //this removes the \n stored at the end when fgets is used
    {
        str[len-1] = '\0';
    }

    for(int i=0;i<strlen(str);i++) //loop to take each character and cipher it
    {
        ch = str[i];
        ch = ch+3;
        ciph[i]=ch;

    }
    puts(ciph); //printing the ciphered text

}