#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
	time_t t;
	t=time(NULL);
	printf("tarih ve saat:%s",ctime(&t));
	return 0;
}
