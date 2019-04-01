//
//  main.c
//  gold
//
//  Created by wang xi on 2018/11/15.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int prime(int n)
{
    if(n%2==0)
    return 0;
    else
    return 1;
}
int gold(int m)
{
    if(prime(m)==0)
    {
        int i;
        int mid=m/2;
        for(i=1;i<=mid;i+=2)
        {
            if(prime(m-i)&&prime(i))
                return 1;
        }
    }
    return 0;
}
int main()
{
    int j;
    for(j=4;j<=50000;j+=2)
    {
        if(gold(j)==0)
        {
            printf("The Goldbach conjecture is wrong\n");
            break;
        }
    }
    printf("The Goldbach conjecture is right\n");
    return 0;
}
