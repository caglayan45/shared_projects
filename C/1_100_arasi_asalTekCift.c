//Çaðlayan Sancaktar 190201122
#include <stdio.h>
#include <math.h>

int asalMi(int x){
    if(x == 1)
        return 5;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return 5;
        }
    }
    return -1;
}

void main()
{
    char dizi[5000];
    int kontrol = 5;

    for(int i=1;i<=100;i++){
        if(asalMi(i) == -1)
            kontrol = -1;
        else if(i % 2 == 1)
            kontrol = 1;
        else if(i % 2 == 0)
            kontrol = 0;

        switch(kontrol){
        case 1://tek
            sprintf(dizi,"%s|%3d(Tek )| ...//... |%5d|..>>..|%9.2f|\n",dizi,i,i/2,i/2.0);
            break;
        case 0://cift
            sprintf(dizi,"%s|%3d(Cift)| ...><... |%5d|..>>..|%9.3f|\n",dizi,i,i*2,i*2.0);
            break;
        case -1://asal
            sprintf(dizi,"%s|%3d(Asal)| ...^^... |%5d|..>>..|%9.4f|\n",dizi,i,(i*i),pow(i,2));
            break;
        }
    }
    printf("%s",dizi);
}
