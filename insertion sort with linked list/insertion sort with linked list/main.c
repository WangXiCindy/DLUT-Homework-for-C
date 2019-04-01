//
//  main.c
//  insertion sort with linked list
//
//  Created by wang xi on 2018/12/17.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct num
{
    int id;
    char name[20];
    char gender[10];
    int x;//分数
    struct num *next;
};
int n;
struct num linklist[5];
void create(struct num *head)
{
    struct num *p,*q=head;
    p=head;
    int i=0;
    for(i=0;i<5;i++)
    {
            q->next=++p;
        q=p;
    }
        q->next=NULL; //尾指针置空
}
struct num *insert(struct num *h)
{
    struct num *ptemp=h,*phead,*q,*r,*t;
    phead=(struct num*)malloc(sizeof(struct num));
    phead->next=NULL;
    while(ptemp!=NULL)
    {
        if(phead->next==NULL) //判断是否是第一个结点
        {
            phead->next=ptemp;
            q=ptemp->next;
            ptemp->next=NULL;
            ptemp=q;
        }
        else
        {
            q=phead->next;
            r=phead;
            while(q!=NULL&&ptemp->x<q->x)
            {
                r=q;
                q=q->next;
            }
            t=ptemp->next;
            ptemp->next=r->next;
            r->next=ptemp;
            ptemp=t;
        }
    }
    t=phead;
    phead=phead->next;
    free(t);
    return phead;
}
int main(int argc, const char * argv[])
{
    struct num *head;
    printf("Please give me the id,name,gender and score:\n");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d%s%s%d",&linklist[i].id,linklist[i].name,linklist[i].gender,&linklist[i].x);
    }
    create(linklist);
    head=insert(linklist);
    printf("The answer is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d %-8s%-6s %d\n",head->id,head->name,head->gender,head->x);
        head=head->next;
    }
    printf("\n");
    return 0;
}
