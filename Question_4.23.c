#include <stdio.h>
#include <math.h>

int main(){
	
	int yil, sonmiktar, anapara = 1000;
	double oran = .05;
	
	printf("%4s%21s\n" , "Yil", "Depozito Miktari");
	
	for(yil = 1; yil <= 10 ; yil++){
		sonmiktar = anapara * 10 * pow(1 + oran , yil);
		printf("%3d%21d Cent\n", yil , sonmiktar);
		printf("%21d Dolar %d Cent\n",sonmiktar/100, sonmiktar%100);
	}


}
