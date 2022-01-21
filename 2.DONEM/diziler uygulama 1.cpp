#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int notu[5];
	int i,toplam=0;
	float ort;
	
	for(i=0;i<5;i++)
	{
		printf("%d.ogrencinin notunu giriniz:",i+1);
		scanf("%d",&notu[i]);
		if(notu[i]>100)
		{printf("gecerli bir deger giriniz.\n");}
		toplam+=notu[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d. ogrencinin notu:%d\n",i+1,notu[i]);
	}
	ort=toplam/5;
	printf("ortalama:%.2f\n",ort);
	
	for(i=0;i<5;i++)
	{
		if(notu[i]<ort)           
		printf("%d.ogrenci dersten kaldi.\n",i+1);
	}
	for(i=0;i<5;i++)
	{
		if(notu[i]>=ort)    
	    printf("%d.ogrenci dersten gecti.\n",i+1);
    }
	
	return 0;
}
