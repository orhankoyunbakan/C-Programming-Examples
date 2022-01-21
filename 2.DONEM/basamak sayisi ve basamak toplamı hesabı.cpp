#include<stdio.h>
#include<stdlib.h>
int main()
{
int sayi,kalan,bas_toplam=0,bas_sayisi=0;
printf("bir sayi giriniz:");
scanf("%d",&sayi);

while(sayi!=0)
{
kalan=sayi%10;
bas_sayisi++;
bas_toplam+=kalan;
sayi/=10;
}
printf("basamak sayisi:%d\n",bas_sayisi);
printf("basamak toplam:%d",bas_toplam);
return 0;
}
