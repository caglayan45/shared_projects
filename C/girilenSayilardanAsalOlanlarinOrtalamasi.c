#include <stdio.h>
#include <math.h>

void main()
{
    int ort=0,sayac=0,sayi,aSayac=0,kontrol=1;
    float toplam=0;

    while(kontrol != 0){
        printf("Sayi giriniz : ");
        scanf("%d",&sayi);

        for(int i=2;i<=sqrt(sayi);i++){
            if(i*i <= sayi && sayi%i==0)
                aSayac++;
        }
        if(aSayac == 0 && sayi != 1){
            toplam+=sayi;
            sayac++;
        }else
            aSayac=0;
        printf("Bitirmek icin 0 giriniz : ");
        scanf("%d",&kontrol);
        printf("\n");
    }

    printf("\nGirilen asallarin toplami = %.2f, ortalamasi = %.2f\n",toplam,toplam/sayac);
}
