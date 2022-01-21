#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int *dizi;
	int n,toplam=0,i;
	float ort;
	
	while(0==0)
	{
	dizi=(int *)malloc(sizeof(int)*n);
	
	printf("n degerini giriniz:\n");
	scanf("%d",&n);
	if(n==0)
	break;
	
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		toplam+=dizi[i];
	}
	ort=toplam/n;
	for(i=0;i<n;i++)
	printf("%d\n",*(dizi+i));
	printf("toplam=%d    ort=%f",toplam,ort);
	printf("\n**********************************\n");
	}
	return 0;
}
