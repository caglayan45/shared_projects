#include <stdio.h>

void main()
{
    int x=0;

    printf("Sayi gir : ");
    scanf("%d",&x);
    printf("\n");

    for(int i=x;i>=1;i--){
        for(int j=1;j<=x-i;j++)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }

    for(int i=2;i<=x;i++){
        for(int j=1;j<=x-i;j++)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
}
