#include <stdio.h>

int main()
{
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	
	switch( x % 2 )
	{
		case 0:
			printf("Sayiniz cift sayidir.");
			break;
		case 1:
			printf("Sayiniz tek sayidir.");
			break;
	}
}
