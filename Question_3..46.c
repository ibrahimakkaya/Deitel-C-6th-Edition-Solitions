#include <stdio.h>

int main()
{
	int sayi,birler,onlar,yuzler,binler,birler_n,onlar_n,yuzler_n,binler_n;
	
	printf("Dort basamakli sayinizi giriniz: ");
	scanf("%d",  &sayi);
	
	birler = sayi%10;
	onlar = (sayi/10)%10;
	yuzler = (sayi/100)%10;
	binler = sayi /1000;
	
	birler_n = (birler+7)%10;
	onlar_n = (onlar+7)%10;
	yuzler_n = (yuzler+7)%10;
	binler_n = (binler+7)%10;
	
	printf("Kripto sayi: %d%d%d%d",binler_n,yuzler_n,onlar_n,birler_n);
}
