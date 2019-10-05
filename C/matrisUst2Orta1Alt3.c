#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matrisB[4][4];

    matrisB[0][0]=1;
    matrisB[0][1]=2;
    matrisB[0][2]=3;
    matrisB[0][3]=4;

    matrisB[1][0]=5;
    matrisB[1][1]=6;
    matrisB[1][2]=7;
    matrisB[1][3]=8;

    matrisB[2][0]=1;
    matrisB[2][1]=2;
    matrisB[2][2]=3;
    matrisB[2][3]=4;

    matrisB[3][0]=5;
    matrisB[3][1]=6;
    matrisB[3][2]=7;
    matrisB[3][3]=8;

    int k=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                printf("%d  ",matrisB[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i<j){
                matrisB[i][j]=2;
            }else if(i==j)
                matrisB[i][j]=1;
            else
                matrisB[i][j]=3;
        }
    }

    printf("\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                printf("%d  ",matrisB[i][j]);
        }
        printf("\n");
    }




}
