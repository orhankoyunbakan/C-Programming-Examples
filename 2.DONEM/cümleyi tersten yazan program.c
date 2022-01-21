#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cumle[50];
	int i;
	printf("bir cumle giriniz:");
	gets(cumle);
	
	
	for(i=strlen(cumle);i>=0;i--)
	{
		printf("%c",cumle[i]);
		
	}
	return 0;
}
