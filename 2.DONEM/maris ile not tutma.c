#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int notlar[4][5],top[1][4];
	float ort[1][4];
	int i,j,toplam=0;
	
	printf("\n\n");
for(i=0;i<4;i++)
{
	for(j=0;j<5;j++)
	{
		
		printf("%d. ogrencinin %d. sinav notunu giriniz:",j+1,i+1);
		scanf("%d",&notlar[i][j]);
	}
	printf("\n\n***********************************\n\n");
}	


	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
		toplam+=notlar[j][i];
	    }  
     	top[1][i]=toplam;
     	toplam=0;
    }
	
	for(i=0;i<4;i++)
	{
		printf("toplam:%d\t",top[1][i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<4;i++)
	{
		ort[1][i]=top[1][i]/4;
	}
	
	for(i=0;i<4;i++)
	{
	printf("ortlama:%.2f\t",ort[1][i]);
	}
	
	
	
	return 0;
}
