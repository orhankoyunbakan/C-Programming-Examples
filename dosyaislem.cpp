#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("orijinal1.txt","r");
	if(fp==NULL)
	{
		printf("dosya acilmadi....");
	}
	fclose(fp);
	return 0;
}
