//
//  main.c
//  4-itob
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

void itob(int n,char s[],int b)
{
    int sign;
    if(b>2&&b<36)
    {
        if((sign=n)<0)
            n=-n;
        int i=0;
    while(n!=0)
    {
        s[i++]=n%b+'0';//注意进制转换公式，记住！！！！
        n/=b;
    }
        if(sign<0)
            s[i++]='-';
    s[i--]='\0';
    //倒序输出！！！
    int j;
    for(j=0;j<i;j++,i--)//有趣的两头互换
    {
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    }
}
int main()
{
    char s[100];
    int b,n;
    printf("Please input the number,then the base\n");
    while(~scanf("%d%d",&n,&b))
    {
        itob(n,s,b);
        int i;
        for(i=0;s[i]!='\0';i++)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
