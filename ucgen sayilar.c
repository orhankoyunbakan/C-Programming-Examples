#include <stdio.h>
#include <stdlib.h>

void ucgensayibul(int sayi)
{
	int toplam=0;
	int i,j,z=0;
	int ucgen_sayilar[sayi];
	
	for(i=1;i<sayi;i++)
	{
		toplam+=i;
			for(j=2;j<sayi;j++)
			{
				if(toplam==j)
				{
	                ucgen_sayilar[z]=j;
					z++;    
				}
			}
	}
    for(i=0;i<z;i++)
	{
		printf("%d\n",ucgen_sayilar[i]);
    }
}
int main() 
{
	int sayiyakadar,i;
	printf("kaca kadar olan ucgen sayýlari istersiniz:");
	scanf("%d",&sayiyakadar);
	
	printf("ucgen sayilar:\n");
	ucgensayibul(sayiyakadar);

	return 0;
}
