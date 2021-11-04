//
//  main.c
//  quiz7
//
//  Created by Nisanur Korkmaz on 03/06/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kisi{
    char ad[20];
    int yas;
};

int main()
{
    int s ; //kisi sayisi
    printf("Kisi sayisini giriniz: ");
    scanf("%d",&s);
    
    struct kisi *liste =(struct kisi *) malloc(s*sizeof(struct kisi));
                     
    for(int i=0 ; i<s ; i++)
    {
        printf("%d. kisiyi giriniz :",i+1);
        scanf("%s",liste[i].ad);
        printf("%d. kisinin yasini giriniz: ",i+1);
        scanf("%d",&liste[i].yas);
    }
    
    printf("\nAda gore fihrist siralamasi:\n");
    
    struct kisi gecici;
    for(int i=0 ; i<s ; i++)
    {
        for(int j=0 ; j<s-1 ; j++)
        {
            if(strcmp(liste[j].ad,liste[j+1].ad)>0)
            {
                strcpy(gecici.ad,liste[j].ad);
                gecici.yas=liste[j].yas;
                
                strcpy(liste[j].ad,liste[j+1].ad);
                liste[j].yas=liste[j+1].yas;
                
                strcpy(liste[j+1].ad,gecici.ad);
                liste[j+1].yas=gecici.yas;
            }
        }
    }
    for(int k=0 ; k<s ; k++)
    {
        printf("%s ",liste[k].ad);
        printf("%d\n",liste[k].yas);
    }
    printf("\n\n");
    
    
//    bubble sort
    int temp ;
    char tempp[20];
    for(int i=0 ; i<s; i++)
    {
        for(int j=0 ; j<s-i-1 ; j++)
        {
            if(liste[j].yas<liste[j+1].yas)
            {
                temp=liste[j].yas;
                liste[j].yas=liste[j+1].yas;
                liste[j+1].yas=temp ;
                
                strcpy(tempp,liste[j].ad);
                strcpy(liste[j].ad,liste[j+1].ad);
                strcpy(liste[j+1].ad,tempp);
            }
        }
    }
    printf("Yasa gore buyukten kucuge siralama:\n");
    for(int k=0 ; k<s ; k++)
    {
        printf("%s ",liste[k].ad);
        printf("%d\n",liste[k].yas);
    }
    printf("\n\n");
    
    return 0;
}
