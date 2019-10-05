#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matrisB[3][3];

    matrisB[0][0]=12;
    matrisB[0][1]=13;
    matrisB[0][2]=14;

    matrisB[1][0]=17;
    matrisB[1][1]=18;
    matrisB[1][2]=19;

    matrisB[2][0]=22;
    matrisB[2][1]=23;
    matrisB[2][2]=24;

    int matrisA[5][5];

    matrisA[0][0]=1;
    matrisA[0][1]=2;
    matrisA[0][2]=3;
    matrisA[0][3]=4;
    matrisA[0][4]=5;

    matrisA[1][0]=6;
    matrisA[1][1]=7;
    matrisA[1][2]=8;
    matrisA[1][3]=9;
    matrisA[1][4]=10;

    matrisA[2][0]=11;
    matrisA[2][1]=12;
    matrisA[2][2]=13;
    matrisA[2][3]=14;
    matrisA[2][4]=15;

    matrisA[3][0]=16;
    matrisA[3][1]=17;
    matrisA[3][2]=18;
    matrisA[3][3]=19;
    matrisA[3][4]=20;

    matrisA[4][0]=21;
    matrisA[4][1]=22;
    matrisA[4][2]=23;
    matrisA[4][3]=24;
    matrisA[4][4]=25;

    int a=0,k=0,l=1,m=0,n=0,sayac=0;
    a=matrisB[0][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrisA[i][j] == a){
                m=i;//2
                n=j+1;//2
                sayac++;
                while(matrisA[m][n] == matrisB[k][l]){
                    l++;
                    n++;
                    sayac++;
                    if(l==3){
                        l=0;
                        n=j;
                        m++;
                        k++;
                    }
                }
            }
        }
    }

    printf("%d\n",sayac);
    if(sayac==9)
        printf("Matris Bulundu.");
    else
        printf("Matris Bulunamadi.");

















}
