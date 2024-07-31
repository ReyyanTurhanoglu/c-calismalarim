#include<stdio.h>
#include<stdlib.h>
struct node{
	int x;
	struct node*next;
};
struct node*baslangic;
struct node*temp;
struct node*yenidugumolustur(int x){
struct node*yenidugum=(struct node*)malloc(sizeof(struct node));
yenidugum->x=x;
yenidugum->next=NULL;

}
void sonaelemanekleme(int x){
	struct node*son=yenidugumolustur(x);
	if(baslangic==NULL){
		baslangic=son;
	}
	else{
		temp=baslangic;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=son;
	}
	
}
void elemanara(int ara){
	
	struct node*q=baslangic;
	if(q->x==ara){
		baslangic=q->next;
		free(q);
	}
	struct node*temp=baslangic;
while(temp!=NULL){
	if(temp->next->x==ara){
		struct node*onceki=temp;
		struct node*sonraki=temp->next->next;
		free(temp->next);
		onceki->next=sonraki;
	}
	temp=temp->next;
}	
}
void yazdir(){
	temp=baslangic;
	while(temp!=NULL){
		printf("%d ",temp->x);
		temp=temp->next;
	}
}
int main(){
int sayi,ara;
	printf("sayi giriniz cikmak icin -1 e basiniz");
	while(1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
			}
		else{
			sonaelemanekleme(sayi);
		}
	}
	printf("bagli listenin ilk hali:\n");
	yazdir();
	printf("\nhangi elemani silmek istiyorsunuz:\n");
	scanf("%d",&ara);
	elemanara(ara);
	printf("\nbagli listenin yeni hali:\n");
	yazdir();
	
	return 0;
}
