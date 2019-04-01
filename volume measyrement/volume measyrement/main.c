//
//  main.c
//  volume measyrement
//
//  Created by wang xi on 2018/10/16.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

int main()
{
    double pint,cup,ounce,tablespoon,teaspoon;//注意，一定要f都定义成double型
    while(1)
    {
        printf("Please input how many cups you want:\n");
        scanf("%lf",&cup);
               pint=2*cup;
               ounce=cup/8;
               tablespoon=ounce/2;
               teaspoon=tablespoon/3;
        printf("So it is \n%lf pints\n%lf ounces\n%lf tablespoons\n%lf teaspoons\n",pint,ounce,tablespoon,teaspoon);
    }
    return 0;
}
