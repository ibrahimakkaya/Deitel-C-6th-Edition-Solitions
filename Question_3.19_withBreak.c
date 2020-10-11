#include <stdio.h>

// Eger -1 komutunu girdigimizde loopun direkt tamamlanmasini istiyorsak, if degiskeni icerisinde sonlandirici degerimizi giriyoruz ve if blogunda break komutuyla programin bitmesini sagliyoruz.

int main()
{
	int baz,satis,maas;
	baz=200;
	
		while(satis!=-1)
		{
		printf("Satis tutarinizi giriniz: ");
		scanf("%d", &satis);
			if(satis==-1)
			{
			
				printf("Cikis yapildi.\a");
				break;
		    }
		maas=((baz+satis)/100*9)+baz;
		printf("Total maasiniz: %d\n",maas);
			
		}
		
				
	
	
	
	
	
	
	
	
}
