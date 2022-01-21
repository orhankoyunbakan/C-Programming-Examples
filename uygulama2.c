#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,j;
	float dizi[2][2],tersi[2][2],determinant;
	for(i=0;i<2;i++)                         
	{
		for(j=0;j<2;j++)
		{
			printf("dizinin [%d][%d] elemanini giriniz:",i,j);
			scanf("%f",&dizi[i][j]);
		}
	}
	printf("\n");
	determinant=dizi[0][0]*dizi[1][1]-dizi[0][1]*dizi[1][0];
	if(determinant==0)
	printf("\nBu bir singuler matristir tersi mevcut degildir.\n");
	else
	{
	tersi[0][0]=dizi[1][1]/determinant;
	tersi[0][1]=(-1)*dizi[0][1]/determinant;
	tersi[1][0]=(-1)*dizi[1][0]/determinant;
	tersi[1][1]=dizi[0][0]/determinant;
	
	   for(i=0;i<2;i++)
	   {
	    	for(j=0;j<2;j++)
		    {
		    printf("Girilen dizinin tersinin [%d][%d] elemani %.2f dir.\n",i,j,tersi[i][j]);
	        }
	   }
   }
	return 0;
}
