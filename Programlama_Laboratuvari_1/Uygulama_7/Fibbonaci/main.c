//
//  main.c
//  fibonacci
//
//  Created by Nisanur Korkmaz on 09/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>

int fibonacci(int n );

int main() {
    int s ;
    printf("fibonnaci eleman sayisi\n");
    scanf("%d", &s);
    
    for(int i=0 ; i<s ; i++)
    {
        printf("%d  ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci ( int n)

{   if ( n==1 )
        return n ;
    else if (n==0)
        return n ;
    else
        return fibonacci(n-1) + fibonacci(n-2) ;
}
