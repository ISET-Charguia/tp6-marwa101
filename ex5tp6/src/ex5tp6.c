/*
 ============================================================================
 Name        : ex5tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int nbOccurrences(char *ch1,char *ch2) ;
 void decalage(char *ch,int l);
 int rech(char *ch1,char *ch2);
 int lastcheck(char *ch1,char *ch2,int l);
int main()
{
	char *ch1,*ch2;
int s=0;
    ch1=malloc(30);
    ch2=malloc(30);
    printf("taper la 1ere chaine: ");
    fgets(ch1,30,stdin);
    printf("taper la 2eme chaine: ");
    fgets(ch2,30,stdin);
    s=nbOccurrences(ch1,ch2);
    if(lastcheck(ch1,ch2,strlen(ch1)-strlen(ch2)))
    s++;
  printf("nbOccurrences : %d",s);
    return 0;
}
void decalage(char *ch,int l)
{
    int i;
    for(i=l;i<strlen(ch);i++)
    {
        ch[i]=ch[i+1];
    }
}
int lastcheck(char *ch1,char *ch2,int l)
{
    int i=l,j=0;
    for(;i<strlen(ch1);i++)
    {
        if(ch1[i]==ch2[j])
            j++;
        else
        	return 0;
        if(j==strlen(ch2))
            return 1;
    }
}
int rech(char *ch1,char *ch2)
{
    int i=-1,j=0,k=0;
    do{
    	i++;
        if(ch1[i]==ch2[j])
        k=i;
        while(ch1[i]==ch2[j])
        {
            j++;
            i++;
        }
        if(j<strlen(ch2)-1)
        {
        	j=0;
        	k=0;
        }
        else if(j==strlen(ch2)-1)
          return k;
    }while(i<strlen(ch1));
return -1;
}
int nbOccurrences(char *ch1, char *ch2)
{
    if(rech(ch1,ch2)<0)
        return 0;
    else
    {
        decalage(ch1,rech(ch1,ch2));
            return 1+nbOccurrences(ch1,ch2);
    }
}
