#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yaricap=1;
    double pi=3.14,alan=0,cevre=0;
    do{
        printf("Yaricap giriniz : ");
        scanf("%d",&yaricap);
    }while(yaricap<1);

    alan=2*pi*yaricap*yaricap;
    cevre=2*pi*yaricap;

    printf("\n\nAlan = %f\n",alan);
    printf("Cevre = %f\n\n",cevre);

    printf("Pi 3.14 kabul edilmistir.\n\n");


}
