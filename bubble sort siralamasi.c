#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
    int	sayilar[100];
	int i,j,temp,eleman_sayisi;
	printf("eleman sayisini giriniz:");
	scanf("%d",&eleman_sayisi);
	for(i=0;i<eleman_sayisi;i++)
	{
		printf("%d.elemani gir:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	
	for(i=0;i<eleman_sayisi-1;i++)
	{
		for(j=0;j<eleman_sayisi-1;j++)
		{
			if(sayilar[j]<sayilar[j+1])
			{
				temp=sayilar[j];
				sayilar[j]=sayilar[j+1];
				sayilar[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<eleman_sayisi;i++)
	{
		
	printf("%d\t",sayilar[i]);
	
    }
    

	return 0;
}
