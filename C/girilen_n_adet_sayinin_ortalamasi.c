#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi=0,toplam=0,sayilar=0;
   double ort=0;

   printf("Kac adet sayinin ortalamasini bulmak istiyorsunuz : ");
   scanf("%d",&sayi);

   for(int i=0;i<=sayi-1;i++)
   {
       printf("%d. sayiyi giriniz : ",i+1);
       scanf("%d",&sayilar);
       toplam+=sayilar;
   }
    ort=(double)(toplam)/(double)(sayi);

    printf("Girilen sayilarin aritmetik ortalamasi : %f",ort);
}
