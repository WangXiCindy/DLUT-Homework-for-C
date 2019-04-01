//
//  main.c
//  quicksort-none
//
//  Created by wang xi on 2018/11/19.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define exch(A,B) {int temp=A;A=B;B=temp;}
int a[60000];
//stack（栈）
struct node
{
    int min;
    int max;
};
void quicksort(int a[],int left,int right)
{
    struct node stack[100];
    int i,j;
    int top=0;
    stack[0].min=left;
    stack[0].max=right;
    while(top>-1)
    {
        //left和right记录当前处理区间的左极限和右极限
        i=left=stack[top].min;
        j=right=stack[top].max;
        top--;
        int mid=a[(left+right)/2];
        do
        {
            while(a[i]<mid)
                i++;
            while(a[j]>mid)
                j--;
            if(i<=j)
            {
                exch(a[i],a[j]);
                i++;
                j--;
            }
        }while(i<=j);//经过一次o排序
        if(j>left)
        {
            top++;
            stack[top].min=left;
            stack[top].max=j;
        }
        if(i<right)
        {
            top++;
            stack[top].min=i;
            stack[top].max=right;
        }
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
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

//int key=a[left];
/*while(i<j)
 {
 while(i<j&&key<=a[j])
 j--;
 if(i<j)
 {
 exch(a[i],a[j]);//找到比key小的，与key位置交换，这样右边都比key大
 i++;
 }
 //此时j的位置上为key
 while(i<j&&key>=a[i])
 i++;
 if(i<j)
 {
 exch(a[i],a[j]);//找到比key大的，与已经历一次位置交换的key位置交换，这样左边都比key小
 j--;
 }
 //没有全部排好，再继续直到i，j遍历数组
 }*/
