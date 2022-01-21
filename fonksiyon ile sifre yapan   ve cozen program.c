#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sifrecoz(char dizi[])
{
	int i;
	
	for(i=0;i<strlen(dizi);i++)
	{
		dizi[i]=dizi[i]-1;
	}
	printf("sifre cozulmus hali:");
	for(i=0;i<strlen(dizi);i++)
	{
	printf("%c",dizi[i]);
    }

	
}

void sifrele(char dizi[])
{
	int i;

	
	for(i=0;i<strlen(dizi);i++)
	{
		dizi[i]=dizi[i]+1;
	}
	for(i=0;i<strlen(dizi);i++)
	{
	printf("%c",dizi[i]);
    }
    printf("\n");
    sifrecoz(dizi);
}
int main() 
{
	char dizi[20];
	
	printf("string ifadeyi giriniz:");
	gets(dizi);
	printf("sifrelenmis hali:");
	sifrele(dizi);
	
	return 0;
}
