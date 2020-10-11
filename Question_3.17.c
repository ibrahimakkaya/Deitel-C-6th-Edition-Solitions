#include <stdio.h>

int main()

{
	float galon,km,ort,sayac;
	ort=0;
	sayac=0;
		while(galon!=-1)
		{
		
			printf(	"Kac galon benzin harcandi? (Cikis icin -1)");
			scanf("%f", &galon);
			printf("Kac kilometre yol alindi?");
			scanf("%f", &km);
			ort=ort+km/galon;
			sayac++;
			
			
		}
		printf("Ortalama yakit tuketimi : %f", ort/sayac);
		
}
