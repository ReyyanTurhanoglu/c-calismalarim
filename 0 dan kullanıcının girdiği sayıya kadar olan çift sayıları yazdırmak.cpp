#include<stdio.h>

int main(){
	int sayi,i=0;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	do{
	if(i%2==0){
		printf("%d\n",i);
		
	}
	i++;
	}
	while(sayi>=i);
	
	
	
	
	
	
	
	
	
	return 0;
}
