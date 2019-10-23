#include <stdio.h>

void main()
{
    char karakter;

    printf("Bir karakter giriniz : ");
    scanf("%c",&karakter);

    if(karakter >= 48 && karakter <=57)
        printf("Karakter rakam %c",karakter);

    else if((karakter >= 65 && karakter <=90) || (karakter >= 97 && karakter <=122)){
        switch(karakter){
            case 'a':
                printf("Sesli harf");
                break;
            case 'A':
                printf("Sesli harf");
                break;
            case 'e':
                printf("Sesli harf");
                break;
            case 'E':
                printf("Sesli harf");
                break;
            case 'i':
                printf("Sesli harf");
                break;
            case 'I':
                printf("Sesli harf");
                break;
            case 'o':
                printf("Sesli harf");
                break;
            case 'O':
                printf("Sesli harf");
                break;
            case 'u':
                printf("Sesli harf");
                break;
            case 'U':
                printf("Sesli harf");
                break;
            default :
                printf("Sessiz harf");
                break;
        }
    }else
        printf("Ozel karakter %c",karakter);

}
