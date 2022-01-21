#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char plaka[10];
	char renk[10];
	int model;
	
}arac_ozellik;

typedef struct
{
	arac_ozellik arac;
	char giris_saati[20];
}arac;

typedef struct 
{
	arac araba[1000];
	int arac_sayisi;
}otopark;

otopark star_otopark={0};

void arac_ekle()
{
	arac arc;
	printf("\n arac bilgilerini giriniz:::::\n");
	
	printf("plaka:");
	gets(arc.arac.plaka);
	
	printf("model:");
	scanf("%d",arc.arac.model);
	
	printf("renk:");
	gets(arc.arac.renk);
	
	printf("aracýn giris saati:");
	gets(arc.giris_saati);
	
	star_otopark.araba[star_otopark.arac_sayisi]=arc;
	star_otopark.arac_sayisi++;
	
}

void arac_listele()
{
	int i;
	
	printf("\n>>>>> otoparktaki araclar listesi <<<<<\n");
	
	for(i=0;i<star_otopark.arac_sayisi;i++)
	{
		printf("%d. arac >>>plaka:%s   >>>renk:%s   >>>model:%d   >>>giris saati:%s\n",i,star_otopark[i].araba.arac.plaka,star_otopark[i].araba.arac.renk,star_otopark[i].araba.arac.model,star_otopark.araba.giris_saati);
	}
}

int main()
{
	arac_ekle();
	arac_listele();
	return 0;
	
	
	
}
