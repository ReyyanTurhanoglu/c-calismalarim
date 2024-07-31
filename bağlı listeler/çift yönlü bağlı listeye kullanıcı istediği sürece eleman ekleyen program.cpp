#include<stdio.h>
#include<stdlib.h>
struct node{
	int x;
	struct node*next;
	struct node*prev;
};
struct node*baslangic=NULL;
struct node*temp=NULL;
struct node*yenidugumolustur(int sayi){
	struct node*yenidugum=(struct node*)malloc(sizeof(struct node));
	yenidugum->x=sayi;
	yenidugum->prev=NULL;
	yenidugum->next=NULL;
	if(baslangic==NULL){
		baslangic=yenidugum;
	}
	else{
		temp=baslangic;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=yenidugum;
		yenidugum->prev=temp;
	}}
	void yazdir(){
		temp=baslangic;
		while(temp!=NULL){
			printf("\n%d",temp->x);
			temp=temp->next;
		}
	}
	

int main(){
	int sayi;
	while(1==1){
		printf("\nbagli listeye sayi giriniz: (cikmak icin -1 e basiniz)\n");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		else{
			yenidugumolustur(sayi);
		}
		
	}
	yazdir();
	return 0;
}
