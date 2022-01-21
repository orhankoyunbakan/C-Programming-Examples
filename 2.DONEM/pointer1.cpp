#include<stdio.h>

int main()
{
	int i=7,j=8,*ip,*jp;
	
	ip=&i;
	jp=&j;
	
	printf("i nin adresi:%p   i nin deðeri:%d\n",ip,*ip);
	printf("j nin adresi:%p   j nin degeri:%d\n",jp,*jp);
	
	
	
	return 0;
	
}
