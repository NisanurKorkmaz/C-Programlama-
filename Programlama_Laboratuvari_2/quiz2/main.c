//
//  main.c
//  quiz2
//
//  Created by Nisanur Korkmaz on 15/04/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void hesapla( int toplam , int *yil ,int *ay , int *gun)
{
    
    *yil=toplam/365;
    toplam=toplam%365;
    *ay=toplam/30 ;
    toplam=toplam%30 ;
    *gun=toplam ;
    
}
int main()
{
    int toplam ;
    int *yil ;
    int *ay ;
    int *gun ;
    printf("is bitme suresinin kac gun oldugunu giriniz:");
    scanf("%d", &toplam);
    hesapla(toplam, &yil , &ay , &gun);
    printf("\n%d yil %d ay %d gun surer \n", yil, ay, gun);
    
    
    return 0;
}
