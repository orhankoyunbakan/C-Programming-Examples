#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dizi[10],i,puan=0;
	for(i=0;i<10;i++)
	{
		do{
		printf("takimin %d. mac istatistikleri(0/1/2):",i+1);
		scanf("%d",&dizi[i]);
	    }while(dizi[i]!=0 && dizi[i]!=1 && dizi[i]!=2);
	    
		if(dizi[i]==2)
		puan+=3;
		
		if(dizi[i]==0)
		puan+=1;
	}
	printf("takimin puani:%d\n",puan);
	
	if(puan>11)
	printf("takim kumede kaldi.");
	
	if(puan<12)
	printf("takim kume dustu. ");
	return 0;
}
