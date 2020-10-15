#include <stdio.h>

int main()
{
	int sayi;
	printf("Bes basamakli sayi giriniz: ");
	scanf("%d", &sayi);
		if(sayi>=10000)
		{
			if(sayi/10000==sayi%10 && (sayi/1000)%10==(sayi%100)/10 )
				printf("Sayiniz Polindromdur.");
			else
				printf("Sayiniz Polindrom degildir.");
				
		}
		else
		printf("Lutfen bes basamakli sayi giriniz.");
		

	return 0;	
}
