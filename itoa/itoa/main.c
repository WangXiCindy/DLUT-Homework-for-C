//
//  main.c
//  itoa
//
//  Created by wang xi on 2018/11/27.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void preverse(char *s)
{
    char *p,*q;
    for(p=s,q=&s[strlen(s)-1];p<q;p++,q--)
    {
        int temp=*p;
        *p=*q;
        *q=temp;
    }
}
void pitoa(int n,char *ps)
{
    int sign,cout=0;
    if((sign=n)<0)
        n=-n;
    do
    {
        *ps=n%10+'0';
        ps++;
        cout++;
    }while((n/=10)>0);
    if(sign<0)
    {
        *ps='-';
    ps++;
    }
    *ps='\0';
    preverse(ps-cout);
}
int main()
{
    printf("Please give me a number\n");
    int n;
    scanf("%d",&n);
    char s[100];
    pitoa(n,s);
    printf("%s\n",s);
    return 0;
}
