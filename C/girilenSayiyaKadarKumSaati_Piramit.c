#include <stdio.h>

void main()
{
    int k=0;

    printf("Bir sayi giriniz : ");
    scanf("%d",&k);

    for(int i=k;i>1;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
            printf("\n");
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}
