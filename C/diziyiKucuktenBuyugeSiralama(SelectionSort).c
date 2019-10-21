#include <stdio.h>

void main()
{
    //Selection Sort Algoritmasý

    int a[10] = {3,5,7,20,9,18,26,4,2,1},enK=0,yer=0,j=0;

    printf("Dizinin ilk hali : [");
    for(int i=0;i<=9;i++){
        if(i==9)
            printf("%d",a[i]);
        else
            printf("%d,",a[i]);
    }
    printf("]");
    printf("\n");

    for(int i=0;i<=8;i++){
        enK=a[i];
        for(j=i+1;j<=9;j++){
            if(a[j] < enK){
                enK=a[j];
                yer=j;
            }
        }
        a[yer]=a[i];
        a[i]=enK;
    }

    printf("\nSelection sort sonrasi : [");
    for(int i=0;i<=9;i++){
        if(i==9)
            printf("%d",a[i]);
        else
            printf("%d,",a[i]);
    }
    printf("]");
    printf("\n");

}
