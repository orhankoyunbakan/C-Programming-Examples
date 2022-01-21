#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct
{
	char ayin_kaci[10];
	char saat[10];
	char gun[10];
	char ay[10];
	char yil[10];
	int hesap_no1;
	int hesap_no2;
	char s1[30];
	char s2[30];
	char s3[30];
	float para;
}hesap_ozeti;

int main()
{
	hesap_ozeti ozet[5];
	int j,i,okuma3=0;
    printf("dekont dosyasi->\n");
    FILE*fp=fopen("dekont.txt","r");
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%s %s %s %s %s %s %d %s %d %s %f",&ozet[i].gun,&ozet[i].ay,&ozet[i].ayin_kaci,&ozet[i].saat,&ozet[i].yil,&ozet[i].s1,&ozet[i].hesap_no1,&ozet[i].s2,&ozet[i].hesap_no2,&ozet[i].s3,&ozet[i].para);
		okuma3++;
		if(feof(fp))
		break;
	}
    fclose(fp);
    
    for(i=0;i<okuma3;i++)
    {
    printf("%s %s %s %s %s\n%s %d\n%s %d\n%s %.2f\n\n",ozet[i].gun,ozet[i].ay,ozet[i].ayin_kaci,ozet[i].saat,ozet[i].yil,ozet[i].s1,ozet[i].hesap_no1,ozet[i].s2,ozet[i].hesap_no2,ozet[i].s3,ozet[i].para);
		
	}
    
	
}
            
