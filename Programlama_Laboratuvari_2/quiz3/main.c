//
//  main.c
//  quiz3
//
//  Created by Nisanur Korkmaz on 22/04/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>

int main()
{
    char cumle[1000];
    
    printf("cumleyi giriniz :  ");
    
    gets(cumle);
    
    printf("%c\n", cumle[0]);
    
    for(int i=0 ; cumle[i]!='\0' ; i++)
    {
        if(cumle[i]==' ')
            printf("%c\n", cumle[i+1] );
        
    }
    
    return 0;
}
