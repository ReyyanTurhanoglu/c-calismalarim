#include<stdio.h>
int main()
{
	int ciftsayi;
	int toplam;
	printf("bir cift sayi giriniz:");
	scanf("%d",&ciftsayi);
	toplam=ciftsayi/2*(ciftsayi/2+1);
	printf("0 dan bu cift sayiya kadar olan cift sayilarin toplami %d dir.",toplam);
	

	
	return 0;
}
