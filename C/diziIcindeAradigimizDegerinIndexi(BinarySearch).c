#include <stdio.h>

void main()
{
    //Binary Search Algoritmasý
    //(Dizinin sýralý olduðunu biliyorsak)

    int a[10] = {1,5,7,8,9,18,26,34,52,63},x=0,i=0;

    printf("Aradiginiz sayi : ");
    scanf("%d",&x);

    int bas=0,son=9;
    while(1){
        int orta = (bas + son)/2;

        if(a[orta] == x){
            printf("Aradiginiz sayinin indexi %d",orta);
            break;
        }else{
            if(a[orta] < x)
                bas=orta+1;
            else
                son=orta-1;
        }
    }

}
