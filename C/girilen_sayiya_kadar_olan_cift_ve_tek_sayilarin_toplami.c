#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0,t_toplam=0,c_toplam=0;

    do{
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);
    }while(sayi<1);

    for(int i=0;i<=sayi;i++)
    {
        if(i%2==1)
            t_toplam+=i;
        else
            c_toplam+=i;
    }
    printf("\n\nGirilen sayiya kadar olan tek sayilarin toplami : %d\n\n",t_toplam);
    printf("Girilen sayiya kadar olan cift sayilarin toplami : %d\n\n",c_toplam);
}
