#include <stdio.h>
#include <stdlib.h>

float orthesapla(int notu[],int boyut)
{
	int toplam=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		toplam+=notu[i];
	}
     return (float)toplam/5;
}


int maxnotbul(int notu[],int boyut)
{
	int i,maxnot=0;
	for(i=0;i<5;i++)
	{
		if(maxnot<notu[i])
		maxnot=notu[i];
	}
	
	return maxnot;
}

int minnotbul(int notu[],int boyut)
{
	int minnot=100,i;
	
	for(i=0;i<5;i++)
	{
		if(minnot>notu[i]);
		minnot=notu[i];
	}
	return minnot;
}



int main()
{
	int i,notlar[5];
	
	for(i=0;i<5;i++)
	{
		do{
		printf("%d. ogrencinin notunu giriniz:",i+1);
		scanf("%d",&notlar[i]);
	    }while(notlar[i]<0 || notlar[i]>100);
	}
	printf("ortalama:%.2f\n",orthesapla(notlar,5));
	
	printf("en yuksek not:%d\n",maxnotbul(notlar,5));
	
	printf("en dusuk not:%d\n",minnotbul(notlar,5));
	
	
	
	return 0;
}
