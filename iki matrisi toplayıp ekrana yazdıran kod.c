#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][3]={5,4,3,   9,8,7};
	int b[2][3]={6,5,4,   4,3,2};
	int c[2][3];
	int i,j;
	
	printf("A MATRISI:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
		
		printf("\n");
	}
	
	printf("B MATRISI:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%4d",b[i][j]);
		
		printf("\n");
	}
	
	printf("C MATRISI:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("%4d",c[i][j]);
	    }
		printf("\n");
	}
}
