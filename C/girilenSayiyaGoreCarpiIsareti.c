#include <stdio.h>

void main()
{

    int x;

    do{
    printf("0 dan buyuk ve tek sayi giriniz : ");
    scanf("%d",&x);
    }while(x%2!=1 || x<1);

    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(j==i || j==x-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}



















