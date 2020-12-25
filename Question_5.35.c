#include <stdio.h>

int main()
{
	int x,sayi;
	printf("1000 ile 1 arasinda bir sayi tuttum.\n Tahmin edebilir misin?\n Hadi bakalim ilk tahminini gir:\t");
	
		srand(time(NULL));
		sayi = srand() % 1000 + 1;
		while(x!=sayi)
		{
			
		scanf("%d", &x);
		if(x>1000 || x<1)
		{
		printf("Yanlis sayi girdiniz lutfen tekrar giriniz.");
		}
		
		if(x>sayi)
		{
			printf("Cok buyuk!");
		}
		
		if(x<sayi)
		{
			printf("Cok kucuk!");
		}
		
		
		}
		printf("Tebrikler! Dogru tahmin ettiniz!.");
	
}
