#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char metin[100];
	int i,sayac=0;
	
	printf("bir metin giriniz:");
	gets(metin);
	
	for(i=strlen(metin)-1;i>=0;i--)
	{
		if(metin[i]!=' ');
		printf("%c",metin[i]);	
	}
	printf("\n\n");
	
	for(i=strlen(metin)-1;i>=0;i--)
	{
		if(metin[i]!=' '){
		printf("%c",metin[i]);
		sayac++;}
	    if(sayac==3){
	    printf(",");
	    sayac=0;}

	}

 

	
	return 0;
}
