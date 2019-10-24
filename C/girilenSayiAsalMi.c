#include <stdio.h>

int main()
{
    int i,j;
    int a=0,sayac=0;
    printf("sayi : ");
    scanf("%d",&a);

    for(i=2;i<a;i++){
        if((i*i) <= a ){
            if(a%i==0){
                sayac++;
                break;
            }
        }
    }
    if(sayac==0)
        printf("sayi asal");
    else
        printf("sayi asal degil");


    return 0;
}
