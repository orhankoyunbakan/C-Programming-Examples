#include<stdio.h>

int main()
{
	FILE*fp;
	fp=fopen("dosya.txt","w");
	
	if(fp==NULL)
	{
	printf("dosya acilmadi...");
    }
    int i=0;
    
    for(;i<10;i++)
    {
    	fputc('a',fp);
	}
	fclose(fp);
	fp=fopen("dosya.txt","r");
	

	for(i=0;i<10;i++);
	{
		printf("%c",fgetc(fp));
	}
	fclose(fp);
	
	return 0;
}
