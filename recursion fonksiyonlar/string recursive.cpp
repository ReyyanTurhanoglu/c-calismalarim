#include<stdio.h>

// Fonksiyon prototipi
void ters(int baslangic, int son, char* metin);

int main(){
    int uzunluk = 0;
    char metin[500];
    int i; // i de�i�kenini tan�mla

    printf("Bir metin giriniz:");
    gets(metin);

    // Metnin uzunlu�unu hesapla
    for(i = 0; metin[i] != '\0'; i++){
        uzunluk++;
    }

    // Ters �evirme i�lemini ger�ekle�tir
    ters(0, uzunluk - 1, metin);

    printf("%s", metin);
    return 0;
}

// Recursive fonksiyon
void ters(int baslangic, int son, char* metin) {
    char temp;

    // Base case: Ba�lang�� indeksi son indeksinden b�y�kse i�lemi sonland�r
    if (baslangic >= son) {
        return;
    }

    // Karakterleri yer de�i�tir
    temp = metin[baslangic];
    metin[baslangic] = metin[son];
    metin[son] = temp;

    // Recursive �a�r�: Ba�lang�� indeksini art�r, son indeksini azaltarak devam et
    ters(baslangic + 1, son - 1, metin);
}
