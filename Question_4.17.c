#include <stdio.h>

int main()
{
	int yeni_kredi, kredi, hesap_no, bakiye, i;
	
	for(i = 1 ; i <=3 ; i++){
		
		printf("\t ******** %d No'lu Musteri ******** \n" , i);
		
		printf("\t Hesap numarasini giriniz: ");
		scanf("%d", &hesap_no);
		printf("\t Kredi miktarini giriniz: ");
		scanf("%d", &kredi);
		printf("\t Bakiye miktarini giriniz: ");
		scanf("%d", &bakiye);
		
		yeni_kredi = kredi/2;
		
		if(bakiye > yeni_kredi)
			printf("\t Yeni kredi limiti asilmistir!\n\n\a");
		else
			printf("\t Yeni kredi limiti asilmamistir.\n\n");
	}
}
