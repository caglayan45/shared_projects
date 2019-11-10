#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *ilk=NULL,*son=NULL;
/*
Tek yönlü bağlı liste;
*/
void sonaEkle(int x){//listenin sonuna ekleme
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

void listele(){//listeyi görüntüleme
    struct node *liste=NULL;
    liste=ilk;
    while(liste != NULL){
        printf("%d\t",liste->data);
        liste=liste->next;
    }
}

//----------------------------------------------------
void Sirala()//verileri sıralama(küçükten büyüğe)
{
    struct node *dolas=NULL,*adim=ilk;

    while(adim != son){
        dolas=ilk;
        while(dolas != son){
            if(dolas->data > dolas->next->data){
                int temp=dolas->data;
                dolas->data=dolas->next->data;
                dolas->next->data=temp;
            }
            dolas=dolas->next;
        }
        adim=adim->next;
    }
}
//----------------------------------------------------

void basaEkle(int x){//listenin başına ekleme
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    yeni->data=x;
    if(ilk == NULL){
        ilk=yeni;
        ilk->next=NULL;
		son=ilk;
    }else{
        yeni->next=ilk;
        ilk=yeni;
    }
}

void ara(int x){
    struct node *bul=NULL;
    if(ilk != NULL){
        bul=ilk;
        while(bul->data != NULL){
            if(bul->data == x)
                printf("Aranan kan bulundu.");
            bul=bul->next;
        }
    }
}

void bunuSil(int x){//gönderilen değeri listeden çıkarma
    struct node *sil,*once=NULL;
    int sayac=0;

    if(ilk != NULL){
        sil=ilk;
        if(sil->data != x){
            while(sil->next != NULL){
                if(sil->data == x){
                    once->next=sil->next;
                    free(sil);
                    sayac++;
                    break;
                }
                once=sil;
                sil=sil->next;
            }
        }else{
            ilk=sil->next;
            free(sil);
            sayac++;
        }
        if(sayac == 0 && son->data == x){
            once->next=NULL;
            free(sil);
        }
    }
}
/*
listeye eklediğiniz verileri bu method ile eklerseniz sıralı şekilde eklenir
örn:
liste boşken 7 eklediniz başa eklendi
5 eklediniz önüne ekledi //5	7
9 eklediniz arkasına ekledi//5	7	9
8 eklediniz araya ekledi //5	7	8	9
şeklinde ekleme yapar
*/
void ekle(int x){
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    struct node *dolas,*once;

    yeni->data=x;
    once=ilk;


    if(ilk == NULL){
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }else if(ilk->next == NULL){
        if(yeni->data <= ilk->data){
            yeni->next=ilk;
            son=ilk;
            ilk=yeni;
            son->next=NULL;
        }else{
            ilk->next=yeni;
            son=yeni;
            son->next=NULL;
        }
    }else{
        dolas=ilk->next;
        once=ilk;
        while(1){
            if(once->next != NULL && yeni->data < dolas->data){
                once->next=yeni;
                yeni->next=dolas;
                break;
            }
            once=once->next;
            if(once == son){
                son->next=yeni;
                son=yeni;
                son->next=NULL;
                break;
            }
            dolas=dolas->next;
        }
    }
}

void main()
{
    printf("\n");
    ekle(2);
    ekle(3);
    ekle(5);
    ekle(6);
    listele();
    printf("\n");
    printf("\n");
}





























