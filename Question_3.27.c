#include <stdio.h>

//10 sayının içerisindeki en büyük iki sayıyı bulun.

int main ()
{
	int i,sayi,enbuyuk,enbuyukikinci;
	i=0;
		while(i<10)
		{
			printf("Bir sayi giriniz:(Cikmak icin -1);  ");
			scanf("%d", &sayi);
			i++;
				if(sayi>enbuyuk)
				{
					enbuyukikinci=enbuyuk;
					enbuyuk=sayi;
				}
				
			if(enbuyuk>sayi)
			{
				if(sayi>enbuyukikinci)
				 {
				 	enbuyukikinci=sayi;
				 }
			}
		}	
		printf("En buyuk sayi: %d , En buyuk ikinci sayi: %d" ,enbuyuk,enbuyukikinci);
	
}
