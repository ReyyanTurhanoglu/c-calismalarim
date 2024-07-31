/* baðlý listeye kullanýcý istediði sürece sayý ekleyen sonra baðlý listenin elemanlarýný sondan baþa doðru silen
 ve her eleman silimi sonucu baðlý listenin yeni halini ekrana yazdýran c programý kodu            */


#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node *next;
    struct node *prev;
};

struct node *baslangic = NULL;
struct node *temp = NULL;

struct node *yenidugumolustur(int sayi) {
    struct node *yenidugum = (struct node *)malloc(sizeof(struct node));
    yenidugum->x = sayi;
    yenidugum->next = NULL;
    yenidugum->prev = NULL;
    return yenidugum; 
}

void sonaelemanekleme(int sayi) {
    struct node *yenidugum = yenidugumolustur(sayi);
    if (baslangic == NULL) {
        baslangic = yenidugum;
    } 
	else {
        temp = baslangic;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = yenidugum;
        yenidugum->prev = temp;
    }
}

void yazdir() {
    temp = baslangic;
    while (temp != NULL) {
        printf("%d ", temp->x); 
        temp = temp->next;
    }
    printf("NULL\n"); 
}

void terstensil(struct node **baslangic) {
    if (*baslangic == NULL) {
        return;
    }
    temp = *baslangic;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        struct node *onceki = temp->prev;
        printf("silinen veri %d\n", temp->x); 
        free(temp);
        temp = onceki;
    }
    *baslangic = NULL;
}

int main() {
    int sayi;
    while (1) {
        printf("Sayi giriniz, cikmak icin -1 e basiniz: ");
        scanf("%d", &sayi);
        if (sayi == -1) {
            break;
        } else {
            sonaelemanekleme(sayi);
        }
    }
    printf("Listenin ilk hali:\n");
    yazdir();
    printf("elemanlar sondan basa siliniyor\n");
    terstensil(&baslangic);
    printf("Listenin son hali\n");
    yazdir(); 
    
    return 0;
}
