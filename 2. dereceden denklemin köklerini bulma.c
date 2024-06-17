#include<stdio.h>
#include<math.h>

int main(){
	/*ax^2+bx+c 
	*/
	float a,b,c;
	float delta;
	float x1,x2;
	printf("a yi giriniz:");
	scanf("%f",&a);
	printf("b yi giriniz:");
	scanf("%f",&b);
	printf("c yi giriniz:");
	scanf("%f",&c);
	delta=b*b-4*a*c;
	x1=(-b+sqrt(delta))/(2*a) ;
	x2=(-b-sqrt(delta))/(2*a) ;
	printf("denklemin 1.koku %.2f,2. koku %.2f dir.",x1,x2);
	
	
	return 0;
}
