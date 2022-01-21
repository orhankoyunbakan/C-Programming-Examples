#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int aranacak_dizi[100];
	int aranan_bilgi,i;
	int bulunan_indis=-1;
	
	for(i=0;i<100;i++)
	{
		aranacak_dizi[i]=i*2;
	}
	
	printf("aranacak bilgiyi giriniz:");
	scanf("%d",&aranan_bilgi);
	
	for(i=0;i<100;i++)
	{
		if(aranan_bilgi==aranacak_dizi[i])
		{
		bulunan_indis=i;
		printf("aranan bilgi olan %d ==>%d. indiste bulundu..\n",aranan_bilgi,i);
		break;
	    }
	}
	if(bulunan_indis==-1)
	{
		printf("aranan bilgi olan %d bulunamadi..",aranan_bilgi);
	}
	
	
	
	return 0;
}
