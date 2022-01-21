#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int no;
	char adsoyad[50];
	int cinsiyet;
}ogrenci;

ogrenci bilgi_oku()
{
	ogrenci o1;
	printf("ogrencinin adi soyadi:");
	gets(o1.adsoyad);
	printf("ogrencinin nosu:");
	scanf("%d",&o1.no);
	printf("ogrencinin cinsiyeti:");
	scanf("%d",&o1.cinsiyet);
	return o1;
	
}
void bilgi_yaz(ogrenci o)
{
	printf("ogrencinin adi soyadi:%s\nogrencinin nosu:%d\nogrencinin cinsiyeti:%d",o.adsoyad,o.no,o.cinsiyet);
}

int main()
{
	ogrenci o1=bilgi_oku();
	
	bilgi_yaz(o1);
	return 0;
}

