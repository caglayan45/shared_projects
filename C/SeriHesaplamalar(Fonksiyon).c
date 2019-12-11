#include <stdio.h>

int SeriHesapla(int a, int b){//birinci öðretim sorusu
    int toplam = 0;
    for(int i=0;i<b;i++){
        toplam += factorial(a*i);
        printf("%d + ",factorial(a*i));
    }
    return toplam;
}

int factorial(int x){
    if(x == 0)
        return 1;
    else{
        int s=1;
        for(int i=1;i<=x;i++)
            s*=i;
        return s;
    }
}

int SeriHesaplaIO(int a, int b, int c){//ikinci öðretim sorusu
    int toplam = 0,aUssu = 1,bUssu = 1;

    for(int i = 0;i < c; i++){
        if(i == 0){
            toplam += 4;
            printf("%d + ",toplam);
        }else{
            for(int j = 0; j < i;j++){
                aUssu *= a;
                bUssu *= b;
            }
            toplam += (aUssu+1)*(bUssu+1);
            printf("%d + ",(aUssu+1)*(bUssu+1));
            aUssu=1;
            bUssu=1;
        }
    }
    return toplam;
}

void main()
{
    int a1,b1;

    printf("a1 : ");
    scanf("%d",&a1);

    printf("b1 : ");
    scanf("%d",&b1);

    printf("\nToplam sonuc = %d\n\n",SeriHesapla(a1,b1));

    int a,b,c;

    printf("a : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    printf("c : ");
    scanf("%d",&c);

    printf("\nToplam Sonuç = %d\n",SeriHesaplaIO(a,b,c));
}
