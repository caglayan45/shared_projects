#include <stdio.h>

void main()
{
    //Insertion Sort Algoritmasý

    int a[10] = {3,5,7,20,9,18,26,4,2,1},ekle=0,j=0;

    printf("Dizinin ilk hali : [");
    for(int i=0;i<=9;i++){
        if(i==9)
            printf("%d",a[i]);
        else
            printf("%d,",a[i]);
    }
    printf("]");
    printf("\n");

    for(int i=0;i<10;i++){
        ekle=a[i];
        j=i-1;
        while(j>=0 && a[j] > ekle){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=ekle;
    }

    printf("\nInsertion sort sonrasi : [");
    for(int i=0;i<=9;i++){
        if(i==9)
            printf("%d",a[i]);
        else
            printf("%d,",a[i]);
    }
    printf("]");
    printf("\n");

}
