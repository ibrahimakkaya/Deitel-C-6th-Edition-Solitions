#include <stdio.h>

int main()
{
	int i;
	i=0;
		while(i<3000000)
		{
			printf("%d",i+=1000);
				if(i%1000000)
					printf("Ding!");
		}
}
