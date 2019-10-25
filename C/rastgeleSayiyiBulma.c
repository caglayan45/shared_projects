#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int sayi,tahmin,sayac=0;

    srand(time(NULL));
    sayi=rand()%99+1;

    printf("Sayiyi tahmin et [1-100] : ");

    do{
        scanf("%d",&tahmin);
        if(sayi>tahmin)
            printf("Daha buyuk sayi giriniz : ");
        else if(sayi<tahmin)
            printf("Daha kucuk sayi giriniz : ");
        sayac++;
    }while(sayi!=tahmin);

    printf("\n%d. denemede sayi bulundu %d\n",sayac,tahmin);
}
