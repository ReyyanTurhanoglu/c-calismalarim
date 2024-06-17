#include<stdio.h>
int main(){
	int sayi1,sayi2,buyuk;
	printf("ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>=sayi2)
	{
		buyuk=sayi1;
			}
			
	else
	{
		buyuk=sayi2;
	}
	while(1){
		if(buyuk%sayi1==0&&buyuk%sayi2==0){
			printf("ekok %d dir",buyuk);
			break;
		}
		
		buyuk++;
		
	}
	
	
	return 0;
}
