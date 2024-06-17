#include<stdio.h>
#include<stdlib.h>

// Aritmetik ortalama fonksiyonunun prototipi
float aritmetikortalama(int toplam, int adet);

int main(){
    int *sayilar = NULL; // ��aret�iye dinamik bellek tahsis edilmedi
    int sayi;
    int alan = 0; // Dinamik bellek boyutu s�f�r olarak ba�lamal�d�r
    int adet = 0;
    int toplam = 0;

    printf("Sayilari giriniz (0 girince sonlanacak):\n");
    while(1) {
        printf("Sayi giriniz: ");
        scanf("%d", &sayi);
        if (sayi == 0) {
            break;
        }

        // Bellekten dinamik olarak yer ay�r
        alan++;
        sayilar = (int*)realloc(sayilar, alan * sizeof(int));
        if (sayilar == NULL) {
            printf("Bellek yetersiz, program sonlandirildi.\n");
            return 1;
        }

        // Say�y� diziye ekle
        *(sayilar+adet) = sayi;
        adet++;
        toplam += sayi;
    }

    // Aritmetik ortalama hesapla ve ekrana yazdir
    printf("Aritmetik ortalama: %.2f\n", aritmetikortalama(toplam, adet));

    // Bellekten ayr�lan alan� temizle
    free(sayilar);

    return 0;
}

// Aritmetik ortalama fonksiyonu
float aritmetikortalama(int toplam, int adet) {
    return (float)toplam / adet;
}
