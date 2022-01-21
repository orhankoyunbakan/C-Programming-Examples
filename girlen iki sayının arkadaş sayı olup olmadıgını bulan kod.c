#include <stdio.h>
#include <stdlib.h>

void bolenbultopla(int sayi1,int sayi2)
{
	int i,top_sayi1=0,top_sayi2=0;
		
	for(i=1;i<sayi1;i++)
	{
		if(sayi1%i==0)
		{
		top_sayi1+=i;
	    }
	}

    for(i=1;i<sayi2;i++)
	{
		if(sayi2%i==0)
		{
		top_sayi2+=i;
	    }
	}
	if(top_sayi1==sayi2 && top_sayi2==sayi1)
	printf("bu sayilar arkadas sayilardir.");
	
	else 
	printf("bu sayilar arkadas sayi degillerdir.");
	


}


int main() 
{
	int sayi1,sayi2;
	
	
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	bolenbultopla(sayi1,sayi2);

	
	return 0;
}
