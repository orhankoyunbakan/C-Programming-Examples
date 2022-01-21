#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct
{
	time_t tarih;
	int hesap_no;
	float para;
}hesap_ozeti;

int main()
{
	hesap_ozeti ozet[5];
	int j=0,i;
    printf("dekont dosyasi->\n");
    FILE*fp4=fopen("dekont.txt","r");
	while(!feof(fp4));
	{
    fscanf(fp4,"%s  %d %f",&ozet[j].tarih,&ozet[j].hesap_no,&ozet[j].para);
    j++;
    
    }fclose(fp4);
    
    for(i=0;i<5;i++)
    {
    printf("%s tarihinde %d hesap noya %.2f kadar para yatirildi\n");
		
	}
    
	
}
            
