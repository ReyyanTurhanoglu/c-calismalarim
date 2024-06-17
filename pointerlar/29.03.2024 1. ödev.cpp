#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE*dosya;
	int i;
	int*ptr;
	int sayi;
	int adet=0;
	int alan=1;
	ptr=(int*)malloc(alan*sizeof(int));
	dosya=fopen("sayi.txt","w");
	srand(time(NULL));
	for(i=0;i<100;i++){
		sayi=rand()%101;
		fprintf(dosya,"%d\n",sayi);
		
		if((sayi&16)==0){
			*(ptr+adet)=sayi;
			adet++;
			alan++;
			ptr=(int*)realloc(ptr,(alan)*sizeof(int));
		
		}
	}
	fclose(dosya);
	for(i=0;i<adet;i++){
		printf("%d ",*(ptr+i));
	}

	free(ptr);
	
	return 0;
}
