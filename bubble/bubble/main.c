//
//  main.c
//  bubble
//
//  Created by wang xi on 2018/11/19.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define exch(A,B){int temp=A;A=B;B=temp;}
int a[60000];
void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int count=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                exch(a[j],a[j+1]);
                count++;
            }
        }
        if(count==0)
            break;
    }
}
int main()
{
    printf("Please give me the length of the array\n");
    int i,n;
    scanf("%d",&n);
    srand((unsigned int)time(NULL));
    //Srand是种下随机种子数，你每回种下的种子不一样，用Rand得到的随机数就不一样。为了每回种下一个不一样的种子，所以就选用Time(0)，Time(0)是得到当前时时间值（因为每时每刻时间是不一样的了）
    for(i=0;i<n;i++)
        a[i]=rand()%50001;
    bubble(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
