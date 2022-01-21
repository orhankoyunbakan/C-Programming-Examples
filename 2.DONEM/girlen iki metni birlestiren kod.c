#include <stdio.h>
#include <stdlib.h>



int main()
{
	char metin1[50],metin2[50];
	int i;
	
	printf("1. metni giriniz:");
	gets(metin1);
	
	printf("2. metni giriniz:");
	gets(metin2);
	
	strcat(metin1,metin2);
		
	printf(metin1);
	
	printf("\nmetnin uzunlugu:%d",strlen(metin1));
	


	return 0;
}
