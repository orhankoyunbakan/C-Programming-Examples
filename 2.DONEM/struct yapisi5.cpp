#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int no;
	char adsoyad[50];
	char cinsiyet[50];
	int yas;
	float genel_ortalama;
}ogrenci;

int main()
{
	ogrenci ogr;
	printf("lutfen bilgilerinizi giriniz>>>>>>\n");
	printf("ogrenci numarasini giriniz:");
	scanf("%d",&ogr.no);
	printf("ogrencinin adini ve soyadini giriniz:");
	scanf("%s",ogr.adsoyad);
	printf("ogrencinin cinsiyetini giriniz:");
	scanf("%s",ogr.cinsiyet);
	printf("ogrencinin yasini giriniz:");
	scanf("%d",&ogr.yas);
	printf("ogrencinin genel ortalamasini giriniz:");
	scanf("%f",&ogr.genel_ortalama);
	
	
	printf("ogrencinin bilgileri>>>>>\n");
	printf("ogrenci no:%d\n",ogr.no);
	printf("ogrenci ad-soyad:%s\n",ogr.adsoyad);
	printf("ogrenci cinsiyeti:%s\n",ogr.cinsiyet);
	printf("ogrenci yasi:%d\n",ogr.yas);
	printf("ogrenci genel ortalama:%f",ogr.genel_ortalama);
	
return 0;
}
