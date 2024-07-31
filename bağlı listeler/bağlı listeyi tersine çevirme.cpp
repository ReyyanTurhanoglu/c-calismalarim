#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct node {
    int x;
    struct node*next;
};


struct node*yenidugumolustur(int veri) {
    struct node* yenidugum = (struct node*)malloc(sizeof(struct node));
    yenidugum->x = veri;
    yenidugum->next = NULL;
}

struct node* rastgelelisteolustur(int elemansayisi) {
    struct node* bas = NULL;
    struct node* gecici = NULL;

    for (int i = 0; i < elemansayisi; i++) {
        int rastgeledeger = rand() % 100; 
        struct node* yenidugum = yenidugumolustur(rastgeledeger);

        if (bas == NULL) {
            bas = yenidugum;
        } else {
            gecici->next = yenidugum;
        }
        gecici = yenidugum;
    }

    return bas;
}


struct node* listeyiterscevir(struct node* bas) {
    if (bas == NULL || bas->next == NULL) {
        return bas;
    }

    struct node* kalan = listeyiterscevir(bas->next);
    bas->next->next = bas;
    bas->next = NULL;

    return kalan;
}


void listeyiyazdir(struct node* bas) {
    struct node* gecici = bas;
    while (gecici != NULL) {
        printf("%d -> ", gecici->x);
        gecici = gecici->next;
    }
    printf("NULL\n");
}

int main() {
    srand(time(NULL)); 

    int elemansayisi;
    printf("Kac elemanli bir bagli liste olusturmak istersiniz? ");
    scanf("%d", &elemansayisi);

    struct node* liste = rastgelelisteolustur(elemansayisi);
    printf("Orijinal Liste:\n");
    listeyiyazdir(liste);

    liste = listeyiterscevir(liste);
    printf("Ters Cevrilmis Liste:\n");
    listeyiyazdir(liste);

    return 0;
}
