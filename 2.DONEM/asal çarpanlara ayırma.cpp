#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,sayi,asaltoplam=0;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=2;sayi!=1;i++)
	{
		if(sayi%i==0)
		{
			sayi=sayi/i;
			printf("%d  ",i);
			i--;
		}
	}
	
	return 0;
}
