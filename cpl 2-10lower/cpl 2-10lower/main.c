//
//  main.c
//  cpl 2-10lower
//
//  Created by wang xi on 2018/10/24.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <string.h>//为tstrlen的头文件
int i;
char ans;
unsigned long n;
void lower(char a[100],unsigned long n)
{
    for(i=0;i<n;i++)
    {
        ans=a[i];
        printf("%c",ans>='a'&&ans<='z'?ans:ans+32);
    }
}
int main()
{
    char a[100];
    while(1)
    {
        printf("The string is\n");
        scanf("%s",a);
        n=strlen(a);
        lower(a,n);
        printf("\n");
    }
    return 0;
}
