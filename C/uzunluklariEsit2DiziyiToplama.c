#include <stdio.h>

void main()
{
    int a[8]={5,2,8,1,3,9,0,7};
    int b[8]={1,2,8,1,3,9,4,8};
    int c[9]={0,0,0,0,0,0,0,0,0};
    int islem=0,k=0;

    for(int i=7;i>=0;i--){
        islem=a[i]+b[i];
        if(islem>=10){
            k=islem%10;
            c[i]+=k;
            c[i-1]=islem/10;
        }else
            c[i]+=islem;
    }

    for(int i=0;i<8;i++)
        printf("%d \n",c[i]);
}
