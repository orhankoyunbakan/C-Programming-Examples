#include <stdio.h>
#include <stdlib.h>
//Parametre olarak ald��� 2 tamsay�n�n EKOK� unu (En K���k Ortak Kat) hesaplayan fonksiyonu tan�mlay�n�z.
//Fonksiyonun prototipi  int ekok(int a, int b)  �eklinde olmal�d�r.
//30 puan) (Not:  Sadece fonksiyonu tan�mlay�n�z, main k�sm�n� yazmay�n�z.) 


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
