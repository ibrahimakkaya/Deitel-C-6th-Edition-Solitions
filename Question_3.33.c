#include <stdio.h>

int main()
{
	int yatay,dikey,i=0,j=0;
	printf("Dikdorgenin yatay,dikey degerini sirayla giriniz: ");
	scanf("%d %d", &yatay, &dikey);
		for(i=0 ; i<yatay ; i++)
		{
			for(j=0; j<dikey; j++)
			{
				printf("*");
			}
			printf("\n");
		} 
		 
		
}
