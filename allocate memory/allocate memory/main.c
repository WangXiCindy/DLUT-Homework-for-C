//
//  main.c
//  allocate memory
//
//  Created by wang xi on 2018/12/10.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **p;
    int m,n,i,j;
    printf("Please give me the row and column of the array\n");
    scanf("%d%d",&m,&n);
    p=(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++)
    {
        p[i]=(int*)malloc(sizeof(int)*n);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            p[i][j]=i+j;
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}
