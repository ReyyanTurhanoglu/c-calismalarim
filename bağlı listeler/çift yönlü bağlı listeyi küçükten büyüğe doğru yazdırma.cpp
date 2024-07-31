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
	struct node*dugum=(struct node*)malloc(sizeof(struct node));
	dugum->x=sayi;
	dugum->next=NULL;
	dugum->prev=NULL;

}

void sirala(int sayi){
	struct node*a=yenidugumolustur(sayi);
	if(baslangic==NULL){
		baslangic=a;
		return;
	}
	
	
	temp=baslangic;
	while(temp!=NULL&&temp->x<sayi){
		temp=temp->next;
	}
	
	if(temp==NULL){
		struct node*q=baslangic;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=a;
		a->prev=q;
	}
	else{
	
	 if(temp->prev!=NULL){
		struct node*onceki=temp;
		struct node*sonraki=temp->prev;
		a->next=onceki;
		onceki->prev=a;
		a->prev=sonraki;
		sonraki->next=a;
	}
	else{
		a->next=temp;
		temp->prev=a;
		a->prev=NULL;
		baslangic=a;
	}
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
	int sayi;
	while(1==1){
		printf("sayi giriniz: cikmak icin -1 e basiniz:");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
	
		sirala(sayi);
		
	}

	yazdir();
	
	
	return 0;
}
