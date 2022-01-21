#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int dokuzhane[15],i,ilktoplam=0,ikincitoplam=0,basamak10,basamak11,toplam=0;
	for(i=0;i<9;i++)
	{
	printf("tc kimliginizin %d hanesini giriniz:",i+1);
	scanf("%d",&dokuzhane[i]);
    }
	
	
	for(i=0;i<9;i+=2)
	{
		ilktoplam+=dokuzhane[i];
	}
	ilktoplam*=7;
	ilktoplam%=10;
	
	for(i=1;i<9;i+=2)
	{
		ikincitoplam+=dokuzhane[i];
	}
	ikincitoplam*=9;
	ikincitoplam%=10;
	
	basamak10=ilktoplam+ikincitoplam;
	basamak10%=10;
	
	for(i=0;i<9;i++)
	{
		toplam+=dokuzhane[i];
	}
	toplam+=basamak10;
	basamak11=toplam%10;
	
	printf("tc kimlik no:");
	for(i=0;i<9;i++)
	{
		printf("%d ",dokuzhane[i]);
	}
	printf("%d %d",basamak10,basamak11);
	
	return 0;
}
