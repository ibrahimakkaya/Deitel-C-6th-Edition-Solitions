#include <stdio.h>
#include <math.h>

int main()
{
	float e;
	int n,fakt,i;
	printf("Deger giriniz:");
	scanf("%d", &n);
	fakt=1;
	
	for(i=1;i<=n;i++)
	{
		fakt=fakt*i;
		e = e + (pow(n,i)/fakt);
	}
	printf("e: %f", e);
	
}
