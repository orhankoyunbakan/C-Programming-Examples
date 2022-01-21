#include <stdio.h>
#include <stdlib.h>
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*///çýktýsýný yazan kod.

int main() 
{
	int i,j,c=0;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			c++;
			printf("%d  ",c);
			
		}
		printf("\n");
	}
	return 0;
}
