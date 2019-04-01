//
//  main.c
//  selection
//
//  Created by wang xi on 2018/11/19.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define exch(A,B) {int temp=A;A=B;B=temp;}
int a[60000];
void selection(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min=i;
    for(j=i+1;j<n;j++)
    {
       if(a[j]<a[min])
           min=j;
    }
        exch(a[i],a[min]);
    }
}
int main()
{
    printf("Please give me the length of the array\n");
    int i,n;
    scanf("%d",&n);
    srand((unsigned int)time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%50001;
    selection(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
