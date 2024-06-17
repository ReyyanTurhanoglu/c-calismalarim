#include<stdio.h>
int fibo(int sayi);
int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	int i;
	for(i=1;i<=sayi;i++){
		printf("%d\n",fibo(i));
	}
	return 0;
}



int fibo(int sayi){
	if(sayi==1||sayi==2)
	{
		return 1;
	}
return fibo(sayi-1)+fibo(sayi-2);
}
