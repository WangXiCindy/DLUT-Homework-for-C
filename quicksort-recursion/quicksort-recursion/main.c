//
//  main.c
//  quicksort-recursion
//
//  Created by wang xi on 2018/11/19.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define exch(A,B) {int temp=A;A=B;B=temp;}
int a[50005];
void quicksort(int a[],int left,int right)
{
    int i,j;
        int mid=a[(left+right)/2];
        i=left;
        j=right;
    do
    {
    while(a[i]<mid)
         i++;
    while(a[j]>mid)
            j--;
    if(i<=j)//不能写if(a[i]>a[j])
    {
    exch(a[i],a[j]);
        i++;
        j--;
    }
    }while(i<=j);
        if(j>left)
            quicksort(a,left,j);
        if(i<right)
            quicksort(a,i,right);
}
int main()
{
    printf("Please give me the length of the array\n");
    int i,n;
    scanf("%d",&n);
    srand((unsigned int)time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%100;
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


