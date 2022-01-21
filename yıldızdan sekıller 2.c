#include <stdio.h>
#include <stdlib.h>

int main()
{
	int j,i,b;
		for(i=0;i<5;i++)
	{
		
		
		for(j=0;j<=i;j++)
		{
		printf("*");
	    }
		
		for(b=5;b>i;b--)
		{
			printf(" ");
		}
		
		for(b=5;b>i;b--)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
	
	

