#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,b,c,delta,kok,kokdelta,kok1,kok2;
	printf("2.dereceden denklem koklerini bul\n");
	printf("a degerini giriniz:");
	scanf("%f",&a);
	printf("b degerini giriniz:");
	scanf("%f",&b);
    printf("c degerini giriniz:");
    scanf("%f",&c);
    
    
    delta=pow(b,2)-4*a*c;
    kokdelta=sqrt(delta);
    
    if(delta<0)
    printf("denklemin gercel koku yoktur.");
    
    else if(delta==0)
    {
    printf("denklemin esit iki koku vardir.\n");
    kok=-1*b/2*a;
    printf("denklemin koku:%.2f",kok);
    } 
    
    if(delta>0)
    {
    printf("bu denklemin gercel iki koku vardir.\n");
    kok1=(-b-kokdelta)/(2*a);
    kok2=(-b+kokdelta)/(2*a);
    printf("1.kok:%.2f\n2.kok:%.2f",kok1,kok2);
    }
	return 0;
}
