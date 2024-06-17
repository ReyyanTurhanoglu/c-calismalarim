#include<stdio.h>
#include<stdlib.h>
int main(){
	int*ptr;
	int sayi;
	int adet=0;
	int alan=1;
	int i;
	ptr=(int*)malloc(alan*sizeof(int));
	printf("negatif sayi girene kadar sayi giriniz:\n");
	while(sayi>0){
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0){
			break;
		}
		if(sayi%3==0&&sayi%5==0){
				*(ptr+adet)=sayi;
				adet++;
				alan++;
			ptr=(int*)realloc(ptr,(alan)*sizeof(int));
		
		}
		
	}
	for(i=0;i<adet;i++){
		printf("%d ",*(ptr+i));
	}
	
	free(ptr);
	return 0;
}
