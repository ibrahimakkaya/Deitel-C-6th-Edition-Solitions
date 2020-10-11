#include <stdio.h>

int main()
{
	float saat,ucret,maas;
		while(1)
		{
			printf("Calisma saatini girin: (Cikis icin -1)");
			scanf("%f", &saat);
				if(saat==-1)
				{
					printf("Cikis yapilmistir.");
					break;
				}
			printf("Saatlik ucretini girin:");
			scanf("%f", &ucret);
				if(saat>40)
				{
					maas=(saat-40)*(ucret*3/2)+40*ucret;
				}
				else
				{
					maas=saat*ucret;
				}
				printf("Calisanin maasi: %f\n\n", maas);
		}
				
}
