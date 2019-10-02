#include <stdio.h>
#include <stdlib.h>

void main()
{
    int s1=0,s2=0;

    printf("Birinci sayiyi giriniz : ");
    scanf("%d",&s1);
    printf("Ikinci sayiyi giriniz : ");
    scanf("%d",&s2);

    if(s1%2==1 && s2%2==1)
        printf("%d",s1+s2);
    else if(s1%2==1 && s2%2==0)
        printf("%d",s1-s2);
    else if(s1%2==0 && s2%2==1)
        printf("%d",s2-s1);
    else
        printf("%d",s1+s2);
}
