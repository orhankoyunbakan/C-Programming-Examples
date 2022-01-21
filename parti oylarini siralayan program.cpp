#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	
    int	oy_sayilari[100];
	int i,j,temp,parti_sayisi;
	printf("parti sayisini giriniz:");
	scanf("%d",&parti_sayisi);
	for(i=0;i<parti_sayisi;i++)
	{
		printf("%d.partinin oy sayisini gir:",i+1);
		scanf("%d",&oy_sayilari[i]);
		
	}
	
	
	for(i=0;i<parti_sayisi-1;i++)
	{
		for(j=0;j<parti_sayisi-1;j++)
		{
			if(oy_sayilari[j]<oy_sayilari[j+1])
			{
				temp=oy_sayilari[j];
				oy_sayilari[j]=oy_sayilari[j+1];
				oy_sayilari[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<parti_sayisi;i++)
	{
		
	printf("%d\t",oy_sayilari[i]);
	
    }
    

	return 0;
}
