//
//  main.c
//  cpl 2-9 bitcount
//
//  Created by wang xi on 2018/10/24.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>//bitcount函数统计其整数参数的值为1的二进制位的个数
int main()
{
    int b,x;
    while(1)
    {
        printf("Please input the x\n");
        scanf("%d",&x);
        for (b = 0; x != 0; b++)
            x &= (x-1);//x自动减1
    printf("%d\n",b);
    }
    return 0;
}
