#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char cumle[100],harf;
	int i,j,harfsayisi=0,pozisyon[100];
	
	
	printf("bir cumle giriniz:");
	gets(cumle);
	
	printf("lutfen aranacak harfi giriniz:");
	scanf("%c",&harf);
	
	for(i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]==harf)
		{
			harfsayisi++;
			pozisyon[harfsayisi]=i+1;
		}
	}
	if(harfsayisi==0)
		printf("istenen harf bulunamadi.");
    else
	printf("bulunan toplam harf sayisi:%d\n",harfsayisi);
	for(i=1;i<=harfsayisi;i++)
	{
	printf("pozisyonu:%d\n",pozisyon[i]);
    }
	return 0;
}
