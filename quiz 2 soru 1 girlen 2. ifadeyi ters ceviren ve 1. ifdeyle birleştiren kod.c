#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void terscevirekle(char cumle1[],char cumle2[])
{
	int i;
	
	for(i=strlen(cumle2)-1;i>=0;i--)
	{
		printf("%c",cumle2[i]);
	}
	
	
	for(i=0;i<=strlen(cumle1)-1;i++)
	{
		printf("%c",cumle1[i]);
	}
		
}


int main()
{
	char metin1[50],metin2[50];
	
	printf("birinci string ifadeyi giriniz:");
	gets(metin1);
	
	printf("ikinci string ifadeyi giriniz:");
	gets(metin2);
	
	printf("duzenlen cumle:");
	terscevirekle(metin1,metin2);

	return 0;
}









