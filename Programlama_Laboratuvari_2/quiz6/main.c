//
//  main.c
//  quiz6
//
//  Created by Nisanur Korkmaz on 13/05/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct kimlik{
    
    char isim[20];
    int gun ;
    int ay ;
    int yil ;
    
};

int kucuguBul(struct kimlik kisi[], int n)
{

    int dizi[10]={0};
    int min=(kisi[0].gun)+(kisi[0].ay)*12+(kisi[0].yil)*365;
    int indis=0 ;
    for(int i=0 ; i<n ; i++)
    {
        dizi[i]=(kisi[i].gun)+(kisi[i].ay)*12+(kisi[i].yil)*365;

    }
    for(int i=0 ; i<n ; i++)
    {
        if(min<dizi[i])
        {
            min=dizi[i];
            indis=i;
        }
    }
    
    return indis ;
    
}
int main()
{
    int n;
    printf("Kisi sayisini giriniz :");
    scanf("%d",&n);
    struct kimlik kisi[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("%d. kisinin ismini giriniz :",i+1);
        scanf("%s",kisi[i].isim);
        printf("%d. kisinin dogum tarihini giriniz:\n",i+1);
        printf("Gun : ");
        scanf("%d",&kisi[i].gun);
        printf("Ay :");
        scanf("%d",&kisi[i].ay);
        printf("Yil : ");
        scanf("%d",&kisi[i].yil);
    }
    printf("Kisi Bilgileri \n\n------------------------------------\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%s - %d / %d / %d \n",kisi[i].isim,kisi[i].gun,kisi[i].ay,kisi[i].yil);
    }
    printf("------------------------------------\n");
    int min ;
    min=kucuguBul(kisi,n);
    printf("\nEn kucuk kisinin ismi: %s\n",kisi[min].isim);
    printf("En kucuk kisinin dogum tarihi : %d / %d / %d \n",kisi[min].gun,kisi[min].ay,kisi[min].yil);
    return 0;
}
