//
//  main.c
//  QUIZ1CORRECTION
//
//  Created by Nisanur Korkmaz on 10/04/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int N;

int nilpotentMi(int A[][N], int N)
{
    int toplam;
    int B[N][N],i,j,k;
    for( i=0; i<N; i++)
    {
        for( j=0; j<N; j++)
        {
            toplam=0;
            for(k=0; k<N; k++)
            {
                toplam+=A[i][k]*A[k][j];
                B[i][j]=toplam;
            }

        }

    }
    printf("\n");
    /*for( i=0; i<N; i++)
    {
        for( j=0; j<N; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }*/
    int flag=0;
    for( i=0; i<N; i++)
    {
        for( j=0; j<N; j++)
        {
            if(B[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    srand(time(NULL));
    printf("Matrisin boyutunu giriniz : ");
    scanf("%d",&N);
    int matris[N][N];
    printf("Olusturulan matris : \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            matris[i][j]=-10+rand()%20;
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    if(nilpotentMi(matris,N)==1)
        printf("Matris nilpotenttir.\n");
    else
        printf("Matris nilpotent DEGILDIR.\n");
    return 0;
}
