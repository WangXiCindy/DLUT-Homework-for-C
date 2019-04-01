//
//  main.c
//  cpl 2-4
//
//  Created by wang xi on 2018/10/24.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
char s1[100],s2[100];
int i,j,z;
char*squeeze(char s1[100],char s2[100])
{
    int instr2=0;
    for(z=i=0;s1[i]!='\0';i++)
    {
        
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
                instr2=1;
           
        }
        if(instr2==0)
            s1[z++]=s1[i];
    }
    s1[z]='\0';
    return s1;
}
int main()
{
    while(1)
    {
        printf("Please input s1,s2\n");
        scanf("%s %s",s1,s2);
        squeeze(s1,s2);
    printf("%s\n",s1);
    }
    return 0;
}
