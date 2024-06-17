#include<stdio.h>
#include<stdlib.h>
int main(){
	int dizi[6];
	int*ptr;
	int i;
	int*ciftsayilar;
	int bellek=1;
	int alan=1;
	int adet1=0;
	int temp;
	ciftsayilar=(int*)malloc(alan*sizeof(int));
	for(i=0;i<6;i++){
		printf("eleman giriniz:");
		scanf("%d",&*(dizi+i));
	}
	ptr=dizi;
	for(i=0;i<6;i++){
		if(*(dizi+i)%2==0){
			
			*(ciftsayilar+adet1)=*(ptr+i);
			alan++;
			adet1++;
			ciftsayilar=(int*)realloc(ciftsayilar,alan*sizeof(int));
		}
	}

	for(i=0;i<adet1;i++){
		printf("%d\n",*(ciftsayilar+i));
	}
		free(ciftsayilar);
		free(ptr);
	return 0;

}
