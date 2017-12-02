/*
 ============================================================================
 Name        : ex6tp6.c
 Author      : marwa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void firstAndLastLine(int n,char *ch);
void middleLine(int n);
void downLine(int l,int c,char *ch);
void upLine(int c,int l,char *ch);
int main()
{
int n,i;
 char *ch;
 ch=malloc(n*3);
    do{
        printf("taper un entier umpair: ");
        scanf("%d",&n);
    }while(n%2==0);
    firstAndLastLine(n,ch);
    for(i=0;i<(n-3)/2;i++)
    {
        downLine(strchr(ch,'.')-ch,strchr(ch,'.')-ch,ch);
    }
    middleLine(n);
    printf("%s\n",ch);
    for(i=0;i<(n-3)/2;i++)
    {
        upLine(strchr(ch,'.')-ch,strchr(ch,'.')-ch,ch);
    }
}
void firstAndLastLine(int n,char *ch)
{
    int i;
    for(i=0;i<=n*3;i++)
    {
            if((n*3)/2-1!=i)
            {
                    printf("-");
                    ch[i]='-';
            }
           else
           {
                printf(".|.");
                ch[i]='.';
                ch[i+1]='|';
                ch[i+2]='.';
                i+=3;
           }
    }
    printf("\n");
}
void middleLine(int n)
{
    int i;
    for(i=0;i<=n*3;i++)
    {
            if((n*3)/2-3!=i)
            printf("-");
           else
           {
            printf("WELCOME");
            i+=7;
           }
    }
printf("\n");
}
void downLine(int l,int c,char *ch)
{
    ch[l-1]='.';
    ch[c+1]='.';
    ch[l-2]='|';
    ch[c+2]='|';
    ch[l-3]='.';
    ch[c+3]='.';
    printf("%s\n",ch);
}
void upLine(int c,int l,char *ch)
{
    ch[l]='-';
    ch[c]='-';
    ch[l-1]='-';
    ch[c+1]='-';
    ch[l-2]='-';
    ch[c+2]='-';
    printf("%s\n",ch);
}
