# include <stdio.h>


int main(){
	
	int satir,yildiz,bosluk,maxsatir;
	printf("kac satirlik bir yildiz istediginizi giriniz.");
	scanf("%d",  &maxsatir);
	
	for(satir = 1 ; satir <= maxsatir/2 + 1 ; satir++){
		
		for(bosluk = 1 ; bosluk <= maxsatir/2 + 1-satir  ; bosluk++){
			
			printf(" ");
		}	
	
		for(yildiz = 0 ; yildiz < 2*satir-1 ; yildiz++ ){
			
			printf("*");
		
		}
		
		printf("\n");
		
		
		
		
	}
	
	for(satir = 1 ; satir <= maxsatir / 2  ; satir++)
	{
		for(bosluk = 1 ; bosluk <=satir ; bosluk++)
		{
			printf(" ");
		}
		
		for(yildiz = 1 ; yildiz <= maxsatir - 2*satir ; yildiz++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
