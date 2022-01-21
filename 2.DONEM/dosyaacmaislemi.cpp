#include<stdio.h>

int main()
{
	FILE*pDosya;
	pDosya=fopen("orhan","w");
	

	
	if(pDosya==NULL)
	{
	printf("dosya acilmadi...");
    }
    char kelime[10];
    int sayi;
   // fprintf(pDosya,"%s %d %s","busene",2015,"yilindayiz");
    fscanf(pDosya,"%s %d",kelime,&sayi);
    fclose(pDosya);
	return 0;
}
