#include <stdio.h>


int main()
{
	int anapara,gun;
	float faiz,ucret;
	
		while (1)
		{
			printf("Anaparayi girin: (Cikis icin -1): ");
			scanf("%d",&anapara);
				if(anapara==-1)
				{
					printf("Cikis yapilmistir.\a");
					break;
				}
			printf("Faiz oranini girin: ");
			scanf("%f",&faiz);
			printf("Gun sayisini girin: ");
			scanf("%d", &gun);
			ucret=anapara*faiz*gun/365;
				
			printf("Faiz ucreti : %f\n\n", ucret);
	    }
					
	
	
	
	
	
	
	
}
