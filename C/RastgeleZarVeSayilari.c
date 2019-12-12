#include <stdio.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int N=0;

    printf("Kac adet zar atilsin : ");
    scanf("%d",&N);

    int zar[7]={0}, dizi[N];

    printf("\n");

    for(int i=0;i<N;i++){
        dizi[i]=rand()%6+1;
        printf("%d ",dizi[i]);
    }

    for(int i=0;i<N;i++)
        zar[dizi[i]]++;

    printf("\n\n");

    for(int i=1;i<7;i++)
        printf("%d = %d\n",i,zar[i]);

}
