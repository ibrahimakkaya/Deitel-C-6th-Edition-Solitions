#include <stdio.h>

int main()
{
	int sayac = 2;
	
	do
	{
		if(sayac%2 == 0)
			printf("%d\n",sayac);
			
		sayac+=2;
	}
	while (sayac<=100);
	
}
