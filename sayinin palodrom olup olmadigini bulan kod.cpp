#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi,temp,ters=0;
	printf("tersini istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(sayi!=0)
	{
		ters=ters*10;
		ters=ters+(sayi%10);
		sayi=sayi/10;
	}	
	printf("sayinin tersi:%d\n",ters);
	if(temp==ters)
	printf("sayi palodromdur.");
	else
	printf("sayi palodrom degildir.");
	return 0;
}
/*
sayi=125;
ters=0;

ters=0*10;
ters=0+(125%10);
sayi=125/10; 
*/
