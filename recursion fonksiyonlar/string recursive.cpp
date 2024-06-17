#include<stdio.h>

// Fonksiyon prototipi
void ters(int baslangic, int son, char* metin);

int main(){
    int uzunluk = 0;
    char metin[500];
    int i; // i deðiþkenini tanýmla

    printf("Bir metin giriniz:");
    gets(metin);

    // Metnin uzunluðunu hesapla
    for(i = 0; metin[i] != '\0'; i++){
        uzunluk++;
    }

    // Ters çevirme iþlemini gerçekleþtir
    ters(0, uzunluk - 1, metin);

    printf("%s", metin);
    return 0;
}

// Recursive fonksiyon
void ters(int baslangic, int son, char* metin) {
    char temp;

    // Base case: Baþlangýç indeksi son indeksinden büyükse iþlemi sonlandýr
    if (baslangic >= son) {
        return;
    }

    // Karakterleri yer deðiþtir
    temp = metin[baslangic];
    metin[baslangic] = metin[son];
    metin[son] = temp;

    // Recursive çaðrý: Baþlangýç indeksini artýr, son indeksini azaltarak devam et
    ters(baslangic + 1, son - 1, metin);
}
