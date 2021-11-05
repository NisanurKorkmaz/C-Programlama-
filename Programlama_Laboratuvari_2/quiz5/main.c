//
//  main.c
//  quiz5 CORRECTION
//
//  Created by Nisanur Korkmaz on 07/05/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi)
{
    if(sayi<=1)
    {
        return 0;
    }
    int i;
    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    char string[100][500];
    int sayilar[100],i,j;
    for(j=0;j<100;j++){
        i=j+1;
        if(asalmi(i)){
            sprintf(string[j],"|  %4d (Asal) || ...^^... ||%10d ||...>>...||%11.4f|",i,i*i,(float)i*i);
        }
        else if(i%2==0){
            sprintf(string[j],"|  %4d (Cift) || ...><... ||%10d ||...>>...||%11.4f|",i,i*2,(float)i*2);
        }
        else{
            sprintf(string[j],"|  %4d (Tek ) || ...//... ||%10d ||...>>...||%11.4f|",i,i/2,(float)i/2);
        }
    }
    for(i=0;i<100;i++){
        puts(string[i]);
    }

    return 0;
}
