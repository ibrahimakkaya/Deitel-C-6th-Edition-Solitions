#include <stdio.h>

int main()
{
	printf("**********Sinav Sonuc Sistemine Hosgeldiniz!**********\n");
	
	int sayac1,sayac2,toplam,puan;
	float ortalama;
	sayac1 = 0;
	sayac2 = 0;
	ortalama = 0;
	
		while(sayac1+sayac2<10)
		{
		
			printf("Sinav sonucunu giriniz: ");
			scanf("%d", &puan);
			toplam = toplam + puan;
				if(puan>50)
				{
					printf("%d No'lu Ogrenciniz Basarili\n\n", sayac1+2);
					sayac1++;
				}
				else
				{
					printf("%d No'lu Ogrenciniz Basarisiz\n\n", sayac2+1);
					sayac2++;
				}
       }
       
		
		ortalama = (float) toplam / 10;
			if(sayac1>8)
				printf("\nSinifiniz basarili! Tebrikler!");
			else
				printf("Sinifiniz malesef basarisiz.\a");
		
	
	
	
	
	
	
	
	
	
	
	
}
