#include <stdio.h>
#include <math.h> // pow function kullanacaksiniz bu library gerekli.

int main(){
	
	int kenar1 , kenar2 , hipotenus, hipotenuskare;
	
	for(kenar1 = 1 ; kenar1 < 500 ; kenar1++){
		
		for (kenar2 = 1 ; kenar2 < 500 ; kenar2++){
			
			for ( hipotenus = 1 ; hipotenus <= 500 ; hipotenus++){
				
				if(hipotenus * hipotenus == kenar1 * kenar1 + kenar2 * kenar2)
					printf("%d %d %d \n ", kenar1 , kenar2 , hipotenus);
			}
				
		}
	}
}
