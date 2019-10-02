#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=0,a=1;
    do{
    printf("Tek ve pozitif bir sayi giriniz = ");
    scanf("%d",&n);
    }while(n<0 || n%2==0);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        if(a!=n){
            for(int k=0;k<a;k++)
                printf(" ");
            a++;
        }
    }
    a=n-2;
    for(int i=1;i<n;i++){
        for(int k=0;k<a;k++)
            printf(" ");
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        a--;
    }

}
