//
//  main.c
//  quiz4 correction
//
//  Created by Nisanur Korkmaz on 29/04/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char okunan[1000];
    char ulkeler[50][30];
    int sayilar[50];
    int yazildimi[50]= {0};
    int ulkesayisi=0;
    printf("Girdi: ");
    fgets(okunan,1000,stdin);
    int i=0,j;
    while(okunan[i]!='\n')
    {
        int harfsayisi=0;
        while((okunan[i]>='A' && okunan[i]<='Z') || okunan[i]>='a' && okunan[i]<='z')
        {
            ulkeler[ulkesayisi][harfsayisi]=okunan[i];
            harfsayisi++;
            i++;
        }
        ulkeler[ulkesayisi][harfsayisi]='\0';
        char sayi[5];

        harfsayisi=0;
        while(okunan[i]>='0' && okunan[i]<='9')
        {
            sayi[harfsayisi]=okunan[i];
            harfsayisi++;
            i++;
        }
        sayilar[ulkesayisi]=atoi(sayi);
        ulkesayisi++;
    }
    int enbuyuk,enbuyukindis;
    for(i=0; i<ulkesayisi; i++)
    {
        enbuyuk=-1;
        enbuyukindis=-1;
        for(j=0; j<ulkesayisi; j++)
        {
            if(!yazildimi[j]&&sayilar[j]>enbuyuk)
            {
                enbuyuk=sayilar[j];
                enbuyukindis=j;
            }
            else if(!yazildimi[j] && sayilar[j]==enbuyuk && ulkeler[j][0]<ulkeler[enbuyukindis][0])
            {
                enbuyuk=sayilar[j];
                enbuyukindis=j;
            }
        }
        printf("%s %d\n",ulkeler[enbuyukindis],sayilar[enbuyukindis]);
        yazildimi[enbuyukindis]=1;
    }

    return 0;
}
