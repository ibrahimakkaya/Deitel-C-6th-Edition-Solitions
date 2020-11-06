#include <stdio.h>

int main()
{

int i, toplam;
toplam = 0;


	for(i=1; i<=30; i++)
	{
		if(i%2==0)
			toplam = toplam + i;
	}
	
	printf("2'den 30'a kadar olan cift sayilarin toplami : %d", toplam);
	
}
