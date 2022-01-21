#include<stdio.h>

int main()
{
	FILE*fp;
	fp=fopen("dosya.txt","w");
	
	if(fp==NULL)
	{
	printf("dosya acilmadi...");
    }
    fputc('a',fp);
    fclose(fp);
    fp=fopen("dosya.txt","r");
    if(fp==NULL)
	{
	printf("dosya acilmadi...");
    }
    char okunan;
    okunan=fgetc(fp);
    if(okunan==EOF)
    {
    	printf("karekter okunmadi:::\n");
    	
	}
	else
	printf("okunan karekter:%c",okunan);
    
    fclose(fp);
    
    return 0;
    
}
