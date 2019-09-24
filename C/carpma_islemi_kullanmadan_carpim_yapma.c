#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1=0,s2=0,toplam=0;

    printf("Birinci sayiyi giriniz : ");
    scanf("%d",&s1);

    printf("Ikinci sayiyi giriniz : ");
    scanf("%d",&s2);

    for(int i=1;i<=s1;i++)
    {
        toplam+=s2;
    }

    printf("\nGirilen sayilarin carpimi : %d\n",toplam);
}
