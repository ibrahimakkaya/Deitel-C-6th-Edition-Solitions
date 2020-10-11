#include <stdio.h>

int main()

{
	float ilk_bakiye,harcama,kredi,limit,hesap_no,bakiye;
		
		
			
		while(hesap_no!=-1)
		{
		
			printf("Hesap numaranizi giriniz. (Cikis icin -1)");	
			scanf("%f", &hesap_no);
			printf("Ilk bakiyeyi girin:");
			scanf("%f", &ilk_bakiye);
			printf("Toplam harcamalari giriniz:");
			scanf("%f",&harcama);
			printf("Toplam kredileri girin:");
			scanf("%f",&kredi);
			printf("Limiti giriniz:");
			scanf("%f",&limit);
			bakiye=ilk_bakiye+kredi;
				if(bakiye>limit)
					printf("Kredi limiti asildi.\n");
				
			    
		}
		return 0;
		
}
