#include<stdio.h>
int main(){
	char metin[100];
	char*ptr;
	char harf;
	printf("bir metin giriniz:");
	gets(metin);
	printf("hangi harf yok edilsin:");
	scanf("%c",&harf);
	for(ptr=metin;*ptr;ptr++){
		if(*ptr==harf){
			*ptr=' ';
		}
	}
	puts(metin);
	
	
	
	
	
	
	return 0;
}
