//
//  main.c
//  largest and smallest
//
//  Created by wang xi on 2018/12/10.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 80
int diff(int a[][N],int m,int n)
{
    int i,j;
    int (*q)[N]=a;
    int max=a[0][0];
    int min=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(q[i]+j)>max)
                max=*(q[i]+j);
            if(*(q[i]+j)<min)
                min=*(q[i]+j);
        }
    }
    return max-min;
}
int main()
{
    srand((unsigned int)time(NULL));
    int a[N][N];
    int i,j,m,n;
    printf("Please give me the row and column of the array\n");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=rand()%101;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",diff(a,m,n));
    return 0;
}
