#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,taban,us,sonuc=1;
	
	printf("taban degerini giriniz:");
	scanf("%d",&taban);
	
	printf("us degerini giriniz:");
	scanf("%d",&us);
	
	for(i=0;i<us;i++)
	{
		sonuc*=taban;
	}
	printf("islem sonucu:%d",sonuc);
	return 0;
}
