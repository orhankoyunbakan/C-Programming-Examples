#include <stdio.h>
#include <stdlib.h>

int main()
{
	char metin1[50],metin2[50];

	printf("1. metni gir:");
	gets(metin1);
	printf("2. metni gir:");
	gets(metin2);
	if(strcmp(metin1,metin2))
	printf("metimler ayni degil\n");
	else
	printf("metinler ayni\n");

	return 0;
}
