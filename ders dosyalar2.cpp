#include<stdio.h>

typedef struct
{
	int hesap_no;
	char isim[30];
	float bakiye;
}sthesap;

int main()
{
	sthesap m;
	int temp;
	FILE*fp=fopen("musteri.txt","w");
	while(m.hesap_no!=0)
	{
	   
		printf("isim giriniz:");
		scanf("%s",&m.isim);
		fwrite(&m.isim,sizeof(int),1,fp);
		printf("bakiye giriniz:");
		scanf("%f",&m.bakiye);
		fwrite(&m.bakiye,sizeof(int),1,fp);
		 printf("hesap no giriniz:");
		 if(hesap)
		fwrite(&m.hesap_no,sizeof(int),1,fp);
	
	}
	
	rewind(fp);
	
	fread(&temp,sizeof(sthesap),1,fp);
	
	
	
	fclose(fp);
	
	
		
	
}
