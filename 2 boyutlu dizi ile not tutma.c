#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int notlar[4][5];
	int i,j;
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++);
		{
			printf("%d.ogrencinin sinav notu:",j+1);
			scanf("%d",&notlar[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}
