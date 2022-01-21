#include<stdio.h>
#include<stdlib.h>

int saat_topla(int s1,int s2)
{	
	return s1+s2;
}
/////////////////////////////////
int dakika_topla(int d1,int d2)
{
	int toplam,saat=0;
	
	toplam=d1+d2;
	if(toplam>60)
	{
		saat+=toplam/60;
		toplam-=saat*60;
	}
	
	
	return toplam;
}
////////////////////////////////
int fazlasaat(int dk1,int dk2)
{
	int fazlasaat=0,top;
	top=dk1+dk2;
	
	if(top>60)
	{
		fazlasaat+=top/60;
	}
	return fazlasaat;
}
///////////////////////////////////////
int main()
{
	int saat1,dakika1,saat2,dakika2;
	
	printf("1.zaman dilimi>>\nsaat:");
	scanf("%d",&saat1);
	printf("\ndakika:");
	scanf("%d",&dakika1);
	
	printf("\n");
	printf("2.zaman dilimi>>\nsaat:");
	scanf("%d",&saat2);
	printf("\ndakika:");
	scanf("%d",&dakika2);
	
	printf("toplam zaman>>>%d saat,%d dakika",saat_topla(saat1,saat2)+fazlasaat(dakika1,dakika2),dakika_topla(dakika1,dakika2));
	

return 0;
}
