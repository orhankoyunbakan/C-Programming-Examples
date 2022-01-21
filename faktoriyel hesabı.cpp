#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi,i,fakt=1,toplam=0;
	printf("faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	
	for(i=sayi;i>0;i--)
	{
		printf("%d",i);
	toplam=toplam+i;
	fakt=fakt*i;
    }
    printf("!=%d\n",fakt);
    printf("toplamlari=%d",toplam);
	
	
	return 0;
} 


