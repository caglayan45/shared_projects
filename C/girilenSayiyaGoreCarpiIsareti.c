#include <stdio.h>

void main()
{
    int x,c,b;

    do{
    printf("1 den buyuk ve tek sayi giriniz : ");
    scanf("%d",&x);
    }while(x%2!=1 || x<2);

    c=x;

    for(int i=x;i>=1;i--){
        for(int j=1;j<=x-i;j++)
            printf(" ");
        printf("*");
        for(int j=1;j<=c-2;j++)
            printf(" ");
        c-=2;
        if(i!=((x/2)+1))
            printf("*");
        else
            break;
        printf("\n");
        b=x-i;
    }

    printf("\n");

    for(int i=1;i<=x;i++){
        for(int j=1;j<=b;j++)
            printf(" ");
        b--;
        printf("*");
        for(int j=1;j<=c+2;j++)
            printf(" ");
        printf("*");
        c+=2;
        if(i == ((x/2)))
            break;
        printf("\n");
    }
}
