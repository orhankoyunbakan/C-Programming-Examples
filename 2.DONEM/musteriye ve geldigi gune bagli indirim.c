#include <stdio.h>
#include <stdlib.h>

int kullanici(char tur,int gun)
{
	int indirim=0;
	
	if(tur=='e' || tur=='E')
	indirim+=5;
	
	if(gun==1 || gun==2)
	indirim+=10;
	
    if(gun==3 || gun==4)
	indirim+=5;
	
	return indirim;
}



int main()
{
	char mus_turu;
	int gun;
	
	
	printf("ogrenci misiniz:");
	scanf("%c",&mus_turu);
	
	printf("pazartesi-->1\nsali------->2\ncarsamba--->3\npersembe--->4\ncuma------->5\ncumartesi-->6\npazar------>7\n");
	
	printf("hangi gun:");
	scanf("%d",&gun);
    
    printf("indirim miktari:%d",kullanici(mus_turu,gun));
    
	
	
	
	return 0;
}
