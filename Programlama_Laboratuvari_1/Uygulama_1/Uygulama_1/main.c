//
//  main.c
//  Uygulama_1
//
//  Created by Nisanur Korkmaz on 21/10/2021.
//

#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    printf("x degerini giriniz \n");
    scanf("%d",&x);
    printf("y degerini giriniz \n");
    scanf("%d",&y);
    if(x<y){
        z=y%x;
        printf("%d mod %d = %d\n",y,x,z);
    }

    else{
        z=x%y;
        printf("%d mod %d = %d\n",x,y,z);
    }
    return 0;
}
