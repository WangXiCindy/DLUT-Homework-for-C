//
//  main.c
//  binary
//
//  Created by wang xi on 2018/11/1.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*int cmp_num(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;//由小到大排序
    //return *(int *)b - *(int *)a; 由大到小排序
}// > 与 < 都不行 ！*/
//同样的，比如要在取值范围1 ~ 10000 之间 100 个元素从小到大均匀分布的数组中查找5， 我们自然会考虑从数组下标较小的开始查找。经过以上分析，折半查找这种查找方式，还是有改进空间的，并不一定是折半的！
//mid = （low+high）/ 2, 即 mid = low + 1/2 * (high - low);
int main()//折半查找
{
    int i,m,n,low,high,mid;
    int a[50010];
    while(1)
    {
        printf("Please give me the number you want to search\n");
        scanf("%d",&m);
        printf("The size of the array is:\n");
        scanf("%d",&n);
        printf("The array is:\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        //qsort(a,n,sizeof(int),cmp_num);
        low=0;
        high=n-1;
        mid=(low+high)/2;
        while(low<=high&&m!=a[mid])
        {
            if(m>a[mid])
                low=mid+1;
            else
                high=mid-1;
            mid=(low+high)/2;
        }
        if(m!=a[mid])
            printf("There is no the number here!\n");
        else
        printf("So it is in the position %dth in the sorted array\n",mid+1);
    }
    return 0;
}
