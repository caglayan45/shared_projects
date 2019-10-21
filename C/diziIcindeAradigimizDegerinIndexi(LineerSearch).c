#include <stdio.h>

void main()
{
	//Lineer Search Algoritması
    int a[10] = {1,5,23,3,7,9,8,56,34,2},x=0,i=0;

    printf("Aradiginiz sayi : ");
    scanf("%d",&x);

    while(i<10 && a[i]!=x){
       i++;
    }

    if(i<10)
        printf("%d",i);
    else
        printf("yok");
}
