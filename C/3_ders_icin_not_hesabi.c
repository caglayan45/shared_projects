#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ders_1[30],ders_2[30],ders_3[30],basari_notu[2];
    int vize1=0,vize2=0,vize3=0,finl1=0,finl2=0,finl3=0;
    float ort1=0,ort2=0,ort3=0;

    printf("--Bu program 3 ders icin basari notu hesaplamasi amaciyla yazilmistir!--\n\n");
    printf("1. Dersin Adi :");
    scanf("%s",ders_1);

    printf("2. Dersin Adi :");
    scanf("%s",ders_2);

    printf("3. Dersin Adi :");
    scanf("%s",ders_3);
    printf("\n");
    //--
    do{
    printf("%s dersinin vize notunu giriniz : ",ders_1);
    scanf("%d",&vize1);
    }
    while(vize1 < 0 || vize1 > 100);

    do{
    printf("%s dersinin vize notunu giriniz : ",ders_2);
    scanf("%d",&vize2);
    }
    while(vize2 < 0 || vize2 > 100);

    do{
    printf("%s dersinin vize notunu giriniz : ",ders_3);
    scanf("%d",&vize3);
    }
    while(vize3 < 0 || vize3 > 100);
    printf("\n");
    //--
    do{
    printf("%s dersinin Final notunu giriniz : ",ders_1);
    scanf("%d",&finl1);
    }
    while(finl1 < 0 || finl1 > 100);

    do{
    printf("%s dersinin Final notunu giriniz : ",ders_2);
    scanf("%d",&finl2);
    }
    while(finl2 < 0 || finl2 > 100);

    do{
    printf("%s dersinin Final notunu giriniz : ",ders_3);
    scanf("%d",&finl3);
    }
    while(finl3 < 0 || finl3 > 100);
    printf("\n");
    //--
    ort1 = (vize1*0.4) + (finl1*0.6);
    ort2 = (vize2*0.4) + (finl2*0.6);
    ort3 = (vize3*0.4) + (finl3*0.6);
    //--
    if(ort1 <= 100 && ort1 >=80)
    {
        printf("%s dersinin basari notu : AA\n",ders_1);
    }else if(ort1 <= 79 && ort1 >=60){
        printf("%s dersinin basari notu : BB\n",ders_1);
    }else if(ort1 <= 59 && ort1 >=40){
        printf("%s dersinin basari notu : CC\n",ders_1);
    }else if(ort1 <= 39 && ort1 >=20){
        printf("%s dersinin basari notu : DD\n",ders_1);
    }else if(ort1 <= 19 && ort1 >=0){
        printf("%s dersinin basari notu : FF\n",ders_1);
    }else if(ort1 < 0  && ort1 > 100){
        printf("%s dersi icin yanlis deger girdiniz\n",ders_1);
    }

    if(ort2 <= 100 && ort2 >=80)
    {
        printf("%s dersinin basari notu : AA\n",ders_2);
    }else if(ort2 <= 79 && ort2 >=60){
        printf("%s dersinin basari notu : BB\n",ders_2);
    }else if(ort2 <= 59 && ort2 >=40){
        printf("%s dersinin basari notu : CC\n",ders_2);
    }else if(ort2 <= 39 && ort2 >=20){
        printf("%s dersinin basari notu : DD\n",ders_2);
    }else if(ort2 <= 19 && ort2 >=0){
        printf("%s dersinin basari notu : FF\n",ders_2);
    }else if(ort2 < 0  && ort2 > 100){
        printf("%s dersi icin yanlis deger girdiniz\n",ders_2);
    }

    if(ort3 <= 100 && ort3 >=80)
    {
        printf("%s dersinin basari notu : AA\n",ders_3);
    }else if(ort3 <= 79 && ort3 >=60){
        printf("%s dersinin basari notu : BB\n",ders_3);
    }else if(ort3 <= 59 && ort3 >=40){
        printf("%s dersinin basari notu : CC\n",ders_3);
    }else if(ort3 <= 39 && ort3 >=20){
        printf("%s dersinin basari notu : DD\n",ders_3);
    }else if(ort3 <= 19 && ort3 >=0){
        printf("%s dersinin basari notu : FF\n",ders_3);
    }else if(ort3 < 0  && ort3 > 100){
        printf("%s dersi icin yanlis deger girdiniz\n",ders_3);
    }
}
