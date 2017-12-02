/*
 ============================================================================
 Name        : ex2tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void conjuguer( char *ve );
 void copy(char *x,char l);
int main()
{
    char *ch;
    ch=malloc(20);
    fgets(ch,20,stdin);
    conjuguer(ch);
}
void copy(char *x,char *l)
{
int i;
for(i=0;i<strlen(l)-3;i++)
{
    x[i]=l[i];
}
}
void conjuguer(char *ve)
{
    char *k;
    k=malloc(strlen(ve));
   copy(k,ve);
    if((ve[strlen(ve)-3]!='e')&&(ve[strlen(ve)-2]!='r'))
        printf("erreur");
        else
        printf("\n je %s e\n tu %s es \n il %s e \n nous %s ons \n vous %s ez \n ils %s ent",k,k,k,k,k,k);
}

