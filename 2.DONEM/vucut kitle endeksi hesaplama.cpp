#include<stdio.h>
#include<stdlib.h>
int main()
{
	float boy,kilo,vucud_endeksi;
	printf("boyunuzu giriniz(m cinsinden):");
	scanf("%f",&boy);
	printf("kilonuzu giriniz(kg cinsinden):");
	scanf("%f",&kilo);
	vucud_endeksi=kilo/(boy*boy);
	printf("\nvucut kitle endeksiniz:%f",vucud_endeksi);
	if(vucud_endeksi>=25 && vucud_endeksi<30)
	{
	printf("\nfazla kilolusunuz,rejim yapýn!!");
    }
	else if(vucud_endeksi>=30 && vucud_endeksi<40)
	{
	printf("\n(obez)ismansýnýz,rejim yapýn!!");
    }
	else if(vucud_endeksi>=40)
	{
	printf("\n(morbid obez)asiri kilolusunuz,bir doktora basvurunuz!!");
    }
	else
	{
	printf("\nkilonuz idealdir.");
    }
	return 0;	
}

