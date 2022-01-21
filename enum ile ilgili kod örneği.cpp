#include<stdio.h>
#include<stdlib.h>

enum dersler
{
	matematik,
	fizik=7,
	kimya,
	biyoloji
};

int main()
{
	printf("matematik dersinin kodu:%d\n",matematik);
	printf("fizik dersinin kodu:%d\n",fizik);
	printf("kimya dersinin kodu:%d\n",kimya);
	printf("biyoloji dersinin kodu:%d\n",biyoloji);
	return 0;
}
