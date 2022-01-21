#include <stdio.h>
#include <stdlib.h>

int main()
{
	float vize_notu[20],final_notu[20];
	int i,ort_kucuk=0,ort_buyuk=0;
	float sinav_ort[20],sinav_top=0,genel_ort,max_ort=0;
	
	
	printf("--------------------------------------------------------------\n\n");
	for(i=0;i<20;i++)
	{
	printf("%d. Ogrencinin vize notunu giriniz:",i+1);
	scanf("%f",&vize_notu[i]);
    }
    printf("\n\n-----------------------------------------------\n\n");
    
	for(i=0;i<20;i++)
	{
	
	printf("%d. Ogrencinin final notunu giriniz:",i+1);
	scanf("%f",&final_notu[i]);
    }
    
    //ortalamayý hesaplayan kýsým:
    for(i=0;i<20;i++)
    {
    sinav_ort[i]=(vize_notu[i]+final_notu[i])/2;
    if(max_ort<sinav_ort[i])
    max_ort=sinav_ort[i];
    }
    //genel ortalamayý hesaplayan kýsým:
    for(i=0;i<20;i++)
	{
    sinav_top+=vize_notu[i]+final_notu[i];
    genel_ort=sinav_top/40;
    }
    
    for(i=0;i<20;i++)
    {
    if(sinav_ort[i]<genel_ort)
    ort_kucuk++;
	
	 if(final_notu[i]>genel_ort)
    ort_buyuk++;
	}
    printf("\n-----------------------------------------------------------------------------\n");
    printf(">>>Ortalamasi genel ortalamadan kucuk olan ogrenci sayisi:%d\n",ort_kucuk);
    printf(">>>Final notu genel ortalamadan buyuk olan ogrenci sayisi:%d\n",ort_buyuk);
    printf(">>>En buyuk olan ortalama :%.2f\n",max_ort);

	return 0;
}
