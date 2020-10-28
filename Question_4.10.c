#include <stdio.h>

int main()
{
	int x, i = 0, toplam = 0;
	while(x!=9999)
	{
		printf("Ortalamasiniz almak istediginiz sayiyi giriniz.");
		scanf("%d", &x);
		toplam = toplam + x;
		i++;
	}
	printf("Ortalama: %d ", (toplam-9999)/(i-1) );
}
