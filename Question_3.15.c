#include <stdio.h>

//Klavyeden birka� pozitif say� al�n�z,ve say�lar�n toplam�n� hesaplay�p ekrana yazd�r�n�z. �Veri giri�i sonunu� belirtmek i�in �1 n�bet�i de�erini kullan�ld���n� kabul ediniz.

int main()

{
	int x,toplam;
	
		while(x!=-1)
		{
		
			printf("Sayi giriniz: (Sonlandirmak icin -1'e basiniz.) ");
			scanf("%d",&x);
			toplam=toplam+x;
		}
		printf("Toplam: %d", toplam);	
}
