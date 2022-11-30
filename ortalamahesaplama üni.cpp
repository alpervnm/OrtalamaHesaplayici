#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int i,sayac,sinav,kat,toplam,sinavsayisi;
	float kattutucu,bincirik,ortalama;
	printf("Kac tane sinaviniz var?: ");
	scanf("%d",&sinavsayisi);
	for(i=0;i<sinavsayisi;i++){
		printf("\n\nSinav notunuzu giriniz: ");
		scanf("%d",&sinav);
		printf("Sinavinizin kat sayi degerini giriniz: ");
		scanf("%d",&kat);
		system("CLS");
		bincirik=bincirik+(kat*sinav);
		kattutucu=kat+kattutucu;
	}
	ortalama=bincirik/kattutucu;
	printf("Ortalamaniz: %f",ortalama);
	getch();
	
} 
