#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=0,sayac=1,sonuc=0,k=0,sayi=0;
    int dizi[15];
    dizi[0]=6;
    dizi[1]=1;
    dizi[2]=1;
    dizi[3]=2;
    dizi[4]=3;
    dizi[5]=1;
    dizi[6]=5;
    dizi[7]=5;
    dizi[8]=5;
    dizi[9]=5;
    dizi[10]=2;
    dizi[11]=1;
    dizi[12]=1;
    dizi[13]=1;
    dizi[14]=4;

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
