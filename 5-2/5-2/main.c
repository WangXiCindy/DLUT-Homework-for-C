//
//  main.c
//  5-2
//
//  Created by wang xi on 2018/11/26.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define BUFSIZE 10
int bufp=0;
char buf[BUFSIZE];
double *pn;
int getfloat()
{
    int c,sign,flag=1;
    while(isspace(c=getchar()));//检查参数c是否为空格字符。
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-'&&c!='.')
    {
        ungetc(c,stdin);//把一个（或多个）字符退回到stream代表的文件流中，可以理解成一个“计数器”
        return 0;
    }
    sign=(c=='-')?-1:1;
    if (c == '-' || c == '+')
    {
        c = getchar();
       if (!isdigit(c))
        {
            ungetc(c,stdin);
            return 0;
        }
    }
    double m=0;
    for(m=0;isdigit(c);c=getchar())
        m=10* m+(c-'0');
    pn=&m;
    if(c=='.')
    {
    {
        c=getchar();
    }
    for (;isdigit(c);c = getchar())
    {
        flag *= 10;
        *pn = 10 * *pn + (c - '0');
    }
    }
    *pn = *pn/flag * sign;
    if(c!=EOF)
        ungetc(c,stdin);
    return c;
}
int main()
{
    printf("Please give me a string.\n");
    getfloat();
    printf("%lf\n",*pn);
    return 0;
}
