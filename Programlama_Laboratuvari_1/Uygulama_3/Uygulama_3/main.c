//
//  main.c
//  Uygulama_3
//
//  Created by Nisanur Korkmaz on 21/10/2021.
//

#include <stdio.h>

int main() {
    int x;
    int y;
    char islem;
    float sonuc;
    printf("HESAP MAKINESI : \n ------------------------------\n");
    printf("Enter [sayi1] islem[+ - * /]  [sayi2]\n");
    scanf("%d %c %d",&x,&islem,&y);
    
    switch (islem) {
        case '+':
            sonuc=x+y;
            printf("%d %c %d = %.2f\n",x,islem,y,sonuc);
            break;
            
        case '-':
            sonuc=x-y;
            printf("%d %c %d = %.2f\n",x,islem,y,sonuc);
            break;
            
        case '/':
            if(y==0)
                printf("Bolme isleminde bir sayinin 0'a bolumu tanimsizdir\n");
            else
            {
                sonuc=(float)x/(float)y;
                printf("%d %c %d = %.2f\n",x,islem,y,sonuc);
            }
            break;
            
        case '*':
            sonuc=x*y;
            printf("%d %c %d = %.2f\n",x,islem,y,sonuc);
            break;
        default:
            break;
    }
    return 0;
}
