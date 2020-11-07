#include <stdio.h>

int main()
{
	int i, satir;
	
	for(satir = 10 ; satir >=1 ; satir--)
	{
		for(i=1 ; i<= satir ; i++)
		{
			printf("*");
		}	
		printf("\n");
	}	
	
}
