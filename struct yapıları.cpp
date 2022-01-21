#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	char isim[20];
	int yas;
}kisi;

int main()
{
	kisi k;
	strcpy(k.isim,"ali");
	k.yas=21;
	
	kisi*kPtr;
	kPtr=&k;
	
	printf("kisinin adi:%s    kisinin yasý:%d",*kPtr.isim,*kPtr.yas);
	return 0;
}


