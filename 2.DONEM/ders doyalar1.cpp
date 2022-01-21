#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	FILE*fp;
	fp=fopen("deneme.txt","w");
	fprintf(fp,"ad-soyad\t\tbakiye\t\tzam");
	

	fclose(fp);
	
	return 0;
	
}
