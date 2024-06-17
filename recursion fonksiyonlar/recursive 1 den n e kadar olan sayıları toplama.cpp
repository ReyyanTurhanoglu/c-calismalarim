#include<stdio.h>
int topla(int);

int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",topla(sayi));
	return 0;
}

int topla(int deger){
	int toplam;
	if(deger<=0){
		return 0;
	}
	toplam=deger+topla(deger-1);
	return toplam;
}
