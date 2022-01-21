#include<stdio.h>
#include<stdlib.h>
int main()
{
	int notu;
	printf("notunuzu giriniz:");
	scanf("%d",&notu);
	
	if(notu>=0 && notu<40)
	printf("notunuz:bir");
	else if(notu>=40 && notu<55)
	printf("notunuz:iki");
	else if(notu>=55&& notu<70)
	printf("notunuz:uc");
	else if(notu>=70 && notu<85)
	printf("notunuz:dört");
	else if(notu>=85 && notu<=100)
	printf("notunuz:bes");
	else 
	printf("gecerli bir not giriniz.");
	if(notu>=50 && notu<=100)
	printf("\nbu dersten gectiniz.");
	else if(notu<50)
	printf("\nbu dersten kaldiniz.");
 
    
	return 0;
}
