#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,sayi,s1,s2,eleman,toplami=2;
	
	printf("fibonaccinin ilk kac elemani:");
	scanf("%d",&eleman);
	
	s1=1;
	s2=1;
	printf("1\t1\t");	
	for(i=0;i<eleman-2;i++)
	{
	sayi=s1+s2;
	printf("%d",sayi);
	s1=s2;
	s2=sayi;
	toplami+=sayi;
    }
printf("\n toplami:%d",toplami);

	return 0;
}
