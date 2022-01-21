#include<stdio.h>
#include<stdlib.h>
int main()
{
	int secim,bakiye=1000,cekilen,yatirilan,fatura,suborcu,elektrikborcu,gazborcu;
	printf("ATM islemleri:\n---------------\n1-para cekme\n2-para yatirma\n3-fatura odeme\n4-hesap bilgileri\n\n\n");
	printf("bir islem secin:");
	scanf("%d",&secim);
	if(secim<1 || secim>4)
	printf("gecerli bir islem seciniz.");
	
	switch(secim)
	{
		case 1:
			printf("cekmek istediginiz miktari giriniz:");
			scanf("%d",&cekilen);
			bakiye-=cekilen;
			printf("yeni bakiye:%d",bakiye);
			break;
	    case 2:
	    	printf("yatýrmak istediginiz miktar:");
	    	scanf("%d",&yatirilan);
			bakiye+=yatirilan;
			printf("yeni bakiyeniz:%d",bakiye);
			break;
	    case 3:
	    	printf("1-su faturasi\n");
			printf("2-elektrik faturasi\n");
			printf("3-dogal gaz faturasi\n\n\n");
		    printf("odemek istediginiz faturayi seciniz:");
		    scanf("%d",&fatura);
		    if(fatura==1)
		    {
		    	printf("su faturasý borcunuzu giriniz=");
		    	scanf("%d",&suborcu);
		    	bakiye-=suborcu;
		    	printf("yeni bakiyeniz:%d",bakiye);
			}
		    else if(fatura==2)
		     {
		    	printf("elektrik faturasý borcunuzu giriniz=");
		    	scanf("%d",&elektrikborcu);
		    	bakiye-=elektrikborcu;
		    	printf("yeni bakiyeniz:%d",bakiye);
			 }
		    else if(fatura==3)
		    {
		    	printf("dogal gaz faturasý borcunuzu giriniz=");
		    	scanf("%d",&gazborcu);
		    	bakiye-=gazborcu;
		    	printf("yeni bakiyeniz:%d",bakiye);
			}
		    else
		    {
		    printf("gecerli bir fatura seciniz.");
		    }
		    break;
		    case 4:
		    printf("hesap bilgileriniz:\n");
		    printf("-------------------\n");
		    printf("kullanici:orhan koyunbakan\n");
		    printf("hesap no:1828020555\n");
			printf("bakiye:1000\n");
            break;	    
	}
	
	return 0;
}
