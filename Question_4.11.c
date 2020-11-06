#include <stdio.h>

int main ()
{
	
	int sayi,i,enkucuk;
	
	printf("Kac sayi girilegini belirtiniz: ");
	scanf("%d", &i);
	printf("Sayi giriniz: ");
	scanf("%d", &enkucuk);
	while(i!=1)
	{
		printf("Sayi giriniz: ");
		scanf("%d", &sayi);
			if(sayi<enkucuk)
			{
			enkucuk=sayi;
			}
	i--;
	}
	printf("Girdiginiz sayilardan en kucugu: %d" , enkucuk);
}
