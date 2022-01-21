#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	fp=fopen("deneme.txt","r");

	int sayi[7];
	int i;
	
	while(!feof(fp))
	{
		fscanf(fp,"%d",sayi[i]);
	}
	
	for(i=0;i<7;i++)
	{
		printf("%d\n",sayi[i]);
	}
	fclose(fp);

	
}
