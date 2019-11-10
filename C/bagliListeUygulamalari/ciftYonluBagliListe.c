#include <stdio.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *ilk=NULL,*son=NULL;
/*
Çift yönlü bağlı liste ;
*/
void sonaEkle(int x){//sona ekleme yapar
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    yeni->data=x;
    if(ilk == NULL){
        ilk=yeni;
        son=yeni;
        son->next=son;
        ilk->prev=ilk;
    }else{
        son->next=yeni;
        yeni->prev=son;
        ilk->prev=yeni;
        yeni->next=ilk;
        son=yeni;
    }
}

void basaEkle(int x){//başa ekleme yapar
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    yeni->data=x;
    if(ilk == NULL){
        ilk=yeni;
        son=yeni;
        ilk->prev=son;
        son->next=ilk;
    }else{
        yeni->next=ilk;
        yeni->prev=son;
        ilk->prev=yeni;
        son->next=yeni;
        ilk=yeni;
    }
}

void sil(int x){//gönderilen değeri siler
    struct node *sill;

    if(ilk != NULL){
        if(ilk->data == x){
            son->next=ilk->next;
            ilk->next->prev=ilk->prev;
            sill=ilk;
            ilk=ilk->next;
            free(sill);
        }else if(son->data == x){
            son->prev->next=son->next;
            ilk->prev=son->prev;
            sill=son;
            son=son->prev;
            free(sill);
        }else{
            sill=ilk->next;
            while(sill != ilk){
                if(sill->data == x){
                    sill->prev->next=sill->next;
                    sill->next->prev=sill->prev;
                    free(sill);
                    break;
                }
                sill=sill->next;
            }
        }
    }
}

void listele(){//listeyi görüntüler
    struct node *liste;
    liste=ilk;
    while(liste != NULL){
        printf("%d\t",liste->data);
        liste=liste->next;
        if(liste == ilk)
            break;
    }
    printf("\n");
}

int main()
{
    sonaEkle(7);
    sonaEkle(3);
    sonaEkle(1);
    listele();
    sonaEkle(8);
    sonaEkle(9);
    listele();
    basaEkle(1);
    basaEkle(5);
    basaEkle(11);
    listele();
    sil(8);
    listele();
    sil(9);
    listele();

}





























