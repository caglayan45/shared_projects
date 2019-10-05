#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matrisB[3][3];

    matrisB[0][0]=1;
    matrisB[0][1]=2;
    matrisB[0][2]=3;

    matrisB[1][0]=4;
    matrisB[1][1]=5;
    matrisB[1][2]=6;

    matrisB[2][0]=7;
    matrisB[2][1]=8;
    matrisB[2][2]=9;

    int k=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d  ",matrisB[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j){
                k=matrisB[i][j];
                matrisB[i][j]=matrisB[j][i];
                matrisB[j][i]=k;
            }
        }
    }

    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d  ",matrisB[i][j]);
        }
        printf("\n");
    }










}
