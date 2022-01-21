#include <stdio.h>
#include <string.h>



int main()
{
    char metin[50];
    int i;
    
    printf("metni giriniz:");
    gets(metin);
    
    printf("metnin uzunlugu:%d", strlen(metin));
    printf("\n");
	return 0;
}
