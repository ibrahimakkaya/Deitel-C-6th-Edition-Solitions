#include <stdio.h>

int tersten(int);

int main()
{
	int a;
	printf("Lutfen sayi giriniz.");
	scanf("%d", &a);
	printf("%d", tersten(a));
}
int tersten(int x)
{
	int final = 0;
	while(x>0)
	{
		final = (final*10) + (x%10);
		x = x / 10;
	}
	return final;
}
