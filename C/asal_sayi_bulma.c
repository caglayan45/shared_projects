#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=2;
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);

    int sayac = 0;
    for(int i=2;i<=sayi;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(j<i)
                {
                    break;
                }else if(i==j)
                {
                    printf("%d\n",i);
                    sayac++;
                }
            }
        }
    }
    printf("%d adet ASAL sayi bulundu.",sayac);


}
