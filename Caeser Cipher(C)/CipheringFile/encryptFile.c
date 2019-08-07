#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *fp,*efp;
    char filename[30],ch;
    int c;
    printf("enter the file name:");
    scanf("%s",filename);
    fp = fopen(filename,"r+");
    efp = fopen("temp.txt","w+");
    while((ch=fgetc(fp)) != EOF )
    {
        c=ch;
        c +=3;
        fprintf(efp,"%c",c);
    }
    printf("-----encrypted text file made-----\n");
    fclose(fp);
    fclose(efp);
    remove(filename);
    rename("temp.txt",filename);
    fp = NULL;
    efp = NULL;
}