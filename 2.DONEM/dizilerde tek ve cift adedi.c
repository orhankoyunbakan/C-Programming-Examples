#include <stdio.h>
#include <stdlib.h>


int main()
{
	int dizi[10],i,tek=0,cift=0;
	printf("dizinin degerlerinin giriniz:\n");
	for(i=0;i<10;i++)
	{
		printf("dizi[%d]:",i);
		scanf("%d",&dizi[i]);
		
		if(dizi[i]%2==0)
		cift++;
		
		else
		tek++;
	}
	
	printf("tek sayisi:%d\n",tek);
	printf("cift sayisi:%d\n",cift);
	
	return 0;
}
