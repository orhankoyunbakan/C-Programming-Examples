#include <stdio.h>
#include <stdlib.h>
int bolensayisibul(int sayi)
{
	int i,bolensayisi=0;
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		bolensayisi++;
	}
	return bolensayisi;
}

int main() 
{
	int sayi;
	do{
	
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi%bolensayisibul(sayi)==0)
	printf("%d sayisi bir TAU sayisidir.\n",sayi);
    
	else
	printf("%d sayisi bir TAU sayisi degildir.\n",sayi);
	
        }while(sayi!=0);

	return 0;
}
