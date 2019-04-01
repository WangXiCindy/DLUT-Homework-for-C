//
//  main.c
//  quadratic
//
//  Created by wang xi on 2018/10/24.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,x1,x2,m;
    while(1)
    {
    printf("a*x^2+b*x+c=0,so the a,b,c is\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    m=b*b-4*a*c;
    if(m==0)
    {
        x1=(-b+sqrt(m))/(2*a);
        printf("%lf\n",x1);
    }
    if(m>0)
    {
        x1=(-b+sqrt(m))/(2*a);
        x2=(-b-sqrt(m))/(2*a);
        printf("%lf %lf\n",x1,x2);
    }
    }
    return 0;
}
