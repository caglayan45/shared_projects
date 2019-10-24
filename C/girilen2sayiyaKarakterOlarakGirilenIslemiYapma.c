#include <stdio.h>

void main()
{
    char secim;
    float s1=0,s2=0,sonuc=0;

    printf("1. Sayi : ");
    scanf("%f",&s1);

    printf("2. Sayi : ");
    scanf("%f",&s2);

    printf("Islem [* - + /] : ");
    scanf("%s",&secim);

    switch(secim){
        case '*':
            sonuc=s1*s2;
            printf("Sonuc = %f ",sonuc);
            break;
        case '+':
            sonuc=s1+s2;
            printf("Sonuc = %f ",sonuc);
            break;
        case '-':
            sonuc=s1-s2;
            printf("Sonuc = %f ",sonuc);
            break;
        case '/':
            if(s2==0)
                printf("Bir sayinin 0'a bolumu tanimsizdir.");
            else
                sonuc=s1/s2;
                printf("Sonuc = %f ",sonuc);
            break;
        default:
            printf("Yanlis karakter giriniz");
            break;
    }
}
