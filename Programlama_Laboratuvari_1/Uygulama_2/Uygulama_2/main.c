//
//  main.c
//  Uygulama_2
//
//  Created by Nisanur Korkmaz on 21/10/2021.
//

#include <stdio.h>

int main() {
    float fiyat ;
    float indirimli_fiyat;
    printf("Urun fiyatini giriniz (TL): ");
    scanf("%f",&fiyat);
    
    if(0<fiyat && fiyat<100){
        indirimli_fiyat=fiyat*(0.9);
        printf("Urunun indirimli satis fiyati : %.2f\n",indirimli_fiyat);
    }
    else if(100<=fiyat && fiyat<500){
        indirimli_fiyat=fiyat*(0.85);
        printf("Urunun indirimli satis fiyati : %.2f\n",indirimli_fiyat);
    }
    else if(500<=fiyat){
        indirimli_fiyat=fiyat*(0.75);
        printf("Urunun indirimli satis fiyati : %.2f\n",indirimli_fiyat);
    }
    else
        printf("yanlis fiyat girdiniz\n");
    
    return 0;
}
