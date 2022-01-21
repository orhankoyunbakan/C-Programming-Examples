#include <stdio.h>
#include <stdlib.h>

float bolme(float sayi1,float sayi2)
{
    return sayi1/sayi2;
}
float topla(float sayi1,float sayi2)
{
	return sayi1+sayi2;
}
float carp(float sayi1,float sayi2)
{
	return sayi1*sayi2;
}

int main() 
{
	float sayi1,sayi2;
	
	printf("iki sayi giriniz:");
	scanf("%f %f",&sayi1,&sayi2);
	
	printf("bolmenin sonucu:%.2f\n",bolme(sayi1,sayi2));
	printf("toplamin sonucu:%.2f\n",topla(sayi1,sayi2));
	printf("carpimin sonucu:%.2f\n",carp(sayi1,sayi2));
	
	
	
	return 0;
}
