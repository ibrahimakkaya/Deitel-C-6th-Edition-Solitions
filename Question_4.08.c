#include <stdio.h>

int main()
{
	int i, j , x , y;
	
	printf("1-20 arasinda iki tamsayi girin.");
	scanf("%d%d",&x, &y);
	
	for(i=1;i<=y; i++)
	{
		for(j=1 ; j<= x ; j++)
			printf("@");
	printf("\n");
	}
}
