#include <stdio.h>
#include <stdlib.h>

void main()
{
    int yenenGol=0,atilanGol=0,puan=0,sayac=0;
    do{
        printf("Yenen gol sayisi = ");
        scanf("%d",&yenenGol);
        printf("Atilan gol sayisi = ");
        scanf("%d",&atilanGol);

        if(yenenGol<atilanGol)
            puan=puan+3;
        else if(yenenGol>atilanGol)
            puan=puan;
        else
            puan++;

        printf("Devam etmek istiyor musunuz?[Evet:1] : ");
        scanf("%d",&sayac);
    }while(sayac==1);

    printf("Takimin Puani : %d",puan);

}
