#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	FILE*pDosya;
	pDosya=fopen("sayilar.txt","r");
	if(pDosya==NULL)
		printf("sayilar.txt dosyasi aclmadi.!\n");
	
	else
	printf("dosya acýldý");
	
	fprintf(pDosya,"%s","busene2015yilindayiz");
	fclose(pDosya);
	
	
	
	

	return 0;
}
