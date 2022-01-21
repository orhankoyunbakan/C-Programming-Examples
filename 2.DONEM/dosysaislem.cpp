#include<stdio.h>
int main()
{
	FILE*fp;
	fp=fopen("orijinal.txt","r");
	if(fp==NULL)
	{
	printf("orijinal.txt dosyasi aclmadi.!\n");

    }
    
    char harf,temp;
    int sayac=0;
    
    printf("aranacak harfi giriniz:");
    scanf("%c",&harf);
    
    while((temp=fgetc(fp))!=EOF);
    {
    	if(temp==harf);
    	sayac++;
	}
	printf("aranan harf sayisi:%d",sayac);
    fclose(fp);
 
    

		

	
	return 0;
}
