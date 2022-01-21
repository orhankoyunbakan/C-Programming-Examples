#include <stdio.h>
#include <stdlib.h>
float orthesapla(int notu[],int mevcut)
{
	int toplam=0,i;
	float ort;
	
	for(i=0;i<mevcut;i++)
	{
		toplam+=notu[i];
	}
	ort=(float)toplam/(float)mevcut;
    return ort;
}
int main()
{
	int boyut,i;
	int notlar[boyut];
	
	printf("boyutu giriniz:");
	scanf("%d",&boyut);
	
	for(i=0;i<boyut;i++)
	{
		printf("%d. ogrencinin notunu giriniz:",i+1);
		scanf("%d",&notlar[i]);
	}
	printf("ortalama:%.2f",orthesapla(notlar,boyut));
	return 0;
}
