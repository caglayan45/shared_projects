#include <stdio.h>

void main()
{
    int yil=0;
    printf("Yil Giriniz : ");
    scanf("%d",&yil);

    if(yil%4==0 && (yil%100!=0 || yil%400==0) && yil%4000!=0)
        printf("\nGirdiginiz yil artik yildir.\n");
    else
        printf("\nGirdiginiz yil artik yil degildir.\n");

}
