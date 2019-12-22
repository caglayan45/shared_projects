#include <stdio.h>

void BubbleSort(int x[],int uzunluk){
    int t;

    for(int i=0;i<uzunluk-1;i++){
        for(int j=0;j<uzunluk-1;j++){
            if(x[j] > x[j+1]){
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }

    printf("\nBubble sort :          ");
    for(int i=0;i<uzunluk;i++){
        printf("%d\t",x[i]);
    }
    printf("\n");
}

void SelectionSort(int x[],int uzunluk){
    int yer,enK;

    for(int i=0;i<uzunluk-1;i++){
            enK=x[i];
            yer=i;
        for(int j=i+1;j<uzunluk;j++){
            if(x[j] < enK){
                enK=x[j];
                yer=j;
            }else continue;
            x[yer]=x[i];
            x[i]=enK;
        }
    }

    printf("\nSelection sort :       ");
    for(int i=0;i<uzunluk;i++){
        printf("%d\t",x[i]);
    }
    printf("\n");
}

void InsertionSort(int x[],int uzunluk){
    int j;

    for(int i=1;i<uzunluk;i++){
        int ekle=x[i];
        for(j=i-1;j>=0;j--){
            if(ekle < x[j])
                x[j+1]=x[j];
            else break;
        }
        x[j+1]=ekle;
    }

    printf("\nInsertion sort :       ");
    for(int i=0;i<uzunluk;i++){
        printf("%d\t",x[i]);
    }
    printf("\n");
}

void main()
{
    int a[8] = {4,7,12,5,1,76,8,34};

    printf("Dizi :                 ");
    for(int i=0;i<8;i++)
        printf("%d\t",a[i]);
    printf("\n");

    BubbleSort(a,8);
    SelectionSort(a,8);
    InsertionSort(a,8);
}
