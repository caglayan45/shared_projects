#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1=0,s2=0,s3=0,buyuk=0,kucuk=0,ort=0;

    printf("Birinci sayiyi giriniz : ");
    scanf("%d",&s1);

    do{
    printf("Farkli bir ikinci sayi giriniz : ");
    scanf("%d",&s2);
    }while(s1==s2);

    do{
    printf("Farkli bir ucuncu sayi giriniz : ");
    scanf("%d",&s3);
    }while(s3==s2 || s3==s1);

    printf("\n");

    if(s1>s2 && s1>s3)
        buyuk=s1;
    else if(s2>s3 && s2>s1)
        buyuk=s2;
    else if(s3>s2 && s3>s1)
        buyuk=s3;

    if(s1<s2 && s1<s3)
        kucuk=s1;
    else if(s3<s2 && s3<s1)
        kucuk=s3;
    else if(s2<s3 && s2<s1)
        kucuk=s2;

    if(buyuk!=s1 && kucuk!=s1)
        ort=s1;
    else if(buyuk!=s2 && kucuk!=s2)
        ort=s2;
    else if(buyuk!=s3 && kucuk!=s3)
        ort=s3;

    printf("Buyuk : %d \nOrtanca : %d \nKucuk : %d",buyuk,ort,kucuk);
    printf("\n");
}
