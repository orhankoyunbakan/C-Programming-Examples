#include <stdio.h>
#include <stdlib.h>


int main()
{
	float notlar1[25],notlar2[25],notlar3[25],notlar4[25];
	int i,gecen=0,kalan=0;
	float ortalama[25],maxort=0,minort=100;
	printf("--------------------------------\n1.NOTLAR\n");
	for(i=0;i<25;i++)
	{
	printf("%d. ogrencinin 1.notunu giriniz:",i+1);
	scanf("%f",&notlar1[i]);
    }
    printf("--------------------------------\n2.NOTLAR\n");
    for(i=0;i<25;i++)
    
	{
	printf("%d. ogrencinin 2.notunu giriniz:",i+1);
	scanf("%f",&notlar2[i]);
    }
    printf("--------------------------------\n3.NOTLAR\n");
    for(i=0;i<25;i++)
	{
	printf("%d. ogrencinin 3.notunu giriniz:",i+1);
	scanf("%f",&notlar3[i]);
    }
    printf("--------------------------------\n4.NOTLAR\n");
    for(i=0;i<25;i++)
	{
	printf("%d. ogrencinin 4.notunu giriniz:",i+1);
	scanf("%f",&notlar4[i]);
    }
    printf("\n\n");
    for(i=0;i<25;i++)
	{
	ortalama[i]=(notlar1[i]+notlar2[i]+notlar3[i]+notlar4[i])/4;
    }
    
    for(i=0;i<25;i++)
    {
    	printf("%d. ogerncinin ortalamasi:%.2f",i+1,ortalama[i]);
    	printf("\n");
	}
    
    for(i=0;i<25;i++)
    {
    	if(maxort<ortalama[i])
        maxort=ortalama[i];
        
        else if(minort>ortalama[i])
        minort=ortalama[i];
        
        if(ortalama[i]>=60)
        gecen++;
        
        if(ortalama[i]<60)
        kalan++;
	}
	printf("------------------------------------\n\n");
    printf("en yuksek ortalama:%.2f\n",maxort);
    
    printf("en dusuk ortalama:%.2f\n",minort);
    
    printf("dersten gecen ogerenci sayisi:%d\n",gecen);
    
    printf("dersten kalan ogrenci sayisi:%d\n",kalan);
    
	return 0;
}

