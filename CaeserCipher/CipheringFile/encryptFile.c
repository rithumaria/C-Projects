#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* This program uses cipher to encrypt text in the given text file */

void main()
{
    FILE *fp,*efp; //one for the original file and one as temporary
    char filename[30],ch;
    int c;
    
    printf("enter the file name:");
    scanf("%s",filename); //taking the filename from the user,Note:the file should be in the same folder as the program
    
    fp = fopen(filename,"r+"); //opening the file for encrypting which is placed in the same folder as the program
    efp = fopen("temp.txt","w+"); //creating a temporary file
    
    while((ch=fgetc(fp)) != EOF )  //loop for reading each character
    {
        c=ch;
        c +=3;
        fprintf(efp,"%c",c);
    }
    
    printf("-----encrypted text file made-----\n"); //the encrypted file is the temporary file rename to be the original file and the original file is deleted
    
    fclose(fp);
    fclose(efp);
    
    remove(filename);  //removing the original file
    rename("temp.txt",filename); //renaming the temporary file to the original file
    
    fp = NULL;
    efp = NULL;
}