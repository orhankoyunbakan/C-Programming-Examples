#include <stdio.h>
#include <stdlib.h>



int maxminbul(int s1,int s2,int s3)
{
	int max,min;
	max=s1;
	if(max<s2)
	max=s2;
	if(max<s3)
	max=s3;
	
	min=s1;
	if(min>s2)
	min=s2;
	if(min>s3)
	min=s3;
	
printf("max:%d  min:%d",max,min);
}



int main()
{
	int sayi,s1,s2,s3;
	
	printf("3 tane sayisi giriniz:");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	maxminbul(s1,s2,s3);
	

	return 0;
}
