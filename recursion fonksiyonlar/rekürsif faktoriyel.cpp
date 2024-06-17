#include<stdio.h>
int faktoriyel(int);
int main(){
	int sayi;
	int sonuc;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	sonuc=faktoriyel(sayi);
	printf("sonuc %d dir",sonuc);
	
	return 0;
}
int faktoriyel(int a){
	int deger;
if(a>0)
    {
    	deger=a*faktoriyel(a-1);
	}
	else
	{
		deger=1;
	}
	return deger;
	
	}
