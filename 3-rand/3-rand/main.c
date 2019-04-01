//
//  main.c
//  3-rand
//
//  Created by wang xi on 2018/11/8.
//  Copyright © 2018 wang xi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*int rand()
 {
 next=next81103515425+12345;
 return (unsigned int)(next/65536)%32768
 }
 void srand(unsigned int seed)
 {
 next=seed;
 }*/
int main()
{
    int magic=rand();
    int counter,guess;
    counter=0;
    do
    {
        printf("What number do you guess\n");
        scanf("%d",&guess);
        counter++;
        if(guess>magic)
            printf("Too Big\n");
        else
        {
            if(guess<magic)
                printf("Too small\n");
            else
                printf("That's right\n");
        }
    }while(guess!=magic);
    printf("%d",counter);
    return 0;
}
