//
//  main.c
//  6
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int m=1000000;
    unsigned int count=0;
    while(m>0)
    {
        m=m*108/100-100000;
        count++;
    }
    printf("It takes him %d years to empty his account\n",count);
    return 0;
}
