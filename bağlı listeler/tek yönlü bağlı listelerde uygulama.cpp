/* kullanýcýnýn girdiði deðer (ilk girilen deðer hariç) baðlý listenin sonunda bulunan sayýdan büyükse yeni deðeri sona ,
küçükse yeni eklenen deðeri baðlý listenin baþýna ekleyen c programý kodu               */

#include<stdio.h>
#include<stdlib.h>
struct node{
	int x;
	struct node*next;
};
struct node*baslangic=NULL;
struct node*temp=NULL;
struct node*yenidugumolustur(int sayi){
	struct node*yenidugum=(struct node*)malloc(sizeof(struct node));
	yenidugum->x=sayi;
	yenidugum->next=NULL;

}
void basaelemanekleme(int sayi){
	struct node*yenidugum=yenidugumolustur(sayi);
	if(baslangic==NULL){
		baslangic=yenidugum;
		
	}
	else{
		yenidugum->next=baslangic;
		baslangic=yenidugum;
	}
}
void sonaelemanekleme(int sayi){
	struct node*yenidugum=yenidugumolustur(sayi);
	if(baslangic==NULL){
		baslangic=yenidugum;
	}
	else{
		temp=baslangic;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=yenidugum;
	}
}
void sirala()
{
	int sayi;
	printf("pozitif sayi giriniz cikmak icin negatif bir sayi giriniz:");
	while(scanf("%d",&sayi)&&sayi>=0)
	{
		if(baslangic==NULL){
		basaelemanekleme(sayi);
		}
		else
		{
			temp=baslangic;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			if(sayi>temp->x){
				sonaelemanekleme(sayi);
			}
			else{
				basaelemanekleme(sayi);
			}
		}
		printf("pozitif tam sayi giriniz cikmak icin negatif bir sayi giriniz:");
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
	sirala();
	printf("bagli liste:\n");
	yazdir();
	
	return 0;
}
