#include <stdio.h>

void main()
{
    int sayi = 0,sayacTek=0,sayacCift=0;

    printf("Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    printf("\n");

    int tekDizi[sayi],ciftDizi[sayi];

    /*for(int i=0;i<sayi;i++)
    {
        if(i%2==0)
        {
            ciftDizi[sayacCift]=i;
            sayacCift++;
        }
        else
        {
            tekDizi[sayacTek]=i;
            sayacTek++;
        }
    }
    printf("\nTek sayilar;\n");
    for(int i=0;i<sayi/2;i++)
        printf("%d\n",tekDizi[i]);

    printf("\nCift sayilar;\n");
    for(int i=0;i<sayi/2;i++)
        printf("%d\n",ciftDizi[i]);

    */

    printf("\nCift sayilar;\n");
    for(int i=0;i<=sayi;i++)
    {
         if(i%2==0)
        {
            ciftDizi[sayacCift]=i;
            printf("%d\n",ciftDizi[sayacCift]);
            sayacCift++;
        }
    }

    printf("\nTek sayilar;\n");
    for(int i=0;i<=sayi;i++)
    {
         if(i%2==1)
        {
            tekDizi[sayacTek]=i;
            printf("%d\n",tekDizi[sayacTek]);
            sayacTek++;
        }
    }
}
