//
//  main.c
//  shell
//
//  Created by wang xi on 2018/11/19.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define exch(A,B) {int temp=A;A=B;B=temp;}
int a[60000];
void shellsort(int a[],int n)
{
    int i,j,gap;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            for(j=i-gap;j>=0&&a[j]>a[j+gap];j-=gap)//仍然要继续向前方交换，才能保证最小的扔到前面
                exch(a[j],a[j+gap]);
        }
    }
}
/*void shellsort(int a[],int len)//这种从前往后排或从后往前排的算法是不可以的，例如20832 27712 18177，20832 27712不会交换，18177和27712会交换，但是最终会是20832  18177 27712
{
    int i,tmp;
    int b=len/2;
    do{
        
        for(i=0;i+b<len;i++)
        {
            if(a[i]>a[i+b])
            {
                tmp=a[i];
                a[i]=a[i+b];
                a[i+b]=tmp;
            }
        }
        b/=2;
    }while(b>=1);
}*/
int main()
{
    printf("Please give me the length of the array\n");
    int i,n;
    scanf("%d",&n);
    srand((unsigned int)time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%50001;
    shellsort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

