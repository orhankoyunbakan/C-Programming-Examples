#include<stdio.h>
int main()
{
	FILE* dosya=fopen("orhan.txt","r");
	if(dosya!=NULL)
	{
	/*	char ad[10],soyad[15];
		int numara;
		printf("adinizi giriniz:");
		scanf("%s",&ad);
		printf("soyadinizi giriniz:");
		scanf("%s",&soyad);
		printf("numaranizi giriniz:");
		scanf("%d",&numara);
		fprintf(dosya,"adi:%s   soyadi:%s  numarasý:%d",ad,soyad,numara);
		
    fclose(dosya);*/
	char yazi[50];
	int i,j=0;
	
	while(!feof(dosya))
	{
	yazi[i]=getc(dosya);
	printf("%c",yazi[i]);
	if(yazi[i]=='i')
	{
	j++;
	}
	i++;
	
	}
	printf("\n'i 'sayisi:%d",j);
	
	
	}

	
	

}
