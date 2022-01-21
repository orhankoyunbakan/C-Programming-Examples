#include <stdio.h>
#include <stdlib.h>


int main()
{
	float cekilen;
	printf("Cekmek istediginiz miktari yaziniz:");
	scanf("%f",&cekilen);
	
	if(cekilen>0 && cekilen<=5000){
	cekilen-=(cekilen*8)/100;
	printf("Cektiginiz miktar:%.2f",cekilen);}
	
	else if(cekilen>5000 && cekilen<=10000){
	cekilen-=(cekilen*10)/100;
	printf("Cektiginiz miktar:%.2f",cekilen);}
	
	else if(cekilen>10000 && cekilen<=50000){
	cekilen-=(cekilen*13)/100;
	printf("Cektiginiz miktar:%.2f",cekilen);}
	
	else if(cekilen>50000 && cekilen<=100000){
	cekilen-=(cekilen*17)/100;
	printf("Cektiginiz miktar:%.2f",cekilen);}
	
	else if(cekilen>100000){
	cekilen-=(cekilen*20)/100;
	printf("Cektiginiz miktar:%.2f",cekilen);}
		
	return 0;
}
