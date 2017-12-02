/*
 ============================================================================
 Name        : ex3tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *remplace(char *ch,char o,char n);
int main()
{
    char *ch,o,n;
    ch=malloc(50);
    fgets(ch,50,stdin);
    printf("taper un caractère à remplacer et un autre remplaçant: ");
    scanf("%c %c",&o,&n);
    printf("%s",remplace(ch,o,n));
}
char *remplace(char *ch,char o,char n)
{
    char *k;
    int i;
    k=malloc(strlen(ch));
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]==o)
        	k[i]=n;
    }
    return k;
}
