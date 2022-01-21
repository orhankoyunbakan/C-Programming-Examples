#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int no;
	int quiznot;
	int vizenot;
	int finalnot;
}ogrenci;


int main()
{
	ogrenci ogr1,ogr2;
	ogr1.no=1076;
	ogr1.quiznot=65;
	ogr1.vizenot=75;
	ogr1.finalnot=100;
	ogr2=ogr1;
	
	
	printf("\n1.ogrencinin>>\nno:%d\nquiz notu:%d\nvize notu:%d\nfinal notu:%d\n",ogr1.no,ogr1.quiznot,ogr1.vizenot,ogr1.finalnot);
	printf("\n2.ogrencinin>>\nno:%d\nquiz notu:%d\nvize notu:%d\nfinal notu:%d\n",ogr2.no,ogr2.quiznot,ogr2.vizenot,ogr2.finalnot);
	
	return 0;
}
