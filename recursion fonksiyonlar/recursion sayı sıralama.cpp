#include<stdio.h>
int sayilar(int i);
int main(){
	sayilar(1);
	return 0;
}


 int sayilar(int i){
 	
	if(i<6)
	{
		sayilar(i+1);
		printf("%d\n",i);
	    
	}
}
