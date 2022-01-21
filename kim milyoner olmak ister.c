#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char cevap1,cevap2,cevap3,cevap4,cevap5,cevap6,cevap7,cevap8,cevap9,cevap10,puan=0;
	
	printf("1) 'Sinekli Bakkal' Romaninin Yazari AsagÝdakilerden Hangisidir?\n\n");
	printf("A) Resat Nuri Guntekin\nB) Halide Edip Adivar\nC) Ziya Gokalp\nD) Omer Seyfettin\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap1);
	if(cevap1=='B' || cevap1=='b')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
	else
	printf("Maalesef cevabiniz yanlis.CEVAP:B\n");
	

	printf("\n2) Asagida Verilen Ilk Cag Uygarliklarindan Hangisi Yaziyi Icat Etmistir?\n\n");
	printf("A) Hititler\nB) Elamlar\nC) Sumerler\nD) Urartular\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap2);
		if(cevap2=='C' || cevap2=='c')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
	else
	printf("Maalesef cevabiniz yanlis.CEVAP:C\n");

	
	printf("\n3) Tsunami Felaketinde En Fazla Zarar Goren Guney Asya Ulkesi Asagidakilerden Hangisidir?\n\n");
	printf("A) Endonezya\nB) Srilanka\nC) Tayland\nD) Hindistan\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap3);
		if(cevap3=='A' || cevap3=='a')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
	else
	printf("Maalesef cevabiniz yanlis.CEVAP:A\n");

	printf("\n4) 2003 Yilinda Euro Vizyon Sarki Yarismasinda Ulkemizi Temsil Eden Ve Yarismada Birinci Gelen Sanatcimiz Kimdir?\n\n");
	printf("A) Grup Athena\nB) Sertap Erener\nC) Þebnem Paker\nD) Ajda Pekkan\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap4);
		if(cevap4=='B' || cevap4=='b')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:B\n");

	
	printf("\n5) Mustafa Kemal Ataturkun Nufusa Kayitli Oldugu Il Hangisidir?\n\n");
	printf("A) Bursa\nB) Ankara\nC) Istanbul\nD) Gaziantep\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap5);
		if(cevap5=='D'  || cevap5=='d')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:D\n");

	
	
	printf("\n6)Asagidakilerden Hangisi Dunya Saglik Orgutunun Kisaltilmis Ismidir\n\n");
	printf("A) Uhw\nB) Uncef\nC) Who\nD) Nato\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap6);
		if(cevap6=='C' || cevap6=='c')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:C\n");

	
	printf("\n7)Romen Rakaminda Hangi Sayi Yoktur?\n\n");
	printf("A) 0 B) 50 C) 100 D) 1000 \n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap7);
		if(cevap7=='A'  || cevap7=='a')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:A\n");
	
	
	printf("\n8)Bir Gun Kac Saniyedir?\n\n");
	printf("A) 86000 B) 88600 C) 86400 D) 84800\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap8);
		if(cevap8=='C' || cevap8=='c')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:C\n");

	printf("\n9)Uc Buyuk Dince Kutsal Sayilan Sehir Hangisidir?\n\n");
	printf("A) Mekke B) Kudüs C) Roma D) Ýstanbul\n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap9);
		if(cevap9=='B' || cevap9=='b')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:B\n");

	
	printf("\n10)Hangi Ilimizde Demiryolu Yoktur?\n\n");
	printf("A) Batman B) Kutahya C) Aydin D) Mugla \n");
	printf("\ncevabinizi giriniz:");
	scanf("%s",&cevap10);
		if(cevap10=='D' || cevap10=='d')
	{
		printf("Tebrikler cevabiniz dogru.");
		puan+=10;
	}
		else
	printf("Maalesef cevabiniz yanlis.CEVAP:D\n");
	
	printf("\n\nYARISMA BITTI.....\nTOPLAM PUAN:%d",puan);
	

	return 0;
}

