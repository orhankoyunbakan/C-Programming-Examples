#include <stdio.h>
#include <stdlib.h>



int main()
{
	int i,n,baslangic,son,orta,aranan_deger,dizi[100];
	
	printf("\nDizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Dizinin %d.elemanini giriniz:",i);
		scanf("%d",&dizi[i]);
	}
	printf("aranacak degeri giriniz:");
	scanf("%d",&aranan_deger);
	
	baslangic=0;
	son=n-1;
	orta=(baslangic+son)/2;
	
	while(baslangic<=son)
	{
		if(dizi[orta]<aranan_deger)
		baslangic==orta+1;
		
		else if(dizi[orta]==aranan_deger)
		{
			printf("\n Aranan deger< %d > degeri dizinin %d. elemani olarak bulundu.\n",aranan_deger,orta);
			break;
		}
		else
		son=orta-1;
		orta=(baslangic+son)/2;
	}
	if(baslangic>son)
	printf("\nAranan %d degeri bulunamadi..\n ",aranan_deger);
	
	return 0;
}
	

