#include <stdio.h>

int main(){
	
	int urun_no,satis_adedi, fiyat,i,toplam = 0;
	
	
	for(i = 1 ; i <= 5 ; i++)
	{
		printf(" %d. Urun numarasini giriniz : " , i);
		scanf("%d", &urun_no);
	
	
	switch (urun_no) {
		
		case 1:
			printf("Satis adedini giriniz. ");
			scanf("%d", &satis_adedi);
			fiyat = 3 * satis_adedi;
			break;
			
		case 2:
			printf("Satis adedini giriniz. ");
			scanf("%d", &satis_adedi);
			fiyat = 5 * satis_adedi;
			break;
			
		case 3:
			printf("Satis adedini giriniz. ");
			scanf("%d", &satis_adedi);
			fiyat = 10 * satis_adedi;
			break;
			
		case 4:
			printf("Satis adedini giriniz. ");
			scanf("%d", &satis_adedi);
			fiyat = 43 * satis_adedi;
			break;
			
		case 5:
			printf("Satis adedini giriniz. ");
			scanf("%d", &satis_adedi);
			fiyat = 7 * satis_adedi;
			break;
			
		default:
			printf("Yanlis urun numarasi girildi.\a\n");
			break;
		
			
	}
	toplam = toplam + fiyat;
	}
	
	
	printf("Cironuz : %d ", toplam);
	
}
