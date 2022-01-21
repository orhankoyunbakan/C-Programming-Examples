#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mevcut,i,notu[mevcut],toplamnot=0,max_not=0,min_not=100;
	float ortalama,ortust=0;
	
	
	do{
	printf("sinif mevcudu giriniz:");
	scanf("%d",&mevcut);
    }while(mevcut<2 || mevcut>100);
    
    for(i=0;i<mevcut;i++)
    {
    	
	do{
	printf("%d. ogrenci notunu giriniz:",i+1);
	scanf("%d",&notu[i]);
    }while(notu[i]<0 || notu[i]>100);
    
	} 

    for(i=0;i<mevcut;i++)
    {
    	toplamnot+=notu[i];
	}
 
    ortalama=((float)toplamnot/(float)mevcut);
    
    
    for(i=0;i<mevcut;i++)
    {
    	if(max_not<notu[i])
    	max_not=notu[i];
	
     	if(min_not>notu[i])
    	min_not=notu[i];
    	
    }
    
   
    
    printf("ortalama:%f\n",ortalama);
    printf("en yuksek not:%d-------en dusuk not:%d",max_not,min_not);
	return 0;
}
