#include<stdio.h>
int main(){
	char*ptr1;
	char*ptr2;
	char metin[500];
	int temp;
	printf("metin giriniz:");
	gets(metin);
	ptr1=metin;
	ptr2=ptr1;
	while(*ptr2!='\0'){
		ptr2++;
	}
	ptr2--;
	while(ptr1<ptr2){
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;
	}
	printf("metnin cevrilmis hali %s dir",metin);
		return 0;
}
