/* 1'den 15'e kadar olan tek tamsayilarin carpimini hesaplayan ve ekrana yazdiran bir program yaziniz. Halil Ibrahim Akkaya */ 

#include <stdio.h>

int main()
{
	int i, carpim = 1;
	
	for(i=1 ; i<=15 ; i++)
	{
		if(i%2!=0)
		{
			carpim = carpim * i;
		}
	
	}
	printf("1den 15e kadar olan tek sayilarin carpimi : %d" , carpim);
	

}
