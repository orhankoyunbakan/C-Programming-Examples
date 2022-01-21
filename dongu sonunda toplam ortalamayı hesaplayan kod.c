#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int sayi1,sayi2,sayi3;
	int toplam=0,carpim=0;
	float ort,ort_top=0;	
	char bitis;
    do
    {
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	toplam=sayi1+sayi2+sayi3;
	carpim=sayi1*sayi2*sayi3;
	printf("sayilarin toplami=%d\n",toplam);
	printf("sayilarin carpimi=%d\n",carpim);
	
	ort=toplam/3;
	printf("ortalama=%.2f\n",ort);
	
	printf("devam mi tamam mi?");
	scanf("%s",&bitis);
	ort_top+=ort;
    }
	while(bitis=='d');
	if(bitis=='t')
	printf("ortalamalrin toplami=%.2f",ort_top);
	
    
	return 0;
}
