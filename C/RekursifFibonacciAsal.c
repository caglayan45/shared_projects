#include <stdio.h>

//fibb fonksiyonuna fibonachinin ilk iki deðerini(0,1) ve kaç adet yazýlmasýný istediðimizi parametre olarak giriyoruz
int fibb(int s1, int s2, int adet){
    int s = asal(s1,s1/2);

    if(s == 1)
        printf("%d(asal)   ",s1);
    else
        printf("%d   ",s1);
    adet--;
    if(adet == 0)
        return 0;
    else
        return fibb(s2,s1+s2,adet);
}

int asal(int x,int c){
    if(x < 2)
        return 0;
    if(c == 1)
        return 1;
    if(x % c == 0)
        return 0;
    return asal(x,c-1);

}

void main()
{
    fibb(0,1,15);
}
