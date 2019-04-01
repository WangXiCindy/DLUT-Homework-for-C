//
//  main.c
//  2
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6-i;j++)
            printf(" ");
        for(k=0;k<2*i+1;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
