#include<stdio.h>
int main(){
	int a,b,i,ebob,enkucuk;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&b);
	if(a>b)
	{
		enkucuk=b;
	}
	else{
		enkucuk=a;
		
	}
	for(i=1;i<=enkucuk;i++)
	{
		if(a%i==0&&b%i==0)
		ebob=i;
		
	}
	
	printf("ebob %d",ebob);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
