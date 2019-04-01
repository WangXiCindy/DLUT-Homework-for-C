//
//  main.c
//  gcd
//
//  Created by wang xi on 2018/11/15.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int gcd(int a,int b)
{
    int m,n;
    m=a>b?a:b;
    n=a<b?a:b;
    if(n==0)
        return m;
    else
    {
        m=m%n;
        return gcd(m,n);
    }
}
int main()
{
    int a=216;
    int b=81;
    printf("The answer is %d\n",gcd(a,b));
    return 0;
}
