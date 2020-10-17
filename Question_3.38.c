#include <stdio.h>

int main()
{
	int i = 0;
	
	while(i<100)
	{
		printf("*");
		i++;
			if(i%10==0)
				printf("\n");
	}
}
