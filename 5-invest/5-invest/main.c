//
//  main.c
//  5-invest
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int main()
{
    double m,n;
    m=100;
    n=100;
    int count=0;
    while(m>=n)
    {
        m=m+10;
        n=n*0.05+n;
        count++;
    }
    printf("It takes %d years for Deirdre's investment to exceed Daphne’s.\n",count);
    printf("Deirdre’s investment is %lf.\nDaphne’s investment is %lf.\n",n,m);
    return 0;
}
