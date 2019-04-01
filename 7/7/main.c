//
//  main.c
//  7
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int count=5;
    int i=0;
    while(count<=150)
    {
        i++;
        count=(count-i)*2;
        printf("He has %d friends int the %dth week\n",count,i);
    }
    return 0;
}
