#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,dizi[7]={0,0,0,0,0,0,0},a;
	srand(time(NULL));
	for(i=1;i<=100;i++){
		
		a=rand()%6+1;
		dizi[a]++;
	}
	
	for(i=1;i<7;i++){
		printf("%d %d tane gelmistir\n",i,dizi[i]);
	}
	
	
	
	
	
	
	return 0;
}
