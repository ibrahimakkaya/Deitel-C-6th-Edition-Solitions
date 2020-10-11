#include <stdio.h>

//Klavyeden birkaç pozitif sayý alýnýz,ve sayýlarýn toplamýný hesaplayýp ekrana yazdýrýnýz. “Veri giriþi sonunu” belirtmek için –1 nöbetçi deðerini kullanýldýðýný kabul ediniz.

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
