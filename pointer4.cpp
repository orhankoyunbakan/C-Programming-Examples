#include<stdio.h>

int main()
{
	int val=1903;
	int *p;
	int **pp;



	p=&val;
	
	printf("val'in isaretcisi:%d\n",*p);
    
	pp=&p;
    
	printf("*p nin isaretcisi:%d",**pp);

}
