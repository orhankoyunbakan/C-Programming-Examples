#include<stdio.h>
#include<stdlib.h>

float ortalama_bul(float dizi[],int n)
{
	int i,toplam=0;
	
	for(i=0;i<n;i++)
	{
		toplam+=dizi[i];
	}
	
	return toplam/n;
	
}
int main()
{
	float ortalama;
	float b[5]={10,25,35,48,52};
	
	ortalama=ortalama_bul(b,5);
	printf("ortalam=%.2f",ortalama);

	return 0;	
}
