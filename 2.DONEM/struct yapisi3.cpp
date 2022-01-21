#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
	int no;
	char adsoyad[50];
	double maas;
	char departman[50];
	
}personel;


void bilgi_al(personel p)
{
	
	printf("personel adini giriniz:");
	gets(p.adsoyad);
	getchar();
	printf("\n personel departmanini giriniz:");
	gets(p.departman);
	getchar();
	p.maas=2458.58;
}
void bilgi_yaz(personel p)
{
	printf("\npersonelin;\nad soyad:%s\ndepartman:%s\nmaas:%f",p.adsoyad,p.departman,p.maas);
}

int main()
{
	personel p1;
	bilgi_al(p1);
	bilgi_yaz(p1);
	
}






















