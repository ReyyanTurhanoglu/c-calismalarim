#include<stdio.h>
int main(){
	char kelime[50];
	int i;
	int uzunluk=0;
	printf("bir kelime giriniz:");
	gets(kelime);
	for(i=0;*(kelime+i)!='\0';i++){
		uzunluk++;
	}
	for(i=0;*(kelime+i)!='\0';i++){
		if(*(kelime+i)!=*(kelime+uzunluk-1-i)){
			printf("kelime palindrom degil");
			return 1;
		}
		else{
			printf("kelime palindromdur");
			return 0;
		}
	
	}
	
	return 0;
}
