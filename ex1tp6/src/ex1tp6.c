/*
 ============================================================================
 Name        : ex1tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void majus(char ch[]);
int nbrmot(char ch[]);
int main()
{
	char ch[200];
  fgets(ch,200,stdin);
  majus(ch);
  printf(" le nombre de mots  :%d et le texte transformé %s",nbrmot(ch),ch);
}
void majus(char ch[])
{
char l[]=" !?,;:.";
int i;
ch[0]=ch[0]+'A'-'a';
for(i=1;i<strlen(ch);i++)
{
    if(strchr(l,ch[i])!=NULL)
    {
        ch[i+1]=ch[i+1]+'A'-'a';
        }

}
}
int nbrmot(char ch[])
{
int i,s=0;
char l[]=" !?,;:.";
for(i=0;i<strlen(ch);i++)
{
    if((strchr(l,ch[i])!=NULL) && (strchr(l,ch[i-1])==NULL)&&(strchr(l,ch[i+1])==NULL))
        s++;
}
if(strchr(l,ch[strlen(ch)-1])==NULL)
s++;
return s;
}
