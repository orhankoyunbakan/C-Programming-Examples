#include <stdio.h>
#include <stdlib.h>


int main()
{
	int bolum,bolum1=0,bolum2=0,icilen_nu,icilmeyen_nu,koltuk[11]={0,0,0,0,0,0,0,0,0,0},musteri_sayisi=1,i,cikis;
	char istek;
	printf("TURK HAVA YOLLARI\niyi ucuslar\n\n");
	printf("sigara icilen bolum icin 1 e basin\n");
	printf("sigara icilemeyen bolum icin 2 e basin\n");

	do{	
	
	
	do{

	printf("\n\nhangi bolumu istersiniz:");
	scanf("%d",&bolum);
	}while(bolum!=1 && bolum!=2);
     
    if(bolum==1 && bolum1==5)
	{
	printf("---->>>bolum 1 dolu bolum 2 i istermisiniz(e-h):<<<----\n");
	scanf("%s",&istek);
	if(istek=='e')
	bolum=2;
	
	else
	{
	printf("diger sefer saat 3 te.\n");
	continue;
    }
    }
    
    if(bolum==2 && bolum2==5)
	{
	printf("---->>>bolum 2 dolu bolum 1 i istermisiniz:<<<----");
	scanf("%s",&istek);
	if(istek=='e')
	bolum=1;
	else 
	{
	printf("diger sefer saat 3 te.\n");
	continue;
    }
    }
	
    
    
	if(bolum==1)
	{
	bolum1++;
	do{
		
	do{
	printf("koltuk rezervasyonu yapiniz(1-5):");
	scanf("%d",&icilen_nu);
	}while(icilen_nu<1 || icilen_nu>5);
	
	if(koltuk[icilen_nu]==1)
	{
		printf("\n---->>>bu koltuk dolu baska koltuk seciniz.<<<----\n\n");
		icilen_nu=-1;
		
		printf("<<<koltuklar>>>\n");
		for(i=1;i<=5;i++)
		{
			printf("%d numarali koltuk:%d\n",i,koltuk[i]);
		}
	
	}
	
	
	}while(icilen_nu<1 || icilen_nu>5);
	
	koltuk[icilen_nu]=1;
	printf("%d numarali bolumu ve %d numarali koltugu rezerve ettiniz.\n",bolum,icilen_nu);
	
    }
	
	if(bolum==2)
	{
	bolum2++;
	do{
	
	do{
	printf("koltuk rezervasyonu yapiniz(6-10:)");
	scanf("%d",&icilmeyen_nu);
	}while(icilmeyen_nu<6 || icilmeyen_nu>10);
	
	if(koltuk[icilmeyen_nu]==1)
	{
	printf("\n---->>>bu koltuk dolu baska koltuk seciniz.<<<----\n\n");
	icilmeyen_nu=-1;
		printf("<<<koltuklar>>>\n");
		for(i=6;i<=10;i++)
		{
			printf("%d numarali koltuk:%d\n",i,koltuk[i]);
		}
	}
	
	
	}while(icilmeyen_nu<6 || icilmeyen_nu>10);
	
	koltuk[icilmeyen_nu]=1;
	printf("%d numarali bolumu ve %d numarali koltugu rezerve ettiniz.\n\n",bolum,icilmeyen_nu);
    }
    musteri_sayisi+=1;
    	
    printf("\ncikmak icin 0 devam etmek icin herhangi bir rakam giriniz--->");
	scanf("%d",&cikis);
	if(cikis==0)
	musteri_sayisi=0;
    }while(musteri_sayisi!=11 && musteri_sayisi!=0);


   for(i=1;i<=10;i++)
    {
    printf("%d numarali koltuk:%d\n",i,koltuk[i]);
    }

return 0;
}
