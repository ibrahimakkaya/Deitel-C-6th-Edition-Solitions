#include <stdio.h>

int main()
{
	int sayi,faktoriyel;
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
	scanf("%d", &sayi);
	faktoriyel=1;
	while(sayi>=1)
	{
		faktoriyel=faktoriyel*sayi;
		sayi--;
	}
	printf("Sayinin faktoriyeli : %d", faktoriyel);
}
