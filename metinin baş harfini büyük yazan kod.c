#include <stdio.h>
#include <string.h>


int main()
{
	char metin[100];
	int i;
	
	printf("bir metin giriniz:");
	gets(metin);
	
	for(i=0;i<strlen(metin);i++)
	{
		if(metin[i]==' ')
		{
			metin[i+1]=toupper(metin[i+1]);
		}
		else if(i==0)
			metin[i]=toupper(metin[i]);
		
	}
	for(i=0;i<strlen(metin);i++)
	{
	printf("%c",metin[i]);
    }
	return 0;
}
