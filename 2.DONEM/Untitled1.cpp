#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int  main()
{
	int adet,dizi[10];
	int i,j,a=0,z=0,sy;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sy);
	printf("asal sayi adeditini giriniz:");
	scanf("%d",&adet);
	
	
	
	for(i=sy;i>1;i--)
	{
		for(j=sy-1;j>1;j--)
		{
			if(i%j==0)
			break;
			
			else
			a++;
			
			if(a==sy-2)
			{
			dizi[z]=sy;
			z++;
		    }
		}
	}

		
	
	

	
	for(i=0;i<adet;i++)
	printf("%d\n",dizi[i]);
	
	
	
	
	
	
return 0;
}
