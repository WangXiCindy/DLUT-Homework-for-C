//
//  main.c
//  4-2
//
//  Created by wang xi on 2018/11/15.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
double atoff(char s[])
{
    double val,power;
    int i,sign,eval,epower;
        for(i=0;isspace(s[i]);i++)
            ;
        sign=(s[0]=='-')?-1:1;
        if(s[i]=='+'||s[i]=='-')
            i++;
        for(val=0.0;isdigit(s[i]);i++)
            val=10.0*val+(s[i]-'0');
        if(s[i]=='.')
            i++;
        for(power=1.0;isdigit(s[i]);i++)
        {
            val=10.0*val+(s[i]-'0');
            power*=10.0;
        }
        val = sign * val / power;
    //指数部分
        if (s[i] == 'e' || s[i] == 'E')
            i++;
        sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '-' || s[i] =='+')
            i++;
        for (eval = 0; isdigit(s[i]); i++)
            eval = 10 * eval + (s[i] - '0');
        for (epower = 1; eval > 0; eval--)
            epower = 10 * epower;
        if (sign > 0)
            return val * epower;
        else
            return val / epower;
}
int main()
{
    char s[]="-123.45e-6";
    double ans=atoff(s);
    printf("%.8lf\n",ans);
    return 0;
}
