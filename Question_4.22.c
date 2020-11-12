#include <stdio.h>
#include <math.h>

int main(){
	
	int sayac = 0, sayi, toplam = 0;
	
	for(sayi = 3 ; sayi <= 23 ; sayi+=5){
		printf("%d\n", sayi);
		sayac++;
		toplam = toplam + sayi;
		
	}
	printf("Ortalama : %d", toplam/sayac);
	
}
