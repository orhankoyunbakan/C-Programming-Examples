#include <stdio.h>
#include <stdlib.h>

int carpantoplamibul(int sy)
{
	int i,carpantoplami=0,kalan,bas_top=0,temp;
	
	for(i=2;sy!=1;i++)
	{
		if(sy%i==0)
		{
			if(i<10)
			{
			sy=sy/i;
			carpantoplami+=i;
			i--;
		    }
		    
		    else 
		    {
		    	while(sy!=0)
                {
                kalan=sy%10;
                carpantoplami+=kalan;
                sy/=10;
                }
                sy=1;
			}
		}
		
		
	}
	return carpantoplami;
}


int rakamtoplami(int say)
{
	int rakamtoplam=0,kalan1;
	
	while(say!=0)
	{
		kalan1=say%10;
		rakamtoplam+=kalan1;
		say/=10;
	}
	return rakamtoplam;
}

int main() 
{
	int sayi;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
    printf(":::%d\n",rakamtoplami(sayi));
	printf(":::%d\n",carpantoplamibul(sayi));
	
	
	if(carpantoplamibul(sayi)==rakamtoplami(sayi))
	printf("%d sayisi bir SMITH sayisidir.",sayi);
	
	else
	printf("%d sayisi bir SMITH sayisi degildir.",sayi);
	
	
	return 0;
}
