//
//  main.c
//  4-1
//
//  Created by wang xi on 2018/11/15.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
char t[100];
char s[100];
int rightmost(char t[],char s[])
{
    int i,j,k,m;
    m=0;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;t[k]!='\0'&&t[k]==s[j];j++,k++)
            ;
            if(k>0&&t[k]=='\0'&&i>m)
                m=i;
    }
    if(m>0)
        return m;
    else
        return -1;
}
int main()
{
    //char ch;
    //int i;
    int ans;
    char s[]="Would you could you";
    char t[]="ould";
    printf("Please input a string\n");
    /*i=0;
    for(i=0;(ch=getchar())!='\n';i++)
        scanf("%c",&s[i]);*/
    //scanf("%s",t);
    ans=rightmost(t,s);
    printf("The answer is %d\n",ans+1);
    return 0;
}
