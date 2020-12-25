#include <stdio.h>

int kat(int, int);

int main()
{
	int a,b;
	printf("Lutfen iki tam sayi giriniz.");
	scanf("%d %d",&a, &b);
	
	if(kat(a,b))
		printf("Ilk girdiginiz sayi ikincisinin tam katidir.");
	else
		printf("Ilk girdiginiz sayi ikincisinin tam kati degildir.");
}
int kat(int x, int y)
{
	return !(x%y);
}
