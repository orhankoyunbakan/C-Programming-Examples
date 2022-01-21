#include <stdio.h>
#include <stdlib.h>
//Parametre olarak aldýðý 2 tamsayýnýn EKOK’ unu (En Küçük Ortak Kat) hesaplayan fonksiyonu tanýmlayýnýz.
//Fonksiyonun prototipi  int ekok(int a, int b)  þeklinde olmalýdýr.
//30 puan) (Not:  Sadece fonksiyonu tanýmlayýnýz, main kýsmýný yazmayýnýz.) 


int ekok(int a, int b) 
{       
int i;       
for(i=a; i<=a*b; i++) 
{
if(i%a == 0  &&  i%b == 0)
return i;       
}     
} 
 
int main() 
{
	int sayi1,sayi2;
	
	printf("ekok 'unu almak istediginiz sayilari giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("%d",ekok(sayi1,sayi2));
	
	return 0;
}
