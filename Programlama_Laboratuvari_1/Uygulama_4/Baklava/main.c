//
//  main.c
//  Baklava
//
//  Created by Nisanur Korkmaz on 11/05/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10 ;
    for(int i=0 ; i<x ; i++)
    {
        for(int j=0 ; j<x-i ; j++)
            printf(" ");
        for(int k=0 ; k<2*i-1 ; k++)
            printf("*");
        printf("\n");
    }
    for(int i=x ; i>0 ; i--)
    {
        for(int j=0 ; j<x-i ; j++)
            printf(" ");
        for(int k=0 ; k<i*2-1 ; k++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}
