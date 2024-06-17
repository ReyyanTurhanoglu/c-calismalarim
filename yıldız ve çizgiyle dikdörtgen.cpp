#include<stdio.h>
int main(){

int i,j;
for(i=0;i<8;i++)
{
	for(j=0;j<8;j++)
	{
		if (i%2==0&&j%2!=0||i%2!=0&&j%2==0){
		
		printf("*");}
		else{printf("_");
		}
	}
	
	printf("\n");
}
return 0;
}
