#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[7]={1,3,5,7,9,11,13};
    int b[5]={6,8,10,15,30};
    int c[12];

    int k=0,l=0,m=0;

    for(int i=0;i<12;i++){
        if(a[l]<b[m]){
            c[k]=a[l];
            if(l<7)
                l++;
        }else{
            c[k]=b[m];
            m++;
        }
        k++;
    }

    for(int i=0;i<12;i++)
        printf("%d\n",c[i]);

}
