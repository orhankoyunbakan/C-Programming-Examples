#include <stdio.h>
#include <stdlib.h>



int main() 
{

int i, a, b, c,miktari=0; 
for(i=100;i<=999;i++) 
{ 
   a = i/100; // y�zler basama��  
   b = (i%100)/10; // onlar basama��  
   c = i%10; // birler basama��  
   if(a!=b && a!=c && b!=c) 
   {
   printf("%5d\n",i);
   miktari++;
   }
}
printf("miktari=%d",miktari);
	return 0;
}
