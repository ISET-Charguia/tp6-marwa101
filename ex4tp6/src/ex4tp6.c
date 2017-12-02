/*
 ============================================================================
 Name        : ex4tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverse(char ch[]);
int main()
{
    char ch[30];
    fgets(ch,30,stdin);
    inverse(ch);
    printf("%s",ch);
}
void inverse(char ch[])
{
    int i;
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]>='a') && (ch[i]<='z')||(ch[i]>='A') && (ch[i]<='Z'))
            ch[i]=ch[i]+'A'-'a';
    }
}
