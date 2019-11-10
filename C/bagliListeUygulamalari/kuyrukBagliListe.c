#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *ilk=NULL,*son=NULL;
/*
kuyruk ;
ilk eklenen = ilk çıkan
son eklenen = son çıkan
*/
void ekle(int x){//sıraya ekleme yapar

    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    yeni->data=x;

    if(ilk != NULL){
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }else{
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }
}

void cikar(){//sıradan çıkarır
    struct node *sil;
    if(ilk != NULL){
        sil=ilk;
        ilk=ilk->next;
        free(sil);
    }
}

void listele(){//verileri görüntüler
    struct node *liste=ilk;

    while(liste != NULL){
        printf("%d\t",liste->data);
        liste=liste->next;
    }
    printf("\n");

}

void main(){

    ekle(7);
    ekle(1);
    ekle(5);
    listele();
    cikar();
    listele();
    cikar();
    cikar();
    listele();
    ekle(8);
    listele();

}





























