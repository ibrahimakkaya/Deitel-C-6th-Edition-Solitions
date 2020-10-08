#include <stdio.h>

int main()
{
	int sayi;
	printf("Bes basamakli bir sayi giriniz: ");
	scanf("%d", &sayi);
	printf("Binler Basamagi: %d\t", sayi/1000);
	printf("Yuzler basamagi: %d\t", sayi/100%10);
	printf("Onlar basamagi: %d\t", sayi/10%10);
	printf("Birler basamagi: %d\t", sayi%10);
	
	return 0;
	
}
