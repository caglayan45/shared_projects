#include <stdio.h>
#include <stdlib.h>

int max(int s1, int s2, int s3);
int min(int s1, int s2, int s3);

int main()
{
    int a=0,b=0,c=0;

    printf("3 adet sayi giriniz : ");
    scanf("%d %d %d",&a,&b,&c);

    int buyuk=0,kucuk=0,ort=0;

    buyuk=max(a,b,c);
    kucuk=min(a,b,c);

    if(buyuk!=a && kucuk!=a)
        ort=a;
    else if(buyuk!=b && kucuk!=b)
        ort=b;
    else
        ort=c;

    printf("Buyuk sayi = %d\n",buyuk);
    printf("Ortanca sayi = %d\n",ort);
    printf("Kucuk sayi = %d",kucuk);

    return 0;
}

int max(int s1, int s2, int s3) {
    if (s1 > s2 && s1 > s3)
        return s1;
    else if(s2 > s1 && s2 > s3)
        return s2;
    else
        return s3;
}

int min(int s1, int s2, int s3) {
    if (s1 < s2 && s1 < s3)
        return s1;
    else if(s2 < s1 && s2 < s3)
        return s2;
    else
        return s3;
}
