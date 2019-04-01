//
//  main.c
//  replace the string
//
//  Created by wang xi on 2018/10/30.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char s[100];
unsigned long n;
int main()
{
    while(1)
    {
        printf("Please give me the string\n");
        scanf("%s",s);
        n=strlen(s);//注意，strlen不能放在for（strlen）
        unsigned long  i,j;
        int m;
        m=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='#')
                break;
            if(s[i]=='!')
            {
                for(j=n;j>i;j--)
                    s[j]=s[j-1];
                n=n+1;
                m++;
                i=i+1;
            }
            else if(s[i]=='.')
            {
                s[i]='!';
                m++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='#')
                break;
            printf("%c",s[i]);
        }
        printf("\n");
        printf("So it has changed %d times\n",m);
    }
    return 0;
}
