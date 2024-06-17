#include<stdio.h>
void sayiyazdir(int sayi);
int main(){
	int sayi;
	printf("sayi girin:");
	scanf("%d",&sayi);
	sayiyazdir(sayi);
	return 0;
}
void sayiyazdir(int sayi){

	if(sayi<=0){
		return;
	}
	printf("%d",sayi);
	sayiyazdir(sayi-1);
}
