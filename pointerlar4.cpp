#include<stdio.h>

int main()
{
	int val=1093;
	int *p;
	int**pp;
	
	p=&val;
	pp=&p;
	
	printf("val deðeri=%d\n",*p);
	printf("val adresi=%p\n",p);
	printf("val sdresi=%p\n",&val);
	printf("pval adresi=%p\n",pp);
	
	return 0;
}
