#include <stdio.h>

int main(){
	
	
	int tip;
	int saat, ucret,brut,parca; 
	
	printf("Calisan tipini giriniz. \n 1. Vardiyali Isci \n 2. Komisyon Iscisi  \n 3. Parca Iscisi \n 4. Mudur ");
	scanf("%d", &tip);
	
	switch(tip){
		
		case 1:
			printf("Vardiyali iscinin kac saat calistigini giriniz:");
			scanf("%d", &saat);
			if(saat>40)
				ucret = 40 + (saat - 40)*1.5;
		
			printf(" Vardiyali iscinin alacagi ucret : %d" , ucret);
			break;
		
		case 2:
			printf("Komisyon iscisinin brut satisini giriniz:");
			scanf("%d", &brut);
			ucret = 250 + brut + (brut*5.7/100);
			printf(" Komisyon iscisinin alacagi ucret : %d" , ucret);
			break;
			
		case 3:
			printf("Parca iscisinin kac parca urettigini giriniz:");
			scanf("%d", &parca);
			ucret = parca*2;
			printf(" Parca iscinin alacagi ucret : %d" , ucret);
			break;
			
		case 4:
			printf("Mudur'un alacagi ucret 10000 TL");
			break;
			
		default:
			printf("Lutfen listeden dogru rakami giriniz. ");
			
		
	}
	
	
	
	
	
}
