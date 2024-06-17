#include<stdio.h>
int main(){
	int sayilar[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&*(sayilar+i));
		}
			int enkucuk=0;
			int enbuyuk=0;
			
		for(i=0;i<10;i++){
		
				if(*(sayilar+i)>*(sayilar+enbuyuk)){
					enbuyuk=i;
				}
				else if(*(sayilar+i)<*(sayilar+enkucuk)){
					enkucuk=i;
				}
				
			}
			
			
	printf("en buyuk sayi %d dir\n",*(sayilar+enbuyuk));
	printf("en kucuk sayi %d dir",*(sayilar+enkucuk));
	
	return 0;
}
