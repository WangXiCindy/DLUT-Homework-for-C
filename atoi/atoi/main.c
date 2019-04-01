//
//  main.c
//  atoi
//
//  Created by wang xi on 2018/11/27.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
int patoi(char *s)
{
    int n=0;
    for(;*s>='0'&&*s<='9';s++)
        n=10*n+(*s-'0');
    return n;
}
int main()
{
    char s[10];
    printf("Please give me the string.\n");
    scanf("%s",s);
    int n;
    n=patoi(s);
    printf("The answer is %d\n",n);
    return 0;
}
