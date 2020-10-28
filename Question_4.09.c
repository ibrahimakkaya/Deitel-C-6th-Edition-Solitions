#include <stdio.h>

int main()
{
	int x, toplam = 0, i , sayi ;
	printf("Kac tane sayi toplanacagini giriniz:");
	scanf("%d", &x);
	
	for(i=1 ; i<=x ; i++)
	{
		printf("Sayi giriniz: ");
		scanf("%d", &sayi);
		toplam = toplam + sayi;
	}
	
	printf("Toplam : %d", toplam);
}
