#include<stdio.h>
#include<stdlib.h>

int main()
{

	char *ptr;
	int size;
	
	printf("eleman sayisini belirle");
	scanf("%d",&size);
	
	ptr=(char *)malloc(sizeof(char)*size);
	
	printf("isim giriniz:");
	scanf("%s",ptr);
	
	printf("girilen isim:%s",ptr);
	
	}

