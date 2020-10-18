#include <stdio.h>

int main()
{
	int i,n,j;
	float e=1.0, nFact=1;
	printf("Euler'in dogruluk payini giriniz.");
	scanf("%d", &n);
	
	for(i=1; i<=n;i++)
	{
		nFact=i*nFact;
		e = e + (1.0/nFact);
	}
	printf("e = %.24f", e);
}
