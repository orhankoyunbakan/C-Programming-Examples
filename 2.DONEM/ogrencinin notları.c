#include <stdio.h>
#include <stdlib.h>


int main()
{
	int notlar1[25],notlar2[25],notlar3[25],notlar4[25],i;
	
	for(i=0;i<25;i++)
	{
	printf("%d. ogrencinin 1.notunu giriniz:",i+1);
	scanf("%d",&notlar1[i]);
    }
	return 0;
}
