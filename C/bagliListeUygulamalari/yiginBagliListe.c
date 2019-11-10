#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *ilk=NULL,*son=NULL;
/*
(stack)yýðýn ;
ilk giren = son çýkan
son giren = ilk çýkan
*/
void push(int x){//ekleme yapar
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    yeni->data=x;
    if(ilk == NULL){
        ilk=yeni;
        son=ilk;
        ilk->next=NULL;
    }else{
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }
}

void pop(){//çýkarma yapar
    struct node *sil=son,*once=ilk;

    if(ilk != NULL){
        while(once->next != sil && once->next != NULL)
            once=once->next;
        once->next=NULL;
        son=once;
        if(ilk == sil)
            ilk=NULL;
        free(sil);
    }
}

void listele(){//verileri görüntüler
    struct node *liste=NULL;
    liste=ilk;
    while(liste != NULL){
        printf("%d\t",liste->data);
        liste=liste->next;
    }
    printf("\n");
}

void main()
{
    push(5);
    push(7);
    push(1);
    listele();
    push(3);
    push(2);
    listele();
    pop();
    pop();
    pop();
    pop();
    pop();
    listele();


}






























