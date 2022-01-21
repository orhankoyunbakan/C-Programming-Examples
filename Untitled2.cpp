#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct
{
	time_t tarih;
	int hesap_no;
	char c1[30];
	float bakiye;
	char c2[30];
}dekont;
int main()
{
	int i;
	dekont d[10];
	
	FILE*fp=fopen("dekont.txt","r");
	if(fp==NULL)
	printf("dosya bulunamadi.");
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%s %d %s %f %s\n",&d[i].tarih,&d[i].hesap_no,&d[i].c1,&d[i].bakiye,&d[i].c2);
		if(feof(fp))
		break;
	}	
	
	for(i=0;i<10;i++)
	{
		printf("%s %d %s %f %s",d[i].tarih,d[i].hesap_no,d[i].c1,d[i].bakiye,d[i].c2);
	}



	
}
