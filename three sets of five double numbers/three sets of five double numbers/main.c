//
//  main.c
//  three sets of five double numbers
//
//  Created by wang xi on 2018/12/6.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>

double average(double *columb)
{
    int i;
    double aver,sum=0;
    for(i=0;i<5;i++)
        sum+=columb[i];
    aver=sum/5.0;
    return aver;
}
double taverage(double a[][5])
{
    int i,j;
    double sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
            sum+=a[i][j];
    }
    double aver=sum/15;
    return aver;
}
double max(double a[][5])
{
    int i,j;
    double max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            if(max<a[i][j])
                max=a[i][j];
        }
    }
    return max;
}
void put(double *aver,double taver,double tmax)
{
    int i;
    for(i=0;i<3;i++)
    printf("The average of set %d is %.1lf\n",i+1,aver[i]);
    printf("The average of all the values is %.1lf\n",taver);
    printf("The largest value is %.1lf\n",tmax);
}
int main()
{
    double arr[3][5]={1,2,3,4,5,
                      6,7,8,9,10,
                      11,12,13,14,15};
    double tmax,taver;
    double aver[3];
    int i;
    for(i=0;i<3;i++)
    {
        aver[i]=average(arr[i]);
    }
    taver=taverage(arr);
    tmax=max(arr);
    put(aver,taver,tmax);
    return 0;
}
