#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0,toplam=0;
    do{
        printf("0'dan buyuk bir sayi giriniz : ");
        scanf("%d",&sayi);
    }while(sayi<=0);

    for(int i=0;i<=sayi;i++)
    {
        toplam+=i;
    }
    printf("Girdiginiz sayiya kadar olan toplam : %d",toplam);
}
