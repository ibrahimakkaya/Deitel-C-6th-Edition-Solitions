#include <stdio.h>

int main(){
	
	double pi = 0 , payda = 1;
	int sayac ;
	
	for(sayac = 1 ; sayac <=1000 ; sayac++){
		
		if(sayac%2 != 0){  // Cift ve tek durumuna gore hem payda 2 artacak hem de islem bir eksi bir arti seklinde gidecek if else bunu sagliyor.
		
			pi = pi + 4/payda;
			
		}
		else{
			pi = pi - 4/payda;
			
		}
		printf("%f\n", pi);
		payda+=2;
	
	}
	
	
}
