#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char cumle[100];
	int i,baslangic;
	int sayac=0,max=0;
	
	printf("bir cumle giriniz:");
	gets(cumle);
	
	for(i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]==cumle[i+1])
		{
			sayac++;
			
		}
		
		if(cumle[i]!=cumle[i+1] )
		{
			
			if(max<sayac)
			max=sayac;
			baslangic=i-max;
			sayac=0;
		}
	}
	
	for(i=baslangic;i<(baslangic+max+1);i++)
	{
		printf("%c",cumle[i]);
	}
	return 0;
}
