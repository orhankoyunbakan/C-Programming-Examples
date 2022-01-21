#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tam=33;
	int *ptam;
	
	ptam=&tam;
	
	printf("tam :%p\n",&tam);
	printf("ptam :%p\n",ptam);
	printf("\n");
	
	printf("tam :%d\n",tam);
	printf("ptam :%d\n",*ptam);
	printf("\n");
	
	*ptam=44;
	
	printf("tam :%d\n",tam);
	printf("*ptam :%d\n",*ptam);
	printf("\n");
	
	printf("&tam :%p\n",&tam);
	printf("ptam :%p\n",ptam);
	return 0;
}

