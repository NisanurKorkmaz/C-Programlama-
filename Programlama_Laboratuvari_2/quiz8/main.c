//
//  main.c
//  quiz8
//
//  Created by Nisanur Korkmaz on 10/06/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int sayi ;
    
    FILE *dosya=fopen("quiz8.txt","w+");
    
    printf("sayi giriniz :");
    scanf("%d",&sayi);
    
    int dizi[10];
    int i=0 ;
    while(sayi>0)
    {
        int a ;
        a=sayi%10 ;
        dizi[i]=a;
        i++;
        sayi=sayi/10 ;
        
        
    }
    for(int j=i-1 ; 0<=j ; j--)
    {
        int x ;
        x=dizi[j];
        switch (x) {
            case 0:
                fprintf(dosya, "sifir ");
                printf("sifir ");
                break;
                
            case 1:
                fprintf(dosya, "bir ");
                printf("bir ");
                break;
            case 2:
                fprintf(dosya, "iki ");
                printf("iki ");
                break;
            case 3 :
                fprintf(dosya, "uc ");
                printf("uc ");
                break ;
            case 4 :
                fprintf(dosya, "dort ");
                printf("dort ");
                break;
            case 5:
                fprintf(dosya, "bes ");
                printf("bes ");
                break;
            case 6:
                fprintf(dosya, "alti ");
                printf("alti ");
                break;
            case 7:
                fprintf(dosya, "yedi ");
                printf("yedi ");
                break;
            case 8 :
                fprintf(dosya, "sekiz ");
                printf("sekiz ");
                break ;
            case 9 :
                fprintf(dosya, "dokuz ");
                printf("dokuz ");
                break;
            default:
                break;
        }
    }
    
    printf("\nDosyaya kaydedilmistir.\n");
    
    return 0;
}
