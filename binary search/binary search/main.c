//
//  main.c
//  binary search
//
//  Created by wang xi on 2018/11/15.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int binary(int a[],int n,int low,int high)
{
    int ans,mid;
    low=0;
    mid=(low+high)/2;
    if(low<=high)
     {
         if(a[mid]==n)
         {
             ans=mid+1;
             return ans;
         }
    else if(a[mid]>n)
    return binary(a,n,low,mid-1);
    else if(a[mid]<n)
    return binary(a,n,mid+1,high);
     }
        return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=2;
    int ans=binary(arr,n,0,9);
    printf("The answer is %d\n",ans);
    return 0;
}
