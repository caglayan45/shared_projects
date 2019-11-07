#include <stdio.h>

void main()
{
    int toplam=0;

    for(int i=100;i<1000;i++){
        toplam=0;
        for(int j=1;j<i;j++){
            if(i%j==0)
                toplam+=j;
        }
        if(toplam == i)
            printf("%d\n",i);
    }
}
