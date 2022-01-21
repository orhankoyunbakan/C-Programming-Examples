#include <stdio.h>
#include <stdlib.h>

int kup(int sayi)
{
	return sayi*sayi*sayi;
}
//////////////////////////////
int kareler_toplami(int sayi)
{
	int i,toplam=0;
	for(i=0;i<=sayi;i++)
	{
		toplam+=i*i;
	}
    return toplam;
}
///////////////////////////////
int main() 
{
	int n;
	
	printf("n sayisini giriniz:");
	scanf("%d",&n);
	
	printf("%d sayisinin kupu:%d\n",n,kup(n));
	
	printf("%d ye kadar olan sayilarin kareleri toplami:%d\n",n,kareler_toplami(n));
	
	return 0;
}
