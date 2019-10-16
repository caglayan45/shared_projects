#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=0,sayac=1,sonuc=0,k=0,sayi=0;
    int dizi[15] = {6,7,7,7,7,7,7,5,5,5,5,2,1,3,2};

    for(int i=0;i<15;i++){
        a=dizi[i];
        if(i<15 && a==dizi[i+1])
        {
            k=i;
            while(dizi[k+1]==a){
                sayac++;
                if(sonuc <= sayac){
                    sonuc=sayac;
                    sayi=dizi[k];
                }
                k++;
            }
            sayac=1;
        }
    }
    printf("%d sayisi %d adet tekrarli",sayi,sonuc);




}
