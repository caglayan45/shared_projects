#include <stdio.h>

void main()
{
    int sayi,taban,s[8]={0,0,0,0,0,0,0,0},i=7;

    printf("Sayi giriniz : ");
    scanf("%d",&sayi);

    printf("\nTabani giriniz : ");
    scanf("%d",&taban);
    printf("\n");

    while(sayi > 0){
        s[i]=sayi%taban;
        sayi/=taban;
        i--;
    }

    for(int k=i+1;k<8;k++)
        printf("%d",s[k]);
    printf("\n");
}
