#include <stdio.h>

int main()
{
    char aracTuru;
    int aracYasi,hacim;
    printf("Arac Turunu Giriniz(M,m:Minibus, P,p:Panelvan):");
    scanf("%s",&aracTuru);
    switch(aracTuru){
    case 'M' :  printf("Aracin yasini giriniz:");
                scanf("%d",&aracYasi);
                if (1<=aracYasi && aracYasi<=6){
                    printf("2011 yili MTV tutari=523 TL");
                }else if (7<=aracYasi && aracYasi<=15){
                    printf("2011 yili MTV tutari=346 TL");
                }else if(16<=aracYasi){
                    printf("2011 yili MTV tutari=172 TL");
                }
            break;
    case 'm' :  printf("Aracin yasini giriniz:");
                scanf("%d",&aracYasi);
                if (1<=aracYasi && aracYasi<=6){
                    printf("2011 yili MTV tutari=523 TL");
                }else if (7<=aracYasi && aracYasi<=15){
                    printf("2011 yili MTV tutari=346 TL");
                }else if(16<=aracYasi){
                    printf("2011 yili MTV tutari=172 TL");
                }
            break;
    case 'P' :  printf("Aracin yasini giriniz:");
                scanf("%d",&aracYasi);
                printf("Aracin Silindir Hacmini giriniz:");
                scanf("%d",&hacim);
                 if (1<=aracYasi && aracYasi<=6){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=697 TL");
                        }else
                            printf("2011 yili MTV tutari=1052 TL");
                }
                  if (7<=aracYasi && aracYasi<=15){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=436 TL");
                        }else
                            printf("2011 yili MTV tutari=697 TL");
                }
                    if (16<=aracYasi){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=260 TL");
                        }else
                            printf("2011 yili MTV tutari=436 TL");
                }
            break;
    case 'p' :  printf("Aracin yasini giriniz:");
                scanf("%d",&aracYasi);
                printf("Aracin Silindir Hacmini giriniz:");
                scanf("%d",&hacim);
                 if (1<=aracYasi && aracYasi<=6){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=697 TL");
                        }else
                            printf("2011 yili MTV tutari=1052 TL");
                }
                  if (7<=aracYasi && aracYasi<=15){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=436 TL");
                        }else
                            printf("2011 yili MTV tutari=697 TL");
                }
                    if (16<=aracYasi){
                        if (hacim<=1900){
                            printf("2011 yili MTV tutari=260 TL");
                        }else
                            printf("2011 yili MTV tutari=436 TL");
                }
            break;
    default: printf("Yanlis secim yaptiniz.");
    }
    return 0;
}
