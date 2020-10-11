#include <stdio.h>


int main()
{
	int i,sayi,enbuyuk;
	i=0;
	enbuyuk;
	
	while(i<10)
	{
		printf("Sayi giriniz:");
		scanf("%d",&sayi);
		i++;
		
		if(sayi>enbuyuk)
			enbuyuk=sayi;
		
	}
	printf("Girdiginiz sayilardan en buyugu: %d", enbuyuk);
}
