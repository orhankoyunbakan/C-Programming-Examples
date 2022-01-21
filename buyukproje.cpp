#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct
{
	char ayin_kaci[10];
	char saat[10];
	char gun[10];
	char ay[10];
	char yil[10];
	int hesap_no1;
	int hesap_no2;
	char s1[30];
	char s2[30];
	char s3[30];
	float para;
}hesap_ozeti;
typedef struct
{
	int musteri_turu;
	char ad_soyad[25];
	char dogum_yeri[25];
	char dogum_tarihi[25];
	int musteri_no;
}musteri;	

typedef struct
{
	char ad_soyad[25];
	int hesap_no;
	float bakiye;
	int musteri_turu;
}hesap;


int main()
{
	musteri m[100];
	hesap h[100];
	hesap_ozeti ozet[100];
	
	char k1[15],k2[15],k3[15];
	int musteri_turu,secilen,acma,secilen_hesap,musteri_no,kendi_hesap,havale_hesap,kapanacak_hesap,ozet_hesap;
	float yatan_para,cekilen_para,havale_para,gelen_para=0,giden_para=0,toplam_para;
	int i=0,j=0,z=0,a=0,okuma1=0,okuma2=0,okuma3=0,b,t,k,c=0,d=0;
	
	time_t tarih;
	tarih=time(NULL);
	
	do{
	system("cls");
	printf("------------------MENU------------------\n----------------------------------------\n");
	printf("1->YENI MUSTERI EKLEME\n");
	printf("2->HESAP ACTIRMA\n");
	printf("3->PARA CEKME\n");
	printf("4->PARA YATIRMA\n");
	printf("5->HESABA HAVALE\n");
	printf("6->BANKA GELIR-GIDER RAPORU\n");
	printf("7-HESAP OZETI\n");
	printf("8->HESAP KAPAMA\n");
	printf("9->CIKIS YAP\n\n");
	printf("----------------------------------------\n");
	printf("LUTFEN BIR ISLEM SECINIZ>>");
	scanf("%d",&secilen);
    
	if(secilen==9) break;
	
	FILE*fp3=fopen("rapor.txt","r");
	if(fp3!=NULL)
	{
	fscanf(fp3,"%s %f %s %f %s %f",&k1,&gelen_para,&k2,&giden_para,&k3,&toplam_para);
    fclose(fp3);
    }
    else 
    c=1;
    
    strcpy(k1,"gelen.para>>");
    strcpy(k2,"giden.para>>");
    strcpy(k3,"toplam.para>>");
	////1.menü///////////////////////////////////////////////////////////////////////////////////////1.MENÜ BÖLÜMÜ
	okuma1=0;
	okuma2=0;
	b=0;
	t=0;
	k=0;
	
	   if(secilen==1){
		printf("YENI MUSTERI EKLEME>>>>>\n");
		do{
		printf("Musteri Turu seciciz(Bireysel->1)(Ticari->2)->");
		scanf("%d",&m[i].musteri_turu);
		}while(m[i].musteri_turu!=1 && m[i].musteri_turu!=2);
	    printf("Ad-Soyad Giriniz:(ad-soyad arasina bosluk birakmadan nokta koanarak yazilmali!!! )");
	    getchar();
	    gets(m[i].ad_soyad);
	    printf("Dogum Yerinizi Giriniz:");
	    gets(m[i].dogum_yeri);
	    printf("Dogum Tarihinizi Giriniz:");
	    gets(m[i].dogum_tarihi);
	    srand(time(NULL));
	    m[i].musteri_no=rand()%1000+100;
	    printf("--------------BILGILERINIZ----------------\n");
	    if(m[i].musteri_turu==1)
		printf("Musteri Turu>>>Bireysel\n");
		if(m[i].musteri_turu==2)
		printf("Musteri Turu>>>Ticari\n");
	    printf(">>Ad-Soyad:%s\n",m[i].ad_soyad);
	    printf(">>Dogum Yerinizi:%s\n",m[i].dogum_yeri);
	    printf(">>Dogum Tarihiniz:%s\n",m[i].dogum_tarihi);
	    printf(">>Musteri numaraniz:%d\n",m[i].musteri_no);
	    printf("----Musteri Eklendi.----\n");
	    
	    //DOSYAYA YAZDIRMA BOLÜMÜ
	    if(m[i].musteri_turu==1){
	    FILE*fp=fopen("BireyselMusteriBilgileri.txt","a");
	    fprintf(fp,"%s\t%20s\t%20s\t%10d\t%5d\n",m[i].ad_soyad,m[i].dogum_yeri,m[i].dogum_tarihi,m[i].musteri_no,m[i].musteri_turu);
	    fclose(fp);}
	    
	    
	    //DOSYAYA YAZDIRMA BOLUMU
	    if(m[i].musteri_turu==2){  
		FILE*fp1=fopen("TicariMusteriBilgileri.txt","a");
	    fprintf(fp1,"%s\t%20s\t%20s\t%10d\t%5d\n",m[i].ad_soyad,m[i].dogum_yeri,m[i].dogum_tarihi,m[i].musteri_no,m[i].musteri_turu);
	    fclose(fp1);}
		 
	    printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	    scanf("%d",&secilen);
		}
		
		
		///////DOSYADAN VERÝ OKUMA BOLUMU//////////////////////////////////////////////////////////////////
		FILE*fp=fopen("BireyselMusteriBilgileri.txt","r");
		if(fp==NULL)
		b=1;
		for(i=0;i<10;i++)
		{
		if(b==0)
		{
        fscanf(fp,"%s  %s  %s  %d  %d\n",&m[i].ad_soyad,&m[i].dogum_yeri,&m[i].dogum_tarihi,&m[i].musteri_no,&m[i].musteri_turu);
        okuma1++;
        }
		    
        if(feof(fp))
        {
        i++;
		break;
        }    
        } 
		fclose(fp);
		       
        FILE*fp1=fopen("TicariMusteriBilgileri.txt","r");
        if(fp1==NULL)
		t=1;
		for(z=i;z<10;z++)
       	{
       	if(t==0)
       	{
        fscanf(fp1,"%s  %s  %s  %d  %d\n",&m[z].ad_soyad,&m[z].dogum_yeri,&m[z].dogum_tarihi,&m[z].musteri_no,&m[z].musteri_turu);
        okuma1++;
        }    
        if(feof(fp1))
        break;
        
        }fclose(fp1);
        
		FILE*fp2=fopen("hesaplar.txt","r");
		if(fp2==NULL)
		k=1;
        for(j=0;j<10;j++)
        {
        if(k==0)
        {
        fscanf(fp2,"%s  %d  %f  %d\n",&h[j].ad_soyad,&h[j].hesap_no,&h[j].bakiye,&h[j].musteri_turu);
        okuma2++;
        }    
        if(feof(fp2))
        break;
        
        }fclose(fp2);
        ////////////////////////////////////////////////////////////////////////////////////////////////////////
		///2.menü//////////////////////////////////////////////////////////////////////////////////2.MENÜ BÖLÜMÜ
	
	if (secilen==2)
	{	
	    printf("HESAP ACTIRMA>>>>>>\n");
	    	printf("Musteri numaranizi giriniz:");
	    	scanf("%d",&musteri_no);
	    	
	    for(j=0;j<okuma1;j++)
        {	
            if(musteri_no==m[j].musteri_no)
            {
			srand(time(NULL));
	        h[j].hesap_no=rand()%1000+100;
	        h[j].bakiye=0;
	        h[j].musteri_turu=m[j].musteri_turu;
	        
			printf(">>%s isimli musteriye ait %d hesap numarali hesap acilmistir.\n",m[j].ad_soyad,h[j].hesap_no);
	    	//DOSYAYA YAZDIRMA BÖLÜMÜ
	    	FILE*fp2=fopen("hesaplar.txt","a");
	    	if(fp2==NULL) printf("Dosya Bulunamadi!!!!");
	    	fprintf(fp2,"%s\t%20d\t%20.2f\t%5d\n",m[j].ad_soyad,h[j].hesap_no,h[j].bakiye,h[j].musteri_turu);
	    	fclose(fp2);
	    	a++;
	    	}
        }
	    if(a==0) printf("giris yapilan musteri numarasi bulunamadi.\n");
	    a=0;
        printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	    scanf("%d",&secilen);
	}
        /////3.meni/////////////////////////////////////////////////////////////3.MENÜ BÖLÜMÜ
        else if(secilen==3)
        {
        printf("\nPARA CEKME>>>>>\n");
        printf(">>Lutfen hesabi giriniz->");
        scanf("%d",&secilen_hesap);
        for(j=0;j<okuma2;j++)
        {
        	if(secilen_hesap==h[j].hesap_no)
        	{
        		printf("NOT::TICARI MUSTERI MAX 1500 TL CEKEBILIR AKSI TAKDIRDE ISLEM GERCEKLESMEZ.\n");
        		printf("NOT::BIREYSEL MUSTERI MAX 750 TL CEKEBILIR AKSI TAKDIRDE ISLEM GERCEKLESMEZ.\n");
        		printf("Cekilecek miktari giriniz:");
        		scanf("%f",&cekilen_para);
        		
				if(h[j].musteri_turu==1 && cekilen_para<=h[j].bakiye && cekilen_para<=750)
        		{
        			
        	    	h[j].bakiye-=cekilen_para;
        	    	giden_para+=cekilen_para;//banka gelir gider raporu için;
        	        FILE*fp2=fopen("hesaplar.txt","w");
        	    	for(i=0;i<okuma2;i++)
                	{
        	            fprintf(fp2,"%s\t\t%d\t\t%.2f\t\t%d\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
                    }
                    fclose(fp2);
				    printf("para cekme islemi gerceklestirildi.\n");
				    a++;
				    //DEKONT DOSYASINI YAZMADIRMA
				    int hesapno2=0;
				    FILE*fp4=fopen("dekont.txt","a");
				    fprintf(fp4,"%shesapno1: %d\nhesapno2: %d\ncekilen.para: %f\n\n",ctime(&tarih),h[j].hesap_no,hesapno2,cekilen_para);
				    fclose(fp4);
				    
				    //gelir gider raporunu güncelllemek için;
        			FILE*fp3=fopen("rapor.txt","w");
        			toplam_para=gelen_para-giden_para;
					fprintf(fp3,"%s %.2f	  %s %.2f	  %s %.2f",k1,gelen_para,k2,giden_para,k3,toplam_para);
					fclose(fp3);
				}
				if(h[j].musteri_turu==2 && cekilen_para<=h[j].bakiye &&cekilen_para<=1500)
        		{
        	    	h[j].bakiye-=cekilen_para;
        	    	giden_para+=cekilen_para;//banka gelir gider raporu için;
        	    	
        	    
        	        FILE*fp2=fopen("hesaplar.txt","w");
        	    	for(i=0;i<okuma2;i++)
                	{
        
        	            fprintf(fp2,"%s\t\t%d\t\t%.2f\t\t%d\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
                    }
                    fclose(fp2);
				    printf("Para cekme islemi gerceklestirildi.\n");
				    a++;
				    //DEKONT DOSYASINI YAZMADIRMA
				    int hesapno2=0;
				    FILE*fp4=fopen("dekont.txt","a");
				    fprintf(fp4,"%shesapno1: %d\nhesapno2: %d\ncekilen.para: %.2f\n\n",ctime(&tarih),h[j].hesap_no,hesapno2,cekilen_para);
				    fclose(fp4);
				    
				    //banka gelir gider raporunu güncelllemek için;
                    FILE*fp3=fopen("rapor.txt","w");
        			toplam_para=gelen_para-giden_para;
					fprintf(fp3,"%s %.2f  	%s %.2f 	 %s %.2f",k1,gelen_para,k2,giden_para,k3,toplam_para);
					fclose(fp3);
				}
				
			}
        }
        if(a==0) printf("istediginiz islem gerceklesmedi.\n");
	    a=0;
        printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	    scanf("%d",&secilen);
		}
        /////4.menü/////////////////////////////////////////////////////////////4.MENÜ BÖLÜMÜ
        else if(secilen==4)
        {
        	printf("\nPARA YATIRMA>>>>>\n");
        	printf(">>Lutfen hesabi giriniz->");
        	scanf("%d",&secilen_hesap);
            
        	for(j=0;j<okuma2;j++)
        	{
        	if(secilen_hesap==h[j].hesap_no)
        	{
        		printf("Yatirilacak miktari giriniz:");
        		scanf("%f",&yatan_para);
        		h[j].bakiye+=yatan_para;
        		gelen_para+=yatan_para;//banka gelir gider raporu için;
        		FILE*fp2=fopen("hesaplar.txt","w");
        		for(i=0;i<okuma2;i++)
            	{
        	      fprintf(fp2,"%s\t\t%d\t\t%.2f\t\t%d\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
                }
                fclose(fp2);
				printf("para yatirma islemi gerceklestirildi.\n");
				a++;
				//DEKONT DOSYASINI YAZMADIRMA
				int hesapno2=0;
				FILE*fp4=fopen("dekont.txt","a");
				fprintf(fp4,"%shesapno1: %d\nhesapno2: %d\nyatan.para: %.2f\n\n",ctime(&tarih),h[j].hesap_no,hesapno2,yatan_para);
				fclose(fp4);
				//gelir gider raporunu güncelllemek için;
				FILE*fp3=fopen("rapor.txt","w");
        		toplam_para=gelen_para-giden_para;
				fprintf(fp3,"%s %.2f 	 %s %.2f	  %s %.2f",k1,gelen_para,k2,giden_para,k3,toplam_para);
				fclose(fp3);
			}
        	}
        	if(a==0) printf("istediginiz islem gerceklesmedi.\n");
	        a=0;
            printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&secilen);
		    
			}
				
			///////5.MENÜ////////////////////////////////////////////////////////////////////////////////5.MENÜ BOLUMU
			else if(secilen==5)
		    {
			printf("\nHESABA HAVALE>>>>>\n");
        	printf(">>Lutfen kendi hesabinizi giriniz->");
        	scanf("%d",&kendi_hesap);
        	
            
        	for(j=0;j<okuma2;j++)
        	{
        	if(kendi_hesap==h[j].hesap_no && kendi_hesap!=0)
        	{
        		printf(">>Lutfen havale yapilacak kisinin hesabini giriniz->");
            	scanf("%d",&havale_hesap);
        		for(i=0;i<okuma2;i++)
        	    {
        	    if(havale_hesap==h[i].hesap_no && havale_hesap!=0)
        	        {
        	        	
        	        	printf("havale yapilacak miktari giriniz:");
        		        scanf("%f",&havale_para);
        		        int temp_para=havale_para;
        		        if(havale_para<=h[j].bakiye)
        		        {
        		        	h[j].bakiye-=havale_para;
        		        	if(h[j].musteri_turu==1)
        		        	{
        		        	havale_para-=(havale_para*2)/100;
							}
        		        	printf("havale edilen miktar :%.2f\n",temp_para);
        		        	h[i].bakiye+=havale_para;
        		        	FILE*fp2=fopen("hesaplar.txt","w");
        		        	
							//DEKONT DOSYASINI YAZMADIRMA
				            FILE*fp4=fopen("dekont.txt","a");
				            fprintf(fp4,"%shesapno1: %d\nhesapno2: %d\nhavale.para: %.2f\n\n",ctime(&tarih),h[j].hesap_no,h[i].hesap_no,temp_para);
				    		fprintf(fp4,"\n");
							fclose(fp4);
        		        	for(i=0;i<okuma2;i++)
            	        	{
        	            	fprintf(fp2,"%s\t\t%d\t\t%.2f\t\t%d\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
                       		}
                        	fclose(fp2);
				        	printf("Havale islemi gerceklestirildi.\n");
				        	a++;
				        	
						}
						
			        }
        	    }	
			}
        	}
        	if(a==0)
        	printf("islem gerceklesmedi.\n");
            printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&secilen);
			}
			//////////6.MENÜ//////////////////////////////////////////////////////////////////////////////////
		else if(secilen==6)
		{
			printf("6->BANKA GELIR-GIDER RAPORU\n");
			if(c!=1)
			{
			printf("%s %.2f\t%s %.2f\t%s %.2f\n\n",k1,gelen_para,k2,giden_para,k3,toplam_para);
		    }
		    printf("herhangi bir rapor bulunamadi");
			printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&acma);
			if(acma==0) secilen=acma;
				
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////
	    else if(secilen==7)
		{
			printf("7->HESAP OZETI\n");
			printf("hesap ozetini istediginiz hesabi giriniz:");
			scanf("%d",&ozet_hesap);
			printf("---------------------------------------\n");
			printf("%d HESAP NUMARASININ OZETI\n",ozet_hesap);
			printf("---------------------------------------\n");
			FILE*fp4=fopen("dekont.txt","r");
			if(fp4==NULL)
			d=-1;
			for(i=0;i<5;i++)
			{
				if(d==0)
				{
				fscanf(fp4,"%s %s %s %s %s %s %d %s %d %s %f",&ozet[i].gun,&ozet[i].ay,&ozet[i].ayin_kaci,&ozet[i].saat,&ozet[i].yil,&ozet[i].s1,&ozet[i].hesap_no1,&ozet[i].s2,&ozet[i].hesap_no2,&ozet[i].s3,&ozet[i].para);
				okuma3++;
			    }
				if(feof(fp4))
				break;	
				
			}
    		fclose(fp4);
    		
    		for(i=0;i<okuma3;i++)
    		{
    			if(ozet_hesap==ozet[i].hesap_no1)
    			{
    				printf(">>%s %s %s %s %s\n>>%s %d\n>>%s %d\n>>%s %.2f\n\n",ozet[i].gun,ozet[i].ay,ozet[i].ayin_kaci,ozet[i].saat,ozet[i].yil,ozet[i].s1,ozet[i].hesap_no1,ozet[i].s2,ozet[i].hesap_no2,ozet[i].s3,ozet[i].para);
    				a++;
    				printf("--------------------------------------------\n\n");
				}
    			
			}
			if(a==0)
			printf("bu hesaba ait ozet bulunamadi..");
			printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&secilen);
		}
		/////////8.menu/////////////////////////////////////////////////////////////////////////////
		else if(secilen==8)
		{
			printf("NOT>>>KAPANMASI GEREKEN HESABIN BAKIYESI '0' OLMALIDIR.\nEGER DEGILSE ISLEM GERCEKLESMEZ!!\n");
			printf(">>Lutfen kapanmasini istediginiz hesabi giriniz->");
        	scanf("%d",&kapanacak_hesap);
            
        	for(j=0;j<okuma2;j++)
        	{
        	if(kapanacak_hesap==h[j].hesap_no && h[j].bakiye==0.00 )
        	{
        		
        		FILE*fp2=fopen("hesaplar.txt","w");
        		for(i=0;i<okuma2;i++)
            	{
            		
            		if(i!=j)
            		{
        	        fprintf(fp2,"%s\t\t%d\t\t%.2f\t\t%d\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
                    }
                    

				}
                fclose(fp2);
				printf("hesap silme islemi gerceklestirildi.\n");
			}
			
        	}
		    
			printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&secilen);
		}
		////////////////////////////////bilgiler////////////////////////////////////////////////////////////////////////
			//////////7.MENÜ//////////////////////////////////////////////////////////////////////////////////
			else if(secilen==10)
			{
			printf("hesaplar dosyasi->\n");
        	for(i=0;i<okuma2;i++)
        	{
        		
        	printf(">>%s  %d  %.2f TL  %d\n\n",h[i].ad_soyad,h[i].hesap_no,h[i].bakiye,h[i].musteri_turu);
            }
        	
        	printf("---------------------------------------------------------------");
        	printf("\n\nbireysel ve ticari musteri  dosyasi->\n");
			for(j=0;j<okuma1;j++)
			{
        	printf(">>%s  %s  %s  %d  %d\n\n",m[j].ad_soyad,m[j].dogum_yeri,m[j].dogum_tarihi,m[j].musteri_no,m[j].musteri_turu);
        	}
            printf(">>Bu menuden cikmak icin '0' tuslayiniz.\n");
	        scanf("%d",&secilen);
			}

	}while(secilen<=0 || secilen>11);
	
	return 0;
	}
	
	
	
	
	

