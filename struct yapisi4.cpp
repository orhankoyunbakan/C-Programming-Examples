#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ogrenci
{
	int no;
	char adsoyad[50];
	int cinsiyet;
	int fakulte_bolum;
	float genel_ortalama;
};


void ogrencibilgisiyazdir(struct ogrenci ogr)
{
	printf("no:%d\nad-soyad:%s\n",ogr.no,ogr.adsoyad);
}

int main()
{
	struct ogrenci ogrenci_test;
	
	ogrenci_test.no=1000;
	strcpy(ogrenci_test.adsoyad,"test");
	ogrencibilgisiyazdir(ogrenci_test);
	return 0;
}
