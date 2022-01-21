#include<stdio.h>
#include<stdlib.h>

int main()
{
	char yazi[100];
	int kontrol;
	printf("bir seyler yazzin:");
	gets(yazi);
	FILE*fp=fopen("yazilan","w");
	fwrite(&yazi,sizeof(yazi),1,fp);
	printf("dosyayi silmek ister misiniz:");
	scanf("%d",&kontrol);
	if(kontrol==1)
	remove("yazilan.txt");
	
	fclose(fp);
}
