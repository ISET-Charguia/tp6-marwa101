/*
 ============================================================================
 Name        : ex22tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *pluriel (char *ch);
void articlesIndefinis(char *ch);
void ResultatApresDecalage(char *ch);
int main()
{
    char *ch;
    ch=malloc(10);
    printf("taper un mot");
    fgets(ch,30,stdin);
    articlesIndefinis(ch);
    pluriel(ch);
    ResultatApresDecalage(ch);
}
char *pluriel(char *ch)
{
    if((ch[strlen(ch)-2]=='s')||(ch[strlen(ch)-2]=='z')||(ch[strlen(ch)-2]=='x'))
    {
        return ch;
    }
        else if(((strchr(ch,'au')!=NULL)&&(strchr(ch,'au')-ch==strlen(ch)-2))||((strchr(ch,'eau')!=NULL)&&(strchr(ch,'eau')-ch==strlen(ch)-2))||((strchr(ch,'eu')!=NULL)&&(strchr(ch,'eu')-ch==strlen(ch)-2)))
        {
            ch[strlen(ch)-1]='x';
        return ch;
        }
        else if((strchr(ch,'al')!=NULL)&&(strchr(ch,'al')-ch==strlen(ch)-2))
        {
            ch[strlen(ch)-2]='u';
            ch[strlen(ch)-1]='x';
            return ch;
        }
}
void articlesIndefinis(char *ch)
{
    if((strchr(ch,'un')!=NULL)&&(strchr(ch,'un')-ch==1))
    {
        ch[0]='d';
        ch[1]='e';
        ch[2]='s';
    }
    else if((strchr(ch,'le')!=NULL)&&(strchr(ch,'le')-ch==1))
    {
        ch[0]='l';
        ch[1]='e';
        ch[2]='s';
    }
}
void ResultatApresDecalage(char *ch)
{
    int i;
    char *x;
    x=malloc(strlen(ch)+1);
    for(i=0;i<3;i++)
        x[i]=ch[i];
    x[3]=' ';
    for(i=4;i<strlen(ch)+1;i++)
        x[i]=ch[i-1];
    printf("Le pluriel est :");
    for(i=0;i<=strchr(x,ch[strlen(ch)-1])-x;i++)
        printf("%c",x[i]);
 }
