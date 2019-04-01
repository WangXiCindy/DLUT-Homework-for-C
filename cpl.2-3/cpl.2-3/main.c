//
//  main.c
//  cpl.2-3
//
//  Created by wang xi on 2018/10/16.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int htoi(char str[100])
{
    int p=0;
    int i=0;
    if(str[i] == '0')//‘\0’为字符串结束标志，不可在这里写
    {
        i++;
        if(str[i] == 'x'||str[i] == 'X')
            i++;
    }
    int k=0;
    int ok=1;
    for(;ok==1;++i)//一定是++i，否则算入了x
    {
    if(isdigit(str[i]))
        k=str[i]-'0';//用‘8’-‘0’得到的是数字8
    else if(str[i]>='a'&&str[i]<='f')
            k=str[i]-'a'+10;//16进制中a(A)=10 f(F)=15
    else if(str[i] >= 'A' && str[i] <= 'F')
            k = str[i] - 'A' +10;
    else
        ok=0;
        if(ok==1)
        p=16*p+k;
    }
    return p;
}
int main()
{
    printf("The string is\n");
    char str[100];
    int j,m;
    for(j=0;j<100;j++)
    {
        scanf("%c",&str[j]);
        if(str[j]=='\n')
            break;
    }
    m=htoi(str);
    printf("So the integer value is %d\n",m);
    return 0;
}
