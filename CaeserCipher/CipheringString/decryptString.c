#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[50],deciph[50];
    int ch;

    printf("Enter the encrypted string:");
    fgets(str,50,stdin);
    
    int len = strlen(str);
    if (str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    for(int i=0;i<strlen(str);i++)
    {
        ch = str[i];
        ch = ch-3;
        deciph[i]=ch;

    }
    puts(deciph);

}