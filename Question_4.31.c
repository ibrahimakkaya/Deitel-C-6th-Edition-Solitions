# include <stdio.h>


int main(){
	
	int satir,yildiz,bosluk;
	
	for(satir = 1 ; satir <=5 ; satir++){
		
		for(bosluk = 1 ; bosluk <= 5-satir  ; bosluk++){
			
			printf(" ");
		}	
	
		for(yildiz = 0 ; yildiz < 2*satir-1 ; yildiz++ ){
			
			printf("*");
		
		}
		
		printf("\n");
		
		
		
		
	}
	
	for(satir = 1 ; satir <=4 ; satir++)
	{
		for(bosluk = 1 ; bosluk <=satir ; bosluk++)
		{
			printf(" ");
		}
		
		for(yildiz = 1 ; yildiz <= 9 - 2*satir ; yildiz++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
