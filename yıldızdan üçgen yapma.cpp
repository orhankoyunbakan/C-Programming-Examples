#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,bosluk=9,yildiz=1;

	for(i=0;i<10;i++)
	{
		for(k=0;k<bosluk;k++)
		{
			printf(" ");
		}
		for(j=0;j<yildiz;j++)
		{
			printf("*");
		}
		printf("\n");
		yildiz+=2;
		bosluk--;
	}
    return 0;
}
