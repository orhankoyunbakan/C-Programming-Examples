#include<stdio.h>
int main()
{
	int x=20,*px;
	float y=12.25,*py;
	char z='a',*pz;
	
	px=&x;
	py=&y;
	pz=&z;
	
	
	printf("onceki adresler:::::\n");
	printf("x in adresi:%p    degeri:%d\n",px,*px);
	printf("y in adresi:%p    degeri:%f\n",py,*py);
	printf("z in adresi:%p    degeri:%c\n",pz,*pz);
	
	px++;
	py--;
	pz=pz+1;
	
	printf("sonraki adresler:::::\n");
	printf("x in adresi:%p    degeri:%d\n",px,*px);
	printf("y in adresi:%p    degeri:%f\n",py,*py);
	printf("z in adresi:%p    degeri:%c\n",pz,*pz);
	
}
