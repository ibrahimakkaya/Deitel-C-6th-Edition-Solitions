#include <stdio.h>

float ucretHesapla(float);

int main()
{
	float a;
	int i;
	printf("Lutfen 3 aracin kalacagi saatleri giriniz.\n");
	for(i = 0 ; i < 3 ; i++)
	{	
	scanf("%f", &a);
	printf("%d.Arabanin ucreti :  \t", i+1);
	printf("%12.4f$\n", ucretHesapla(a));
	}

}

float ucretHesapla(float a)
{
	if(a>=3 && a<24)
	{
		return (a-3)/2+2;
	}
	if(a<3)
	{
		return 2;
	}
	else
		return 10;
		
	
}
