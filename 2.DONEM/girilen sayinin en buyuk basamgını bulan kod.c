#include<stdio.h>
#include<stdlib.h>
int main()
{
	int kalan,sayi,max;

    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    while(sayi!=0)
    {
    	kalan=sayi%10;
    	if(max<kalan)
    	max=kalan;
    	sayi=sayi/10;
	}
    printf("en buyuk sayi:%d\n",max);
    max=0;
    

    
return 0;
}
