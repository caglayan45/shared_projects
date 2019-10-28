#include <stdio.h>

void main()
{
    int sa=0,dk=0,sn=0,ekSn=0,topSn=0;

    printf("Zamani giriniz (saat dakika saniye) : ");
    scanf("%d %d %d",&sa,&dk,&sn);

    printf("%d:%d:%d",sa,dk,sn);

    printf("\n");

    printf("Eklenecek sureyi ginizi (saniye) : ");
    scanf("%d",&ekSn);

    printf("\n");

    topSn=(sa*3600)+(dk*60)+sn+ekSn;

    sa=topSn/3600;
    topSn=topSn-(sa*3600);

    dk=topSn/60;
    topSn=topSn-(dk*60);

    sn=topSn;

    printf("Saat = %d:%d:%d",sa,dk,sn);

    printf("\n");
}
