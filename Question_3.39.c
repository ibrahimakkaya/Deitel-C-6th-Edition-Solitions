#include <stdio.h>

int main()
{
	int sayi,sayac;
	sayac = 0; 
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
		if(sayi%10 == 7)                // Birler basamagi
			sayac++;
		
		while(sayi/10!=0)
		{
			sayi = sayi /10;
				if(sayi%10==7)
					sayac++;
		}
		
		printf("Sayinizda %d tane 7 vardir.", sayac);
}

