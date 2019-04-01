//
//  main.c
//  5-3
//
//  Created by wang xi on 2018/11/27.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

void pstract(char *s,char *t)
{
    while(*s!='\0')
        s++;
    while((*s=*t)!='\0')
    {
        s++;
        t++;
    }
    *s='\0';
}
int main()
{
    char s[15]="Hello";
    char t[15]=" World!";
    pstract(s,t);
    int i;
    for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]);
    printf("\n");
    return 0;
}
